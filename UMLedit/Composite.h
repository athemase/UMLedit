#ifndef CLASS_H
#define CLASS_H
#include <UMLGraphicsItem.h>


class Composite : public UMLGraphicsItem{
public:
	Class(QPointF);
	void paint(QPainter *, const QStyleOptionGraphicsItem *, QWidget *);
	QRectF boundingRect() const;
	QPainterPath shape() const;
	void add_object(UMLGraphicsItem object);
	void free_Composite();

protected:
	vector<UMLGraphicsItem> collect;
};

#endif