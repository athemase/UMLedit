#include <QGraphicsSceneMouseEvent>
#include "UMLSenceBackground.h"
#include "UMLGraphics.h"
#include "UMLGraphicsItem.h"
#include "mode_class.h"
#include "Class.h"


mode_class::mode_class(){
}

void mode_class::mousePressEvent(QGraphicsSceneMouseEvent *e){
   mode_item::mousePressEvent(e);
}

void mode_class::mouseMoveEvent(QGraphicsSceneMouseEvent *e){

}

void mode_class::mouseReleaseEvent(QGraphicsSceneMouseEvent *e){

}


UMLGraphics* mode_class::new_item(QPointF P){
	UMLGraphics *temp = new Class(P);
	return temp;
}