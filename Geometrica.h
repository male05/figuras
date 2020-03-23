#ifndef _GEOMETRICA_H
#define _GEOMETRICA_H
#include <iostream>

#include <string.h>

using namespace std;

class Geometrica {
public:

    virtual float area();
    virtual float perimetro();

    virtual string nameClass(){return "";}

    void setX(float x)      {_xc = x;}
    float getX()            {return _xc;}
    void setY(float y)      {_yc = y;}
    float getY()            {return _yc;}
    void setAngulo(float a) {_angulo = a;}
    float getAngulo()       {return _angulo;}


    Geometrica();
    ~Geometrica();

private:

    float _xc;
    float _yc;
    float _angulo;

};

#endif //_GEOMETRICA_H
