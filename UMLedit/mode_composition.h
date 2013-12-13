#ifndef MODE_GENERALIZATION_H
#define MODE_GENERALIZATION_H

#include "mode_line.h"
class UMLSenceBackground;
class UMLGraphicsItem;
class QPointF;
class UMLGraphicsLine;

class mode_composition : public mode_line{
public:
	mode_composition();
	void mousePressEvent(QGraphicsSceneMouseEvent*);
	void mouseMoveEvent(QGraphicsSceneMouseEvent*);
	void mouseReleaseEvent(QGraphicsSceneMouseEvent*);
	UMLGraphicsLine* set_line(Port*,Port*);
};

#endif

