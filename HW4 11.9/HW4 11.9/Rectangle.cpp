#include "Rectangle.h"

double Rectangle2D::getX() const 
{
	return x;
}

double Rectangle2D::getY() const 
{
	return y;
}

void Rectangle2D::setX(double x1)
{
	x = x1;//x equals new value
}

void Rectangle2D::setY(double y1)
{
	y = y1;//y equals new value
}

double Rectangle2D::getWidth() const 
{
	return width;//Return width
}

double Rectangle2D::getHeight() const 
{
	return height;//Return height
}

void Rectangle2D::setWidth(double wid)
{
	width = wid;//width equals new value
}

void Rectangle2D::setHeight(double heig)
{
	height = heig;//height equals new value
}

Rectangle2D::Rectangle2D() //Defualt constructor
{
	x = 0;
	y = 0;
	width = 1;
	height = 1;
}

Rectangle2D::Rectangle2D(double x1, double y1, double wid, double heig)
{
	x = x1;
	y = y1;
	width = wid;
	height = heig;
}

double Rectangle2D::getArea() const 
{
	double area = width*height;//Returns area
	return area;
}

double Rectangle2D::getPerimeter() const 
{
	double perim = ((2 * width) + (2 * height));//Return perimeter
	return perim;
}

bool Rectangle2D::contains(double x, double y) const 
{
	if ((x <= this->x + (width / 2) && x >= this->x - (width / 2)) &&
	 (y <= this->y + (height / 2) && y >= this->y - (height / 2)))
		return true;
	else
		return false;
}

bool Rectangle2D::contains(const Rectangle2D &r) const 
{
	if (((x + (width / 2)) >= (r.getX() + (r.getWidth() / 2)) && (x - (width / 2)) <= (r.getX() - (r.getWidth() / 2))) &&
       (y + (height / 2)) >= (r.getY() + (r.getHeight() / 2)) && (y - (height / 2)) <= (r.getY() - (r.getHeight() / 2)))
		return true;        

	else
		return false;
}

bool Rectangle2D::overlaps(const Rectangle2D &r) const 
{
	if (((x + (width / 2)) <= (r.getX() + (r.getWidth() / 2)) && (x - (width / 2)) >= (r.getX() - (r.getWidth() / 2))) &&
	   ((y + (height / 2)) <= (r.getY() + (r.getHeight() / 2)) && (y - (height / 2)) >= (r.getY() - (r.getHeight() / 2))))
		return true;                                                    

	if ((x + (width / 2)) >= (r.getX() + (r.getWidth() / 2)) && (x - (width / 2)) <= (r.getX() + (r.getWidth() / 2)))
		return true;

	if ((x + (width / 2)) >= (r.getX() - (r.getWidth() / 2)) && (x - (width / 2)) <= (r.getX() - (r.getWidth() / 2)))
		return true;

	if ((y + (height / 2)) >= (r.getY() + (r.getHeight() / 2)) && (y - (height / 2)) <= (r.getY() - (r.getHeight() / 2)))
		return true;

	if ((y + (height / 2)) >= (r.getY() - (r.getHeight() / 2)) && (y - (height / 2)) <= (r.getY() - (r.getHeight() / 2)))
		return true;

	return false;
}