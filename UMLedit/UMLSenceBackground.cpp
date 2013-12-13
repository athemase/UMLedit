#include "UMLSenceBackground.h"
#include "UMLGraphicsItem.h"
#include <QGraphicsSceneMouseEvent>
#include <QInputDialog>
#include <QString>
#include <QGraphicsView>
#include "UMLMode.h"
#include "mode_cursor.h"
#include "UMLItemGroup.h"

UMLSenceBackground* UMLSenceBackground::uniqueInstance = NULL;

UMLSenceBackground::UMLSenceBackground(){
	this->mode = new mode_cursor();
}

UMLSenceBackground* UMLSenceBackground::getInstance()
{
	if(uniqueInstance == NULL) {
		uniqueInstance = new UMLSenceBackground();
	}
	return uniqueInstance;
}

void UMLSenceBackground::setMode(UMLMode* mode)
{
	delete this->mode;
	this->mode = mode;
}


void UMLSenceBackground::mousePressEvent(QGraphicsSceneMouseEvent *e){
	if (e -> button() == Qt::LeftButton )
		mode -> mousePressEvent(e);
	QGraphicsScene::mousePressEvent(e);
}
void UMLSenceBackground::mouseMoveEvent(QGraphicsSceneMouseEvent *e)
{
	mode -> mouseMoveEvent(e);
	if(mode->get_mode() != "UMLGraphicsLine")
	QGraphicsScene::mousePressEvent(e);
}

void UMLSenceBackground::mouseReleaseEvent(QGraphicsSceneMouseEvent *e)
{
	if (e -> button() == Qt::LeftButton )
    	mode -> mouseReleaseEvent(e);
	QGraphicsScene::mouseReleaseEvent(e);
}

void UMLSenceBackground::changeItemsName()
{
	QList<QGraphicsItem*> itemsSelected(selectedItems());
	if(itemsSelected.size() > 0 ){
		for (int i = 0; i < itemsSelected.count(); i++){
			UMLGraphicsItem *item = dynamic_cast<UMLGraphicsItem*>(itemsSelected[i]);
			if(item){
				QString name = QInputDialog::getText(views().first(),"Set name","Enter a Text",QLineEdit::Normal,"");
		       if(! name.isEmpty() )
				item -> set_name(name);
			}
		}
	}
}

void UMLSenceBackground::GroupItems()
{
	QList<QGraphicsItem*> itemsSelected(selectedItems());
	if(itemsSelected.size() > 1){
		UMLItemGroup *group = new UMLItemGroup;
		addItem(group);
		std::for_each( itemsSelected.begin(), itemsSelected.end(), [group]( QGraphicsItem * item )->void {
			item->setFlags(QGraphicsItem::ItemIsMovable);
			group->addToGroup( item );
	    } );
	}
}


void UMLSenceBackground::DeGroupItems()
{
	QList<QGraphicsItem*> itemsSelected(selectedItems());
	QList<QGraphicsItem*> selectedInGroup;
	if(itemsSelected.size() > 0){
		for (int i = 0; i < itemsSelected.size(); i++){
			UMLItemGroup *itemCasted = dynamic_cast<UMLItemGroup*>(itemsSelected[i]);
			if (itemCasted){
				itemCasted -> setSelected(false);
				selectedInGroup = itemCasted -> childItems();
				destroyItemGroup(itemCasted);
				for (int j = 0; j < selectedInGroup.size(); j++){
					selectedInGroup[j] -> setFlags(QGraphicsItem::ItemIsMovable | QGraphicsItem::ItemIsSelectable);
					selectedInGroup[j] -> setSelected(false);
				}
			}
		}
	}
}

