#pragma once
#include "Shape.h"
#include "Coordinate.h"
class Circle :
    public Shape
{
public:
    Circle(double r);
    virtual ~Circle();
    virtual double clacArea();
protected:
    double m_dR;
    Coordinate* m_pCenter;
};

