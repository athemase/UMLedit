#ifndef UMLGRAPHICS_H
#define UMLGRAPHICS_H
#include <QGraphicsItem>
class QPainter;
class QStyleOptionGraphicsItem;
class QWidget;


class UMLGraphics : public QGraphicsItem{
public:
	virtual void paint(QPainter *, const QStyleOptionGraphicsItem *, QWidget *) = 0;
};

#endif