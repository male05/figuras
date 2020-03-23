#ifndef _PENTAGONO_H
#define _PENTAGONO_H

#include "Geometrica.h"

#include <string.h>

class Pentagono: public Geometrica {

public:

    Pentagono(float l, float x = 0., float y = 0.);


    float area();
    float perimetro();


    string nameClass(){return "Pentagono";}


    void setLado(float l) { _lado = l;}
    float getLado() { return _lado;}

private:

    float _lado;

    Pentagono();

};

#endif //_PENTAGONO_H
