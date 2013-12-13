#include "Generalization.h"
#include <QPainter>
#include <QStyleOptionGraphicsItem>
#include <QColor>
#include <QLineF>
#include "Port.h"

Generalization::Generalization(Port* port1,Port* port2) : UMLGraphicsLine(port1,port2){
	penWidth = 3;
	Triangle_length= 10;
}

void Generalization::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget){
	 UMLGraphicsLine::paint(painter,option,widget);
	 double sin=0,cos=0;
	 sin = (end->get_location().y()-start->get_location().y())/length;
	 cos = (end->get_location().x()-start->get_location().x())/length;
	 double Triangle_pos[3][2] = {Triangle_length,Triangle_length,0,0,Triangle_length,-1*Triangle_length};
	 rotate_Triangle(Triangle_pos,sin,cos);
	 QPolygonF Triangle;
	 for(int i =0;i<3;i++)
        Triangle.append(QPointF( Triangle_pos[i][0] + start->get_location().x(), Triangle_pos[i][1] + start->get_location().y()));
	 QPen pen(Qt::black, penWidth);
	 painter -> setBrush(Qt::white);
	 painter->setPen(pen);
	 painter->drawPolygon(Triangle,Qt::OddEvenFill);
}



QRectF Generalization::boundingRect() const{

	return this->UMLGraphicsLine::boundingRect().adjusted(- (penWidth+Triangle_length),-  (penWidth+Triangle_length),  (penWidth+Triangle_length), (penWidth+Triangle_length));
}

void Generalization::rotate_Triangle(double  Triangle_pos[3][2] ,double sin,double cos)
{
	double x=0,y=0;
	for(int i =0;i<3;i++)
	{
		x=Triangle_pos[i][0];
		y=Triangle_pos[i][1];
		Triangle_pos[i][0] = x*cos + y*(-1)*sin;
		Triangle_pos[i][1] = x*sin + y*cos;
	}

}
