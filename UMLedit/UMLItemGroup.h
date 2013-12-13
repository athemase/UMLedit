#ifndef UMLITEMGROUP_H
#define UMLITEMGROUP_H

#include <QGraphicsItemGroup>

class UMLItemGroup : public QGraphicsItemGroup{
public:
	UMLItemGroup();
	void paint(QPainter*, const QStyleOptionGraphicsItem*, QWidget*);
};

#endif