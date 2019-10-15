#include<iostream>
using namespace std;
#include<cmath>
#include<windows.h>

class triangle {
private:
	double a;
	double b;
	double c;

public:
	double perimeter();
	double area();
	int typeTriangle();
	void init(double x1, double x2, double x3);

};
double triangle::perimeter() {
	return a + b + c;
}
double triangle::area() {
	double p = perimeter() / 2.0;
	return sqrt(p*(p - a)*(p - b)*(p - c));
}
int triangle::typeTriangle() {
	if (pow(a, 2) + pow(b, 2) < pow(c, 2)) {
		return 1;
	}
	else if (pow(a, 2) + pow(b, 2) == pow(c, 2)) {
		return 2;
	}
	else {
		return 3;
	}
}
void triangle::init(double x1, double x2, double x3) {
	a = x1;
	b = x2;
	c = x3;
}
int main() {
	int ta, tb, tc;
	triangle t;
	cout << "请输入三角形的三条边长："<<endl;
	cin >> ta;
	cin >> tb;
	cin >> tc;
	t.init(ta, tb, tc);
	cout << "周长=" << t.perimeter() << endl;
	cout << "面积=" << t.area() << endl;
	if (t.typeTriangle() ==1) {
		cout << "锐角三角形" << endl;
	}
	else if (t.typeTriangle() ==2) {
		cout << "直角三角形" << endl;
	}
	else{
		cout << "钝角三角形" << endl;
	}
	system("pause");
	return 0;
	
}
