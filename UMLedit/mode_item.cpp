#include <QGraphicsSceneMouseEvent>
#include "UMLSenceBackground.h"
#include "UMLGraphics.h"
#include "UMLGraphicsItem.h"
#include "mode_item.h"

mode_item::mode_item(){
}

void mode_item::mousePressEvent(QGraphicsSceneMouseEvent *e){
	UMLGraphics *the_class;
	the_class = new_item(e->scenePos());
	UMLSenceBackground::getInstance() -> addItem(the_class);
}

void mode_item::mouseMoveEvent(QGraphicsSceneMouseEvent *e){

}

void mode_item::mouseReleaseEvent(QGraphicsSceneMouseEvent *e){

}

QString mode_item::get_mode()
{
	return "UMLGraphicsItem";
}

//void mode_item::new_item(UMLGraphics* item,QPointF P){

//}