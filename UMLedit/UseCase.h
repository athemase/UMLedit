#ifndef UseCase_H
#define UseCase_H
#include <UMLGraphicsItem.h>

class QString;

class UseCase : public UMLGraphicsItem{
public:
	UseCase(QPointF);
	void paint(QPainter *, const QStyleOptionGraphicsItem *, QWidget *);
	QRectF boundingRect() const;
	void set_text(QString name);
	void draw_text(QPainter *painter);
};

#endif