#include <iostream>
#include <cmath>
using namespace std;

class Complex {
	double re;
	double im;
public:
	Complex(double re, double im) : re(re), im(im) {}

	Complex(const Complex& c) {
		re = c.re;
		im = c.re;
	}

	Complex operator= (const Complex& c) {
		return Complex(c.re, c.im);
	}

	void setNumber(double re, double im) {
		this->re = re;
		this->im = im;
	}

	double getModule() {
		return sqrt(re * re + im * im);
	}

	void displayData() {
		cout << "Number: " << re;
		if (im < 0) {
			cout << im << "i" << endl;
		} else {
			cout << "+" << im << "i" << endl;
		}
		cout << "Module: " << getModule() << endl;
	}

	~Complex() {}
};

int main() {
	double re, im;
	cout << "Enter Re(a): ";
	cin >> re;
	cout << "Enter Im(a): ";
	cin >> im;
	Complex c1(re, im);

	Complex c2(c1);
	Complex c3 = c1;

	c1.displayData();
	c2.displayData();
	c3.displayData();

	system("pause");
	return 0;
}
