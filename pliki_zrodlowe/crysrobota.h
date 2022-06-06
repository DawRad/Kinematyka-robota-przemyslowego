#ifndef CRYSROBOTA_H
#define CRYSROBOTA_H

#include <QGraphicsItem>
#include <QPainter>
#include <QStyleOptionGraphicsItem>

class CRysRobota : public QGraphicsItem
{
    QPoint p0_, p1_, p2_, p3_, p4_, p5_, p6_, p7_;
    QPen pen_[7];
    QColor color_[7];

public:
    CRysRobota();

    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);

    void setPoints(QPoint punkty[]);            // tablica punkty ma taki rozmiar, ile punktów mają obiekty CMechanizm
};

#endif // CRYSROBOTA_H
