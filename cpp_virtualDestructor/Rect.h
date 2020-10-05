#pragma once
#include "Shape.h"
class Rect :
    public Shape
{
public :
    Rect(int width, int height);
    virtual ~Rect();
    virtual double calcArea();
protected:
    int m_iWidth;
    int m_iHeight;
};

