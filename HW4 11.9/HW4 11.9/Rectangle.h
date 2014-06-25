#ifndef RECTANGLE_H_
#define RECTANGLE_H_

class Rectangle2D{
private:
	double x, y;
	double width, height;
public:
	double getX() const;
	double getY() const;
	void setX(double x1);
	void setY(double y1);

	double getWidth() const;
	double getHeight() const;
	void setWidth(double wid);
	void setHeight(double heig);

	Rectangle2D();
	Rectangle2D(double x1, double y1, double wid, double heig);

	double getArea() const;
	double getPerimeter() const;

	bool contains(double x, double y) const;
	bool contains(const Rectangle2D &r) const;
	bool overlaps(const Rectangle2D &r) const;

};
#endif