#include "cukladwspolrz.h"

CUkladWspolrz::CUkladWspolrz()
{

}

QRectF CUkladWspolrz::boundingRect() const
{
    return QRectF(0, 0, 400, 400);
}

void CUkladWspolrz::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{    
    QPen pen(Qt::black);
    pen.setWidth(1);

    painter->setPen(pen);
    painter->drawLine(0, 200, 400, 200);
    painter->drawLine(200, 0, 200, 400);
}
