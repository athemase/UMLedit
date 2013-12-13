#ifndef UMLGRAPHICSITEM_H
#define UMLGRAPHICSITEM_H
#include <QGraphicsItem>
#include "UMLGraphics.h"
class QPainter;
class QStyleOptionGraphicsItem;
class QWidget;
class QString;
class QPointF;
class Port;

class UMLGraphicsItem : public UMLGraphics{
public:
	UMLGraphicsItem(QPointF);
	virtual void paint(QPainter *, const QStyleOptionGraphicsItem *, QWidget *);
	Port* getAttachPort(QPointF);
	virtual QRectF boundingRect() const = 0;
	void showSelect(QPainter *);
	void setPortPosAndOffset();
	void set_name(QString name);
	QString get_name();


protected:
	void setPort();
	int width;
	QString name;
	int height;
	int penWidth;
	int nodeWidth;
    Port *port;
};

#endif