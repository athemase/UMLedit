#include "UMLGraphicsItem.h"
#include <QPainter>
#include "Port.h"
#include <math.h>
#include <qdebug.h>

UMLGraphicsItem::UMLGraphicsItem(QPointF pos){
	setPos(pos);
	port = new Port[4];
	setFlags(ItemIsMovable | ItemIsSelectable);

}

void UMLGraphicsItem::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget){	
	for(int i = 0;i<4;i++)
      port[i].update_line();

	if (isSelected())
		showSelect(painter);
}


void UMLGraphicsItem::setPortPosAndOffset(){
	port[0].Set_location(this,QPointF((width + penWidth) / 2, 0));
	port[1].Set_location(this,QPointF(-((width + penWidth) / 2), 0));
	port[2].Set_location(this,QPointF(0, -((height + penWidth) / 2)));
	port[3].Set_location(this,QPointF(0, (height + penWidth) / 2));
}


Port* UMLGraphicsItem::getAttachPort(QPointF pos){
	double Distance = pow(pos.x() - (port)->get_location().x(),2) + pow(pos.y() - (port)->get_location().y(),2) ;
	int number = 0;
	for(int i =0 ;i<4;i++)
	{
		double temp = pow(pos.x() - (port+i)->get_location().x(),2) + pow(pos.y() - (port+i)->get_location().y(),2) ;
        if(temp < Distance)
		{
			Distance = temp;
			number = i;
		}
	}
	return port+number;
}

void UMLGraphicsItem::showSelect(QPainter *painter){
	QPen pen(Qt::black, 1);
	pen.setStyle(Qt::SolidLine);
	painter -> setPen(pen);
	painter -> setBrush(Qt::SolidPattern);
	painter -> drawRect(0 - nodeWidth / 2, -(height / 2)- (nodeWidth / 2), nodeWidth, nodeWidth);
	painter -> drawRect(0 - nodeWidth / 2, (height / 2) - (nodeWidth / 2), nodeWidth, nodeWidth);
	painter -> drawRect(-(width / 2)- (nodeWidth / 2), 0 - nodeWidth / 2, nodeWidth, nodeWidth);
	painter -> drawRect((width / 2) - (nodeWidth / 2), 0 - nodeWidth / 2, nodeWidth, nodeWidth);
}


void UMLGraphicsItem::set_name(QString name)
{
	this->name=name;
}

QString UMLGraphicsItem::get_name()
{
	return name;
}

