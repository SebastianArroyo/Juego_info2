#include "vida.h"
#include <QFont>

//En esta clase se tendran los metodos correspondientes a la vida como incrementarla o decrementarla
//de acuerdo a la dinamica del juego.

vida::vida(QGraphicsItem *parent): QGraphicsTextItem(parent)
{
    vidaT = 10;
    setPlainText(QString("Vidas: ")+ QString::number(vidaT));
    setDefaultTextColor(Qt::black);
    setFont(QFont("Segoe Script",16));
}

void vida::decrease()
{
    vidaT--;
    setPlainText(QString("Vidas: ")+ QString::number(vidaT));
}

void vida::increase()
{
    vidaT++;
    setPlainText(QString("Vidas: ")+ QString::number(vidaT));
}

int vida::getvidaT()
{
    return vidaT;
}

void vida::setVidaT(int value)
{
    vidaT = value;
    setPlainText(QString("Vidas: ")+ QString::number(vidaT));
}

