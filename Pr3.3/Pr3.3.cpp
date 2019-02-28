#include <iostream>
#include <Windows.h>
#include "Car.h"
using namespace std;

void printInformation(Car &);

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	string m;
	int s;
	double a, v;

	cout << "Enter model: ";
	cin >> m;
	cout << "Enter number of seats: ";
	cin >> s;
	cout << "Enter acceleration: ";
	cin >> a;
	cout << "Enter max speed: ";
	cin >> v;

	Car c1(m, s, a, v);
	printInformation(c1);

	cout << "-------------------------------" << endl;

	c1.setCurrentSpeed(20);
	c1.startCar();
	c1.setCurrentSpeed(20);
	printInformation(c1);

	cout << "-------------------------------" << endl;

	c1.increaseSpeed(20);
	c1.setMaxSpeed(20);
	c1.setAcceleration(-30);
	printInformation(c1);

	cout << "-------------------------------" << endl;

	c1.decreaseSpeed(30);
	c1.setMaxSpeed(10);
	printInformation(c1);

	cout << "-------------------------------" << endl;

	Car c2("Kali", 1, 200, 10, 20, true);
	printInformation(c2);

	cout << "-------------------------------" << endl;

	c2.blockCar();
	printInformation(c2);

	system("pause");
	return 0;
}

void printInformation(Car &c) {
	cout << "Model: " << c.getModel() << endl;
	cout << "Number of seats: " << c.getNumberOfSeats() << endl;
	cout << "Working: " << c.isWorking() << endl;
	cout << "Max speed: " << c.getMaxSpeed() << endl;
	cout << "Current speed: " << c.getCurrentSpeed() << endl;
	cout << "Acceleration: " << c.getAcceleration() << endl;
}
