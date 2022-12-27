struct Point {
	double x;
	double y;
};

struct Rect {
	Point top_left;
	Point bottom_right;
};

struct Triangle {
	Point v1,v2,v3;
	double area, perimetro;
};
