#include <iostream>
using namespace std;

class Transport {	// Базовый абстрактный класс "Транспорт"
protected:
	double maxVelocity;	// Максимальная скорость
public:
	Transport(double maxVelocity) { this->maxVelocity = maxVelocity; }

	double getMaxVelocity () { return maxVelocity; }

	virtual void showAdvantages() = 0;	// виртуальный метод, выводящий достоинства транспорта
};

class Car : public Transport{	// Класс "Автомобиль"
public:
	Car(int maxVelocity) : Transport(maxVelocity) {};

	void showAdvantages() {	// Определённый метод, выводящий достоинства автомобиля
		cout << "Car:" << endl;
		cout << "Can park in the yard" << endl;
		cout << "Max speed: " << maxVelocity << endl;
	}
};

class Bus : public Transport {	// Класс "Автобус"
public:
	Bus(int maxVelocity) : Transport(maxVelocity) {};

	void showAdvantages() {	// Определённый метод, выводящий достоинства автобуса
		cout << "Bus:" << endl;
		cout << "Has a big size" << endl;
		cout << "Max speed: " << maxVelocity << endl;
	}
};

class Bicycle : public Transport {	// Класс "Велосипед"
public:
	Bicycle(int maxVelocity) : Transport(maxVelocity) {};

	void showAdvantages() {	// Определённый метод, выводящий достоинства велосипеда
		cout << "Bicycle:" << endl;
		cout << "Can ride everywhere" << endl;
		cout << "Max speed: " << maxVelocity << endl;
	}
};

int main() {
	double a, b, c;
	cout << "Enter max speed of a car: ";
	cin >> a;
	cout << "Enter max speed of a bus: ";
	cin >> b;
	cout << "Enter max speed of a bicycle: ";
	cin >> c;

	Car car(a);
	Bus bus(b);
	Bicycle bicycle(c);

	car.showAdvantages();
	bus.showAdvantages();
	bicycle.showAdvantages();

	system("pause");
	return 0;
}
