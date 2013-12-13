#ifndef CLASS_H
#define CLASS_H
#include <UMLGraphicsItem.h>

class QString;

class Class : public UMLGraphicsItem{
public:
	Class(QPointF);
	void paint(QPainter *, const QStyleOptionGraphicsItem *, QWidget *);
	QRectF boundingRect() const;
	void draw_text(QPainter *painter);
};

#endif