#ifndef _CUADRADO_H
#define _CUADRADO_H

#include "Geometrica.h"

#include <string.h>

class Cuadrado: public Geometrica {
public:

    Cuadrado(float l, float x = 0., float y = 0.);


    float area();
    float perimetro();

    string nameClass(){return "Cuadrado";}

    void setLado(float l) { _lado = l;}
    float getLado() { return _lado;}

private:

    float _lado;

    Cuadrado();
};

#endif //_CUADRADO_H
