#include <iostream>
#include "Rectangle.h"
using namespace std;

int main(){
	Rectangle2D r1(2, 2, 5.5, 4.9);
	Rectangle2D r2(4, 5, 10.5, 3.2);
	Rectangle2D r3(3, 5, 2.3, 5.4);

	cout << "Rectangle 1's area is " << r1.getArea() << endl << endl;
	cout << "Rectangle 1's perimeter is " << r1.getPerimeter() << endl << endl;


	cout << r1.contains(3, 3) << endl << endl;//Return 0 for false or 1 for true
	cout << r1.contains(r2) << endl << endl;
	cout << r1.overlaps(r3) << endl << endl;
}