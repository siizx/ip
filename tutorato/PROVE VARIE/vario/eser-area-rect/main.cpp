#include <iostream>

using namespace std;

struct point
{
	double x;
	double y;
};
struct rect
{
	point topLeft;
	point bottomRight;
};
double base(rect r)
{
	return r.bottomRight.x - r.topLeft.x;
}
double height(rect r)
{
	return r.topLeft.y - r.bottomRight.y;
};

double area(rect r)
{
	return base(r) * height(r);
}

double smallerArea(rect r1, rect r2)
{
	if (area(r1) < area(r2))
	{
		cout << "area di r1 < di r2. ---> " << area(r1) << endl;
		return area(r1);
	}
	cout << "Area di r2 < di r1. ---> " << area(r2) << endl;
	return area(r2);
}

int main()
{

	rect r1;
	r1.bottomRight.x = 8;
	r1.bottomRight.y = 1;
	r1.topLeft.x = 4.5;
	r1.topLeft.y = 2.5;

	rect r2;
	r2.topLeft.x = 2;
	r2.topLeft.y = 7;
	r2.bottomRight.x = 4;
	r2.bottomRight.y = 2;

	cout << smallerArea(r1, r2) << endl;

	return 0;
}
