#include <iostream>
using namespace std;

class Point {
private:
	int x;
	int y;
	static int s_createdObjects;
public:
	Point(int x, int y) : x(x), y(y) {
		++s_createdObjects;
	}
	static void InfoAboutObjects() {
		cout << "Cteated objects: " << s_createdObjects << endl;
	}
	int GetX() const {
		return x;
	}
	int GetY() const {
		return y;
	}
	void SetX(int a) {
		x = a;
	}
	void SetY(int b) {
		y = b;
	}
	void print() const {
		cout << "X: " << x << "\tY: " << y << endl;
	}
};

int Point::s_createdObjects = 0;

int main() {
	Point::InfoAboutObjects();
	Point p1(2, 3);
	p1.print();
	p1.SetX(6);
	cout << "X: " << p1.GetX() << endl;
	p1.print();
	Point::InfoAboutObjects();
}