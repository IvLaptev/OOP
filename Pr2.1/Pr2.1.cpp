#include <iostream>
#include <cmath>
using namespace std;

int main() {
	double a, b, m, n;
	cout << "Enter a and b: ";
	cin >> a >> b;

	if (a >= b) {
		n = cbrt(a - b);
	} else {
		n = a * a + (a - b) / (sin(a * b));
	}

	if (n < b) {
		m = (n + a) / (-b) + sqrt(sin(a) * sin(a) - cos(n));
	} else {
		if (n == b) {
			m = b * b + tan(n * a);
		} else {
			m = b * b * b + n * a * a;
		}
	}

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "m = " << m << endl;
	cout << "n = " << n << endl;

	system("pause");
	return 0;
}
