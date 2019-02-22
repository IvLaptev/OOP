#include "Car.h"

Car::Car() {
	model = "";
	seats = 0;
	currentSpeed = 0;
	acceleration = 0;
	maxSpeed = 0;
	isStarted = false;
}

Car::Car(const std::string &model, int seats, double acceleration, double maxSpeed) {
	setModel(model);
	setNumberOfSeats(seats);
	setAcceleration(acceleration);
	setMaxSpeed(maxSpeed);
	blockCar();
}

Car::Car(const std::string &model, int seats, double maxSpeed, double currentSpeed,
		double acceleration, bool isStarted) {
	if (isStarted) {
		startCar();
	} else {
		blockCar();
	}
	setModel(model);
	setNumberOfSeats(seats);
	setMaxSpeed(maxSpeed);
	setCurrentSpeed(currentSpeed);
	setAcceleration(acceleration);
}

void Car::setModel(const std::string &model) {
	this->model = model;
}

void Car::setNumberOfSeats(int seats) {
	if (seats > 0) {
		this->seats = seats;
	} else {
		std::cout << "Warning: seats has incorrect value" << std::endl;
		seats = 0;
	}
}

void Car::setCurrentSpeed(double currentSpeed) {
	if (isStarted) {
		if (currentSpeed > 0) {
			this->currentSpeed = currentSpeed;
		} else {
			std::cout << "Warning: currentSpeed has incorrect value" << std::endl;
			currentSpeed = 0;
		}
	} else {
		std::cout << "Warning: currentSpeed hasn't been changed" <<std::endl <<
				"\t(car is not started)" << std::endl;
	}
}

void Car::setAcceleration(double acceleration) {
	if (acceleration > 0) {
		this->acceleration = acceleration;
	} else {
		std::cout << "Warning: acceleration has incorrect value" << std::endl;
		acceleration = 0;
	}
}

void Car::setMaxSpeed(double maxSpeed) {
	if (maxSpeed < currentSpeed) {
		std::cout << "Warning: maxSpeed hasn't been changed " << std::endl <<
				"\t(maxSpeed cannot be lower than currentSpeed)" << std::endl;
	} else {
		if (maxSpeed > 0) {
			this->maxSpeed = maxSpeed;
		} else {
			std::cout << "Warning: maxSpeed has incorrect value" << std::endl;
			maxSpeed = 0;
		}
	}
}

void Car::startCar() {
	isStarted = true;
}

void Car::blockCar() {
	isStarted = false;
	currentSpeed = 0;
}

std::string &Car::getModel() {
	return model;
}

int Car::getNumberOfSeats() {
	return seats;
}

double Car::getMaxSpeed() {
	return maxSpeed;
}

double Car::getCurrentSpeed() {
	return currentSpeed;
}

double Car::getAcceleration() {
	return acceleration;
}

bool Car::isWorking() {
	return isStarted;
}

void Car::increaseSpeed(double deltaTime) {
	currentSpeed += deltaTime * acceleration;
	if (currentSpeed > maxSpeed) {
		currentSpeed = maxSpeed;
	}
}

void Car::decreaseSpeed(double deltaTime) {
	currentSpeed -= deltaTime * acceleration;
	if (currentSpeed < 0) {
		currentSpeed = 0;
	}
}


Car::~Car() {
	// TODO Auto-generated destructor stub
}

