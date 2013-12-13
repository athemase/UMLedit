#ifndef ASSOCIATION_H
#define ASSOCIATION_H
#include <UMLGraphicsLine.h>

class QString;
class Port;

class Association : public UMLGraphicsLine{
public:
	Association(Port* port1,Port* port2);
	void paint(QPainter *, const QStyleOptionGraphicsItem *, QWidget *);
	QRectF boundingRect() const;
//	QPainterPath shape() const;
protected:

};

#endif