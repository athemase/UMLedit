#ifndef MODE_LINE_H
#define MODE_LINE_H


#include "UMLMode.h"
class UMLSenceBackground;
class UMLGraphicsItem;
class UMLGraphicsLine;
class QGraphicsLineItem;
class QPointF;
class Port;

class mode_line : public UMLMode{
public:
	mode_line();
	void mousePressEvent(QGraphicsSceneMouseEvent*);
	void mouseMoveEvent(QGraphicsSceneMouseEvent*);
	void mouseReleaseEvent(QGraphicsSceneMouseEvent*);
	virtual UMLGraphicsLine* set_line(Port*,Port*)=0;
	QString get_mode();
protected:
	UMLGraphicsItem *FirstItem;
	QGraphicsLineItem *temp_line;
	QPointF start;
};

#endif

