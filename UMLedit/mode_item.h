#ifndef MODE_ITEM_H
#define MODE_ITEM_H

#include "UMLMode.h"
class UMLSenceBackground;
class UMLGraphics;

class mode_item : public UMLMode{
public:
	mode_item();
	void mousePressEvent(QGraphicsSceneMouseEvent*);
	void mouseMoveEvent(QGraphicsSceneMouseEvent*);
	void mouseReleaseEvent(QGraphicsSceneMouseEvent*);
	QString get_mode();
protected:
	virtual UMLGraphics* new_item(QPointF)=0;
};

#endif