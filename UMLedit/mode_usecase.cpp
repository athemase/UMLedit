#include <QGraphicsSceneMouseEvent>
#include "UMLSenceBackground.h"
#include "UMLGraphics.h"
#include "UMLGraphicsItem.h"
#include "mode_usecase.h"
#include "UseCase.h"

mode_usecase::mode_usecase(){
}

void mode_usecase::mousePressEvent(QGraphicsSceneMouseEvent *e){
	mode_item::mousePressEvent(e);
}

void mode_usecase::mouseMoveEvent(QGraphicsSceneMouseEvent *e){

}

void mode_usecase::mouseReleaseEvent(QGraphicsSceneMouseEvent *e){

}




UMLGraphics* mode_usecase::new_item(QPointF P){
	UMLGraphics *temp = new UseCase(P);
	return temp;
}