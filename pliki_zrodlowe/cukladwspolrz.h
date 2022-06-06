#ifndef CUKLADWSPOLRZ_H
#define CUKLADWSPOLRZ_H

#include <QGraphicsItem>
#include <QPainter>
#include <QStyleOptionGraphicsItem>

class CUkladWspolrz : public QGraphicsItem
{
public:
    CUkladWspolrz();

    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
};

#endif // CUKLADWSPOLRZ_H
