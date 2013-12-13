#ifndef COMPOSITION_H
#define COMPOSITION_H
#include <UMLGraphicsLine.h>

class Port;

class Composition : public UMLGraphicsLine{
public:
	Composition(Port* port1,Port* port2);
	void paint(QPainter *, const QStyleOptionGraphicsItem *, QWidget *);
	QRectF boundingRect() const;
	void rotate_Diamond(double  Diamond_pos[4][2],double sin,double cos);
protected:
	int Diamond_length;
};

#endif