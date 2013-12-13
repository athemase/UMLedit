#ifndef PORT_H
#define PORT_H

#include <vector>
#include "UMLGraphicsLine.h"
class UMLGraphicsItem;
class QPointF;

class Port{

public:
	 Port();
	 void Set_location(UMLGraphicsItem * pos,QPointF offset);
	 QPointF get_location();
	 void add_line(UMLGraphicsLine * line);
	 void update_line();
private:
	QList<UMLGraphicsLine *> total_line;
	UMLGraphicsItem *parent;
	QPointF offset;
};

#endif