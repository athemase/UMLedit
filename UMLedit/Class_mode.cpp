#include <QGraphicsSceneMouseEvent>
#include "UMLSenceBackground.h"
#include "UMLGraphics.h"
#include "UMLGraphicsItem.h"
#include "Class.h"
#include "Class_mode.h"

Class_mode::Class_mode(UMLSenceBackground *sceneInput): UMLMode(sceneInput){
	
}

void Class_mode::mousePress(QGraphicsSceneMouseEvent *e){
	new_class = new Class(e -> scenePos());
	scene ->addItem(new_class);
}

void Class_mode::mouseMove(QGraphicsSceneMouseEvent *e){

}

void Class_mode::mouseRelease(QGraphicsSceneMouseEvent *e){

}