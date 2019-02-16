#include <iostream>
#include <cmath>
using namespace std;

int main() {
	double a, x, y, t;
	cout << "Enter a and x: ";
	cin >> a >> x;

	if (a <= x) {
		y = a + log(x + a);
	} else {
		y = sqrt(sin(a * x));
	}

	if (a > y) {
		t = y / (a - x);
	} else {
		if (a == y) {
			t = y / (a - x) + (a + x) / (y * y);
		} else {
			t = tan(a * x) + cos(2 * a * y);
		}
	}

	cout << "a = " << a << endl;
	cout << "x = " << x << endl;
	cout << "y = " << y << endl;
	cout << "t = " << t << endl;

	system("pause");
	return 0;
}
