#include "Pentagono.h"

#include <math.h>

Pentagono::Pentagono(float l, float x, float y)
{
    _lado = l;
    setX( x );
    setY( y );
}
Pentagono::Pentagono() {}

float Pentagono::area() {return (5*_lado*_lado)/(4*tan(36));}
float Pentagono::perimetro() {return 5*_lado;}
