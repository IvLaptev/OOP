#include <iostream>
#include "Vector.h"
using namespace std;

int main() {
	Vector v1;
	cout << "L: " << v1.getLength() << endl;

	double x, y, z;
	cout << "Enter x: ";
	cin >> x;
	cout << "Enter y: ";
	cin >> y;
	cout << "Enter z: ";
	cin >> z;

	cout << "---------------" << endl;

	v1.setX(x);
	v1.setY(y);
	v1.setZ(z);
	cout << "L: " << v1.getLength() << endl;

	cout << "---------------" << endl;

	v1.prod(5);
	cout << "L: " << v1.getLength() << endl;

	cout << "---------------" << endl;

	v1.set(1, 0, 0);
	cout << "L: " << v1.getLength() << endl;

	cout << "---------------" << endl;

	Vector v2(3, 0, 0);
	Vector v3(1, 1, 1, 1, 5, 1);
	cout << "AlgProd: " << v2.algProd(v3) << endl;
	v2.geomProd(v3);
	cout << "GeomProd: (" << v2.getX() << "," << v2.getY() << ","
			<< v2.getZ() << ")" << endl;
	cout << "L: " << v2.getLength() << endl;

	system("pause");
	return 0;
}
