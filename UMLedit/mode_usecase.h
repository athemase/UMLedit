#ifndef MODE_USECASE_H
#define MODE_USECASE_H

#include "mode_item.h"
class UMLSenceBackground;

class mode_usecase : public mode_item{
public:
	mode_usecase();
	void mousePressEvent(QGraphicsSceneMouseEvent*);
	void mouseMoveEvent(QGraphicsSceneMouseEvent*);
	void mouseReleaseEvent(QGraphicsSceneMouseEvent*);
protected:
	UMLGraphics* new_item(QPointF);

};

#endif