#ifndef MODE_CLASS_H
#define MODE_CLASS_H

#include "mode_item.h"
class UMLSenceBackground;


class mode_class : public mode_item{
public:
	mode_class();
	void mousePressEvent(QGraphicsSceneMouseEvent*);
	void mouseMoveEvent(QGraphicsSceneMouseEvent*);
	void mouseReleaseEvent(QGraphicsSceneMouseEvent*);


protected:
	UMLGraphics* new_item(QPointF);
};

#endif