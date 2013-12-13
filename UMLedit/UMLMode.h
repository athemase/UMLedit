#ifndef UMLMODE_H
#define UMLMODE_H

class QGraphicsSceneMouseEvent;
class UMLSenceBackground;
class QString;



class UMLMode{
public:
	UMLMode();
	virtual void mousePressEvent(QGraphicsSceneMouseEvent*) = 0;
	virtual void mouseMoveEvent(QGraphicsSceneMouseEvent*) = 0;
	virtual void mouseReleaseEvent(QGraphicsSceneMouseEvent*) = 0;
	virtual QString get_mode();
};

#endif