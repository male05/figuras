#ifndef _TRIANGULO_H
#define _TRIANGULO_H

#include "Geometrica.h"

#include <string.h>

class Triangulo: public Geometrica {
public:

    Triangulo(float b, float h, float x = 0., float y = 0.);


    float area();
    float perimetro();

    string nameClass(){return "Triangulo";}

    void setAltura(float A) {_altura=A;}
    float getAltura() {return _altura;}
    void setBase(float B) {_base=B;}
    float getBase() {return _base;}

private:

    float _base;
    float _altura;

    Triangulo();

};

#endif //_TRIANGULO_H
