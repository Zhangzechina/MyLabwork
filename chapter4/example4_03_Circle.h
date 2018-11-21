#ifndef CIRCLE_H_INCLUDED
#define CIRCLE_H_INCLUDED
class Circle
{
private:
	double Radius;
	const double PI;
public:
	Circle(double r=0):PI(3.1415926)
	{
		Radius=r;
	}
	double Area();
	double Circumference();
};
 
 
#endif // CIRCLE_H_INCLUDED
