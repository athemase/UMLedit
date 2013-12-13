#include "UMLItemGroup.h"
#include <QPen>
#include <QPainter>


UMLItemGroup::UMLItemGroup(){
	setFlags(ItemIsMovable | ItemIsSelectable);
}

void UMLItemGroup::paint(QPainter *painter, const QStyleOptionGraphicsItem*, QWidget*){
		QPen pen(painter -> pen());
		pen.setColor(Qt::darkBlue);
		pen.setStyle(Qt::DashLine);
		painter -> setPen(pen);
		painter -> drawRect(boundingRect());

}