#include "crysrobota.h"

CRysRobota::CRysRobota()
{
    p0_.setX(0);
    p0_.setY(10);

    p1_.setX(0);
    p1_.setY(10);

    p2_.setX(0);
    p2_.setY(10);

    p3_.setX(0);
    p3_.setY(10);

    p4_.setX(0);
    p4_.setY(10);

    p5_.setX(0);
    p5_.setY(10);

    p6_.setX(0);
    p6_.setY(10);

    p7_.setX(0);
    p7_.setY(10);

    // przypisanie kolorów i długopisów
    color_[0].setRgb(0, 255, 255);
    color_[1].setRgb(255, 0, 0);
    color_[2].setRgb(255, 140, 0);
    color_[3].setRgb(255, 0, 0);
    color_[4].setRgb(0, 0, 255);
    color_[5].setRgb(0, 255, 0);
    color_[6].setRgb(128, 128, 0);

    pen_[0].setColor(color_[0]); pen_[0].setWidth(3);
    pen_[1].setColor(color_[1]); pen_[1].setWidth(3);
    pen_[2].setColor(color_[2]); pen_[2].setWidth(3);
    pen_[3].setColor(color_[3]); pen_[3].setWidth(3);
    pen_[4].setColor(color_[4]); pen_[4].setWidth(3);
    pen_[5].setColor(color_[5]); pen_[5].setWidth(3);
    pen_[6].setColor(color_[6]); pen_[6].setWidth(3);
    // <--------------------> <--------------------> <-------------------->
}

QRectF CRysRobota::boundingRect() const
{
    return QRect(0, 0, 400, 400);
}

void CRysRobota::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    /*
    painter->setPen(Qt::magenta);
    painter->drawRect(boundingRect()); */

    painter->setPen(pen_[0]);
    painter->drawLine(p0_, p1_);

    painter->setPen(pen_[1]);
    painter->drawLine(p1_, p2_);

    painter->setPen(pen_[2]);
    painter->drawLine(p2_, p3_);

    painter->setPen(pen_[3]);
    painter->drawLine(p3_, p4_);

    painter->setPen(pen_[4]);
    painter->drawLine(p4_, p5_);

    painter->setPen(pen_[5]);
    painter->drawLine(p5_, p6_);

    painter->setPen(pen_[6]);
    painter->drawLine(p6_, p7_);
}

void CRysRobota::setPoints(QPoint punkty[])
{    
    p0_.setX(200 + punkty[0].x());
    p0_.setY(200 - punkty[0].y());

    p1_.setX(200 + punkty[1].x());
    p1_.setY(200 - punkty[1].y());

    p2_.setX(200 + punkty[2].x());
    p2_.setY(200 - punkty[2].y());

    p3_.setX(200 + punkty[3].x());
    p3_.setY(200 - punkty[3].y());

    p4_.setX(200 + punkty[4].x());
    p4_.setY(200 - punkty[4].y());

    p5_.setX(200 + punkty[5].x());
    p5_.setY(200 - punkty[5].y());

    p6_.setX(200 + punkty[6].x());
    p6_.setY(200 - punkty[6].y());

    p7_.setX(200 + punkty[7].x());
    p7_.setY(200 - punkty[7].y());
}


