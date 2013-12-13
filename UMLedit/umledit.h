#ifndef UMLEDIT_H
#define UMLEDIT_H

#include <QtGui/QMainWindow>
#include "ui_umledit.h"


class UMLSenceBackground;
class UMLedit : public QMainWindow
{
	Q_OBJECT

public:
	UMLedit(QWidget *parent = 0, Qt::WFlags flags = 0);
	~UMLedit();
	

private:
	Ui::UMLeditClass ui;
    void init(QToolButton * tool);
	void button_Trigger();
	QButtonGroup * toolGroup;
	UMLSenceBackground * scene;
private slots:
	void onToolGroupClicked( int id );
	void GroupClicked();
	void DeGroupClicked();
	void setNameClicked();
};

#endif // UMLEDIT_H
