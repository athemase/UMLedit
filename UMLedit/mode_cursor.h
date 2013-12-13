#ifndef MODE_CURSOR_H
#define MODE_CURSOR_H

#include "UMLMode.h"
class UMLSenceBackground;

class mode_cursor : public UMLMode{
public:
	mode_cursor();
	void mousePressEvent(QGraphicsSceneMouseEvent*);
	void mouseMoveEvent(QGraphicsSceneMouseEvent*);
	void mouseReleaseEvent(QGraphicsSceneMouseEvent*);
	QString get_mode();
	void selectionAreaSetting(QPointF mousePos);
protected:
	QPointF FirstPos;
	QGraphicsRectItem *selectRect;
};

#endif