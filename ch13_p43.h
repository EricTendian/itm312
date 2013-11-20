#ifndef CIRCLE_H
#define CIRCLE_H

class Circle {
	private:
		double radius;
	public:
		Circle();
		Circle(double);
		double getRadius() const {return radius;}
		double getArea() const {return double(3.14159 * radius * radius);}
};

#endif
