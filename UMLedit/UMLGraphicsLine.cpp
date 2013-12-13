#include "UMLGraphicsLine.h"
#include <QPainter>
#include "Port.h"
#include "math.h"
#include <qdebug.h>



UMLGraphicsLine::UMLGraphicsLine(Port* port1,Port* port2){
	this -> setZValue(-1);
	this->set_start(port1);
	this->set_end(port2);
	set_pos();
}

void UMLGraphicsLine::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget){
	QGraphicsLineItem::paint(painter,option,widget);
}

void UMLGraphicsLine::set_pos()
{
	QPen pen(Qt::black, penWidth);
	this->setPen(pen);
	this->setLine(QLineF(start->get_location(),end->get_location() ));
	length =  sqrt(pow((this->start)->get_location().x()-(this->end)->get_location().x(),2) + pow((this->start)->get_location().y()-(this->end)->get_location().y(),2));
}


void UMLGraphicsLine::set_start(Port* port)
{
	this->start = port;
}

void UMLGraphicsLine::set_end(Port* port)
{
	this->end = port;
}

double UMLGraphicsLine::get_Slope()
{
	return  ((this->end)->get_location().y()-(this->start)->get_location().y())/((this->end)->get_location().x()-(this->start)->get_location().x());
}
/*
int UMLGraphicsLine::Direction()
{
	if((this->start)->get_location().x()<(this->end)->get_location().x())
	{
		if((this->start)->get_location().y()<(this->end)->get_location().y())
		   return 0;
		else
		   return 1;
	}
	else
	{
		if((this->start)->get_location().y()<(this->end)->get_location().y())
		   return 2;
		else
		   return 3;
	}
}*/
QPointF UMLGraphicsLine::temp(int a){
   if(a ==0)
	   return start->get_location();
   else
	   return end->get_location();
}