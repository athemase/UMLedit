#include <QGraphicsSceneMouseEvent>
#include "UMLSenceBackground.h"
#include "mode_cursor.h"
#include <QGraphicsRectItem>
#include <QPointF>

mode_cursor::mode_cursor(){
	selectRect = NULL;
}

void mode_cursor::mousePressEvent(QGraphicsSceneMouseEvent *e){
	QGraphicsItem *itemSelected = UMLSenceBackground::getInstance() -> itemAt(e -> scenePos()/*, QTransform()*/);
	if (itemSelected == NULL){
		FirstPos = e->scenePos();
		selectionAreaSetting(FirstPos);
		UMLSenceBackground::getInstance() -> addItem(selectRect);
	}
}

void mode_cursor::mouseMoveEvent(QGraphicsSceneMouseEvent *e){
		if(selectRect){
		QPointF end(e -> scenePos());
		QRectF rect(FirstPos, end);
		selectRect -> setRect(rect.normalized());
	}
}

void mode_cursor::mouseReleaseEvent(QGraphicsSceneMouseEvent *e){
		if(selectRect){
		UMLSenceBackground::getInstance() -> setSelectionArea(selectRect -> mapToScene(selectRect -> shape()), Qt::ContainsItemBoundingRect, QTransform());
		delete selectRect;
		selectRect = NULL;
	}
}

QString mode_cursor::get_mode()
{
	return "cursor";
}


void mode_cursor::selectionAreaSetting(QPointF mousePos){
	selectRect = new QGraphicsRectItem(QRectF(mousePos, QSizeF()));
	FirstPos = mousePos;
	QPen pen(selectRect -> pen());
	pen.setColor(Qt::black);
	pen.setStyle(Qt::DashLine);
	selectRect -> setPen(pen);
}