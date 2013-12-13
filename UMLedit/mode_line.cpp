#include <QGraphicsSceneMouseEvent>
#include "UMLSenceBackground.h"
#include "UMLGraphicsLine.h"
#include "UMLGraphicsItem.h"
#include "mode_line.h"
#include <QGraphicsLineItem>
#include <QGraphicsItem>
#include <QPointF>
#include <QPen>
#include "Port.h"

mode_line::mode_line(){
	FirstItem = NULL;
	temp_line = NULL;
}


void mode_line::mousePressEvent(QGraphicsSceneMouseEvent *e){
	start = e -> scenePos();
	QGraphicsItem *itm  = UMLSenceBackground::getInstance()->itemAt(start);
     FirstItem = dynamic_cast<UMLGraphicsItem*>(itm);
	 if(FirstItem !=NULL)
	 {
	 temp_line = new QGraphicsLineItem(start.x(),start.y(),start.x(),start.y());
	 QPen pen;
	 pen.setColor(Qt::black);
	 pen.setStyle(Qt::DashLine);
	 temp_line->setPen(pen);
	 UMLSenceBackground::getInstance()->addItem(temp_line);
	 }
}

void mode_line::mouseMoveEvent(QGraphicsSceneMouseEvent *e){
    if(FirstItem !=NULL)
	temp_line->setLine(start.x(),start.y(),e -> scenePos().x(),e -> scenePos().y());
}

void mode_line::mouseReleaseEvent(QGraphicsSceneMouseEvent *e){
	if(FirstItem != NULL)
	{
	 delete temp_line;
	 QGraphicsItem *itm2  = UMLSenceBackground::getInstance()->itemAt(e->scenePos());
	 QPointF A = e->scenePos();
     UMLGraphicsItem *Item = dynamic_cast<UMLGraphicsItem*>(itm2);
	 if(Item !=NULL   &&  !FirstItem -> group() && !Item -> group())
	 {
		 UMLGraphicsLine *new_line;
	     new_line = set_line(FirstItem->getAttachPort(start),Item->getAttachPort(e->scenePos()));
		 (FirstItem->getAttachPort(start))->add_line(new_line);
		 Item->getAttachPort(e->scenePos())->add_line(new_line);
	     UMLSenceBackground::getInstance() -> addItem(new_line);
	
	 }
	 FirstItem = NULL;
	 temp_line= NULL;
	}

}

QString mode_line::get_mode()
{
	return "UMLGraphicsLine";
}

