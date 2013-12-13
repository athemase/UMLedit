#include <QGraphicsSceneMouseEvent>
#include "mode_composition.h"
#include "Composition.h"
#include "UMLGraphicsLine.h"
#include "Port.h"

mode_composition::mode_composition() : mode_line(){
}

void mode_composition::mousePressEvent(QGraphicsSceneMouseEvent *e){
	mode_line::mousePressEvent(e);
}

void mode_composition::mouseMoveEvent(QGraphicsSceneMouseEvent *e){
    mode_line::mouseMoveEvent(e);
}

void mode_composition::mouseReleaseEvent(QGraphicsSceneMouseEvent *e){
	 mode_line::mouseReleaseEvent(e);
}

UMLGraphicsLine* mode_composition::set_line(Port* start,Port* end)
{
	UMLGraphicsLine *temp ;
	temp = new Composition(start,end);
	return temp;
}
