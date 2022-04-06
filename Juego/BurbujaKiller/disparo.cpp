#include "disparo.h"

//Simulará el disparo con movimieto parabólico con gravedad 0. El disparo se efetuará desde
// la parte inferior hasta la parte superior de la escena. Sin movimieto en el eje x, sólo en y

float disparo::getPX() const
{
    return PX;
}

float disparo::getR() const
{
    return R;
}

float disparo::getPY() const
{
    return PY;
}

void disparo::setVX(float value)
{
    VX = value;
}

disparo::disparo(float posX_, float posY_, float velY_)
{
    PX=posX_;
    PY=posY_;
    mass=10;
    R=2.5;
    VX=0;
    VY=velY_;
    AX=0;
    AY=0;
    G=0;//2
    K=0;
    e=0;
    V = 0;
    dt = 0.1;
    escala=1;
}

disparo::~disparo()
{
    //delete this;
}


