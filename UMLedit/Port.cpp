#include "Port.h"
#include "UMLGraphicsItem.h"
#include <qdebug.h>

Port::Port()
{

}

void Port::Set_location(UMLGraphicsItem *pos,QPointF offset)
{
	this->parent = pos;
	this->offset = offset;
}

QPointF   Port::get_location()
{
	QPointF temp ;
	temp.setX(parent->scenePos().x() + offset.x());
	temp.setY(parent->scenePos().y() + offset.y());
	return temp;
}

void Port::add_line(UMLGraphicsLine * line)
{
	total_line.append(line);
}

void Port::update_line()
{
	 for (int i = 0; i < total_line.count(); i++)
	 {
		total_line[i]->set_pos();
	 }
}