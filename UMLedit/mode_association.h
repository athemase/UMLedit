#ifndef MODE_ASSOCIATION_H
#define MODE_ASSOCIATION_H

#include "mode_line.h"
class UMLSenceBackground;
class UMLGraphicsItem;
class QPointF;
class UMLGraphicsLine;

class mode_association : public mode_line{
public:
	mode_association();
	void mousePressEvent(QGraphicsSceneMouseEvent*);
	void mouseMoveEvent(QGraphicsSceneMouseEvent*);
	void mouseReleaseEvent(QGraphicsSceneMouseEvent*);
	UMLGraphicsLine* set_line(Port*,Port*);
};

#endif