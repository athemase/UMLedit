#include "Composition.h"
#include <QPainter>
#include <QStyleOptionGraphicsItem>
#include <QColor>
#include <QLineF>
#include "Port.h"

Composition::Composition(Port* port1,Port* port2) : UMLGraphicsLine(port1,port2){
	penWidth = 3;
	Diamond_length= 10;
}

void Composition::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget){
	 UMLGraphicsLine::paint(painter,option,widget);
	 double sin=0,cos=0;
	 sin = (end->get_location().y()-start->get_location().y())/length;
	 cos = (end->get_location().x()-start->get_location().x())/length;
	 double Diamond_pos[4][2] = {Diamond_length,Diamond_length-3,0,0,Diamond_length,-1*Diamond_length+3,2*Diamond_length,0};
	 rotate_Diamond(Diamond_pos,sin,cos);
	 QPolygonF Diamond;
	 for(int i =0;i<4;i++)
        Diamond.append(QPointF( Diamond_pos[i][0] + start->get_location().x(), Diamond_pos[i][1] + start->get_location().y()));
	 QPen pen(Qt::black, penWidth);
	 painter -> setBrush(Qt::white);
	 painter->setPen(pen);
	 painter->drawPolygon(Diamond,Qt::OddEvenFill);
}



QRectF Composition::boundingRect() const{

	return this->UMLGraphicsLine::boundingRect().adjusted(- (penWidth+Diamond_length),-  (penWidth+Diamond_length),  (penWidth+Diamond_length), (penWidth+Diamond_length));
}

void Composition::rotate_Diamond(double  Triangle_pos[3][2] ,double sin,double cos)
{
	double x=0,y=0;
	for(int i =0;i<4;i++)
	{
		x=Triangle_pos[i][0];
		y=Triangle_pos[i][1];
		Triangle_pos[i][0] = x*cos + y*(-1)*sin;
		Triangle_pos[i][1] = x*sin + y*cos;
	}

}
