#include "Class.h"
#include <QPainter>
#include <QStyleOptionGraphicsItem>
#include <QColor>
#include "Port.h"

Class::Class(QPointF pos) : UMLGraphicsItem(pos){
	width = 120;
	height = 144;
	penWidth = 4;
	nodeWidth = 6;
	setPortPosAndOffset();
	name="Class5566";
}

void Class::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget){

	QColor color(Qt::white);
	painter -> setBrush(color);

	QColor pen_color(0,0,196);
	QPen pen(pen_color, penWidth);
	painter -> setPen(pen);
	
	painter -> drawRect(boundingRect());
	painter -> drawLine(QPointF(-(width / 2), -(height / 2) + height / 3)			, QPointF((width / 2),  -(height / 2) + height / 3));
	painter -> drawLine(QPointF(-(width / 2), -(height / 2) + height * 2 / 3)		, QPointF((width / 2),  -(height / 2) + height * 2 / 3));
	
	draw_text(painter);
	UMLGraphicsItem::paint(painter, option, widget);

}

QRectF Class::boundingRect() const{
	return QRectF(	-(width / 2) - penWidth / 2, 
					-(height / 2) - penWidth / 2,
					width + penWidth,
					height + penWidth);
}


void Class::draw_text(QPainter *painter)
{
	painter -> setPen(Qt::black);
	QFont font(painter -> font());                 
	font.setPointSize(12);
	font.setBold(true);    //³]©w²ÊÅé
	painter -> setFont(font);
	painter -> drawText(boundingRect().adjusted(0, 0, 0, -height * 2 / 3), Qt::AlignCenter, get_name());
}
