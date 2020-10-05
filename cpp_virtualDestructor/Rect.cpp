#include "Rect.h"

Rect::Rect(int width, int height)
{
	cout << "Rect()" << endl;
	m_iWidth = width;
	m_iHeight = height;
}

Rect::~Rect()
{
	cout << "~Rect()" << endl;
}

double Rect::calcArea()
{
	cout << "Rect->calcArea()" << endl;
	return m_iWidth*m_iHeight;
}
