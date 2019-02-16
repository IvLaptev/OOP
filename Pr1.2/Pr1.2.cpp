/*
 * Программа получает на вход два числа (целых или с плавоющей запятой)
 * и выводит разницу и сумму этих чисел
 */
#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "");

	double a, b;
	cout << "Enter two numbers: ";
	cin >> a >> b;

	cout << "a - b = " << (a - b) << endl;
	cout << "a + b = " << (a + b) << endl;

	system("pause");
	return 0;
}
