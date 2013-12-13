#ifndef UMLGRAPHICSLINE_H
#define UMLGRAPHICSLINE_H

#include <QGraphicsLineItem>
class QPainter;
class QStyleOptionGraphicsItem;
class QWidget;
class QString;
class QPointF;
class Port;

class UMLGraphicsLine : public QGraphicsLineItem{
public:
	UMLGraphicsLine();
	UMLGraphicsLine(Port* port1,Port* port2);
	virtual void paint(QPainter *, const QStyleOptionGraphicsItem *, QWidget *);
	//virtual QRectF boundingRect() const = 0;
	void set_start(Port* port);
	void set_end(Port* port);
	double get_Slope();
	//int Direction();
	void set_pos();
	QPointF temp(int);

protected:
	int penWidth;
	Port* start;
	Port*  end;
	int length;
};

#endif