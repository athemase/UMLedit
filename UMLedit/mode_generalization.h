#ifndef MODE_COMPOSITION_H
#define MODE_COMPOSITION_H

#include "mode_line.h"
class UMLSenceBackground;
class UMLGraphicsItem;
class QPointF;
class UMLGraphicsLine;

class mode_generalization : public mode_line{
public:
	mode_generalization();
	void mousePressEvent(QGraphicsSceneMouseEvent*);
	void mouseMoveEvent(QGraphicsSceneMouseEvent*);
	void mouseReleaseEvent(QGraphicsSceneMouseEvent*);
	UMLGraphicsLine* set_line(Port*,Port*);
};

#endif