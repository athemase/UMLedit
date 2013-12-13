#include <QGraphicsSceneMouseEvent>
#include "mode_generalization.h"
#include "Generalization.h"
#include "UMLGraphicsLine.h"
#include "Port.h"



mode_generalization::mode_generalization() : mode_line(){
}


void mode_generalization::mousePressEvent(QGraphicsSceneMouseEvent *e){
	mode_line::mousePressEvent(e);
}

void mode_generalization::mouseMoveEvent(QGraphicsSceneMouseEvent *e){
    mode_line::mouseMoveEvent(e);
}

void mode_generalization::mouseReleaseEvent(QGraphicsSceneMouseEvent *e){
	 mode_line::mouseReleaseEvent(e);
}

UMLGraphicsLine* mode_generalization::set_line(Port* start,Port* end)
{
	UMLGraphicsLine *temp ;
	temp = new Generalization(start,end);
	return temp;
}
