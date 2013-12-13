#include <QGraphicsSceneMouseEvent>
#include "mode_association.h"
#include "Association.h"
#include "UMLGraphicsLine.h"
#include "Port.h"

mode_association::mode_association() : mode_line(){
}

void mode_association::mousePressEvent(QGraphicsSceneMouseEvent *e){
	mode_line::mousePressEvent(e);
}

void mode_association::mouseMoveEvent(QGraphicsSceneMouseEvent *e){
    mode_line::mouseMoveEvent(e);
}

void mode_association::mouseReleaseEvent(QGraphicsSceneMouseEvent *e){
	 mode_line::mouseReleaseEvent(e);
}

UMLGraphicsLine* mode_association::set_line(Port* start,Port* end)
{
	UMLGraphicsLine *temp ;
	temp = new Association(start,end);
	return temp;
}
