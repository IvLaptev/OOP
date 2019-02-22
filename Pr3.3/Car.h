#include <iostream>
#include <string>

#ifndef CAR_H_
#define CAR_H_

class Car {
	std::string model;	// Модель автомобиля
	int seats;	// Количество мест в автомобиле
	double currentSpeed;	// Текущая скорость автомобиля
	double acceleration;	// Ускорение автомобиля
	double maxSpeed;	// Максимальная скорость автомобиля
	bool isStarted;	// true - автомобиль заведён, false - нет

public:
	Car();	// Создаёт объект, заполненный нулевыми значениями

	Car(const std::string &, int, double, double);	// Создаёт незапущенный автомобиль

	// Создаёт автомобиль, принимая значения всех полей
	Car(const std::string &, int, double, double, double, bool);

	void setModel(const std::string &);	// Устанавливает модель автомобиля

	void setNumberOfSeats(int);	// Устанавливает количество мест в автомобиле

	void setCurrentSpeed(double);	// Устанавливает текущую скорость

	void setAcceleration(double);	// Устанавливает ускорение

	void setMaxSpeed(double);	//Устанавливает максимальную скорость

	void startCar();	// "заводит" двигатель автомобиля

	void blockCar(); 	// "глушит" двигатель автомобиля

	std::string &getModel();	// Возвращает модель автомобиля

	int getNumberOfSeats();	// Возвращает количество мест в автомобиле

	double getMaxSpeed();	// Возвращает максимальную скорость

	double getCurrentSpeed();	// Возвращает текущую скорость

	double getAcceleration();	// Возвращает ускорение

	bool isWorking();	// Возвращает состояние автомобиля (isStarted)

	// Увеличивает скорость на основе времени, за которое шло ускорение
	void increaseSpeed(double);

	// Уменьшает скорость на основе времени, за которое шло ускорение
	void decreaseSpeed(double);

	~Car();	// Деструктор
};

#endif /* CAR_H_ */
