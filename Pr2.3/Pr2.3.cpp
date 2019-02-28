#include <iostream>
#include <cmath>
using namespace std;

int main() {
	double a, b, y, t;
	cout << "Enter a and b: ";
	cin >> a >> b;

	if (a <= b) {
		y = (a - b) * (a + b) / ((a + b) * (a * a - a * b + b * b));
	} else {
		y = a + pow(log(b), 2);
	}

	if (y == b) {
		t = (2 * y + sqrt(y * y - a)) / (2 * b - sqrt(a * a - y));
	} else {
		if (y < b) {
			t = sin(y) * sin(y) + 1 / tan(a - b);
		} else {
			t = cbrt(y * sin(a)) + 1 / sqrt(y * cos(b));
		}
	}

	if (isnan(y) || isnan(t) || isinf(y) || isinf(t)) {
		cout << "Error: cannot count result" << endl;
	} else {
		cout << "a = " << a << endl;
		cout << "b = " << b << endl;
		cout << "y = " << y << endl;
		cout << "t = " << t << endl;
	}

	system("pause");
	return 0;
}
