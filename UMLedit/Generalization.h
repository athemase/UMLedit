#ifndef GENERALIZATION_H
#define GENERALIZATION_H
#include <UMLGraphicsLine.h>

class Port;

class Generalization : public UMLGraphicsLine{
public:
	Generalization(Port* port1,Port* port2);
	void paint(QPainter *, const QStyleOptionGraphicsItem *, QWidget *);
	QRectF boundingRect() const;
	void rotate_Triangle(double  Triangle_pos[3][2],double sin,double cos);
protected:
	int Triangle_length;
};

#endif