#include "Association.h"
#include <QPainter>
#include <QStyleOptionGraphicsItem>
#include <QColor>
#include "Port.h"


Association::Association(Port* port1,Port* port2) : UMLGraphicsLine(port1,port2){
	penWidth = 3;
}

void Association::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget){
	UMLGraphicsLine::paint(painter,option,widget);
}



QRectF Association::boundingRect() const{

	return this->UMLGraphicsLine::boundingRect().adjusted(- penWidth,- penWidth, penWidth, penWidth);
}

