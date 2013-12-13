#include "UseCase.h"
#include <QPainter>
#include <QStyleOptionGraphicsItem>
#include <QColor>
#include "Port.h"

UseCase::UseCase(QPointF pos) : UMLGraphicsItem(pos){
	width = 112;
	height = 64;
	penWidth = 4;
	nodeWidth = 6;
	setPortPosAndOffset();
	name = "UseCase5566";
}

void UseCase::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget){
	QColor color(Qt::white);
	QColor pen_color(0,0,196);
	QPen pen(pen_color, penWidth);
	painter -> setPen(pen);
	painter -> setBrush(color);
	painter -> drawEllipse(boundingRect());

	draw_text(painter);
	UMLGraphicsItem::paint(painter, option, widget);

}

QRectF UseCase::boundingRect() const{
	return QRectF(	-(width / 2) - penWidth / 2,
					-(height / 2) - penWidth / 2,
					width + penWidth,
					height + penWidth);
}

void UseCase::draw_text(QPainter *painter)
{
	painter -> setPen(Qt::black);
	QFont font(painter -> font());
	font.setPointSize(12);
	font.setBold(true);
	painter -> setFont(font);
	painter -> drawText(boundingRect(), Qt::AlignCenter, get_name());
}

