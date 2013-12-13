#ifndef UMLSENCEBACKGROUND_H
#define UMLSENCEBACKGROUND_H
#include <QtGui\QGraphicsScene>
class QGraphicsSceneMouseEvent;
class UMLMode;
class QString;



class UMLSenceBackground : public QGraphicsScene{
public:
	void setMode(UMLMode* mode);
	void changeItemsName();
	void GroupItems();
	void DeGroupItems();
	static UMLSenceBackground* getInstance();
private:
	UMLSenceBackground();
	void mousePressEvent(QGraphicsSceneMouseEvent*);
	void mouseMoveEvent(QGraphicsSceneMouseEvent*);
	void mouseReleaseEvent(QGraphicsSceneMouseEvent*);
	static UMLSenceBackground * uniqueInstance ;
	UMLMode *mode;
};

#endif