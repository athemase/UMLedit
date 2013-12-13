#include "umledit.h"
#include <QtGui/QToolButton>
#include <QtGui/QApplication>
#include "UMLSenceBackground.h"
#include "mode_class.h"
#include "mode_usecase.h"
#include "mode_cursor.h"
#include "mode_association.h"
#include "mode_generalization.h"
#include "mode_composition.h"


UMLedit::UMLedit(QWidget *parent, Qt::WFlags flags)
	: QMainWindow(parent, flags)
{
	ui.setupUi(this);
	this->setFixedSize(1000,600);


	QToolButton * tool = NULL;
	toolGroup = new QButtonGroup(this);
	toolGroup->setExclusive(true);
	
	scene = UMLSenceBackground::getInstance();
	scene-> setSceneRect(0, 0, 2000, 2000);
	ui.DrawWindow -> setScene(scene);
			
	init(tool);
	button_Trigger();

}

UMLedit::~UMLedit()
{

}

void UMLedit::init(QToolButton * tool)
{
    tool = new QToolButton( this );
	tool->setCheckable( true );
	tool->setText( QObject::tr( "Cursor" ) );
	tool->setToolTip( QObject::tr( "Cursor" ) );
	tool->setIcon( QIcon( "./image/Cursor.png" ) );
	this->ui.mainToolBar->addWidget( tool );
	this ->toolGroup->addButton(tool,0);
	//
	tool = new QToolButton( this );
	tool->setCheckable( true );
	tool->setText( QObject::tr( "Association" ) );
	tool->setToolTip( QObject::tr( "Association" ) );
	tool->setIcon( QIcon( "./image/Association.png" ) );
	this->ui.mainToolBar->addWidget( tool );
	this ->toolGroup->addButton(tool,1);

	tool = new QToolButton( this );
	tool->setCheckable( true );
	tool->setText( QObject::tr( "Generalization" ) );
	tool->setToolTip( QObject::tr( "Generalization" ) );
	tool->setIcon( QIcon( "./image/Generalization.png" ) );
	this->ui.mainToolBar->addWidget( tool );
	this ->toolGroup->addButton(tool,2);

	tool = new QToolButton( this );
	tool->setCheckable( true );
	tool->setText( QObject::tr( "Composition" ) );
	tool->setToolTip( QObject::tr( "Composition" ) );
	tool->setIcon( QIcon( "./image/Composition.png" ) );
	this->ui.mainToolBar->addWidget( tool );
	this ->toolGroup->addButton(tool,3);

	tool = new QToolButton( this );
	tool->setCheckable( true );
	tool->setText( QObject::tr( "Class" ) );
	tool->setToolTip( QObject::tr( "Class" ) );
	tool->setIcon( QIcon( "./image/Class.png" ) );
	this->ui.mainToolBar->addWidget( tool );
	this ->toolGroup->addButton(tool,4);

	tool = new QToolButton( this );
	tool->setCheckable( true );
	tool->setText( QObject::tr( "UseCase" ) );
	tool->setToolTip( QObject::tr( "UseCase" ) );
	tool->setIcon( QIcon( "./image/UseCase.png" ) );
	this->ui.mainToolBar->addWidget( tool );
	this ->toolGroup->addButton(tool,5);

	this ->toolGroup->button(0)->click();

}

void UMLedit::button_Trigger(){
	QObject::connect( this->toolGroup,           SIGNAL( buttonClicked( int ) ),  this, SLOT( onToolGroupClicked( int ) ) );
	QObject::connect( this->ui.actionGroup,      SIGNAL( triggered() ),           this, SLOT( GroupClicked() ) );
	QObject::connect( this->ui.actionUngroup,    SIGNAL( triggered() ),           this, SLOT( DeGroupClicked() ) );
	QObject::connect( this->ui.actionSet_Name,   SIGNAL( triggered() ),           this, SLOT( setNameClicked() ) );
}

void UMLedit::onToolGroupClicked( int id ) {
	UMLMode* mode;
	switch(id)
	{
	case 0:
		mode = new mode_cursor();
		break;
	case 1:
		mode = new mode_association();
		break;
	case 2:
		mode = new mode_generalization();
		break;
	case 3:
		mode = new mode_composition();
		break;
	case 4:
		mode = new mode_class();
		break;
	case 5:
		mode = new mode_usecase();
		break;
	}
	scene ->setMode(mode);
}
void UMLedit::GroupClicked()
{
	scene->GroupItems();
}

void UMLedit::DeGroupClicked()
{
	scene->DeGroupItems();
}

void UMLedit::setNameClicked()
{
	scene->changeItemsName();
}