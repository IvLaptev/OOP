#include "Student.h"

Student::Student() {
	age = 0;
	name = "";
	surname = "";
	phoneNumber = "";
	email = "";
}

Student::Student(const std::string &name, const std::string &surname, int age,
		const std::string &phoneNumber, const std::string &email) {
	this->age = age;
	if (age <= 0) {
		this->age = 0;
		std::cout << "Warning: age was entered incorrectly" << std::endl;
	}

	this->email = email;
	this->name = name;
	this->phoneNumber = phoneNumber;
	this->surname = surname;
}


void Student::printInformation() {
	std::cout << "Name: ";
	if (name == "") {
		std::cout << "student has no name" << std::endl;
	} else {
		std::cout << name << std::endl;
	}

	std::cout << "Surname: ";
	if (surname == "") {
		std::cout << "student has no surname" << std::endl;
	} else {
		std::cout << surname << std::endl;
	}

	std::cout << "Age: ";
	if (age == 0) {
		std::cout << "age is unknown" << std::endl;
	} else {
		std::cout << age << std::endl;
	}

	std::cout << "Phone number: ";
	if (phoneNumber == "") {
		std::cout << "student has no phone number" << std::endl;
	} else {
		std::cout << phoneNumber << std::endl;
	}

	std::cout << "Email: ";
	if (email == "") {
		std::cout << "student has no email" << std::endl;
	} else {
		std::cout << email << std::endl;
	}
}

void Student::setName(const std::string &name) {
	this->name = name;
}

void Student::setSurname(const std::string &surname) {
	this->surname = surname;
}

void Student::setAge(int age) {
	this->age = age;
	if (age <= 0) {
		this->age = 0;
		std::cout << "Warning: age was entered incorrectly" << std::endl;
	}
}

void Student::setPhoneNumber(const std::string &phoneNumber) {
	this->phoneNumber = phoneNumber;
}

void Student::setEmail(const std::string &email) {
	this->email = email;
}

std::string &Student::getName() {
	return name;
}

std::string &Student::getSurname() {
	return surname;
}

int Student::getAge() {
	return age;
}

std::string &Student::getPhoneNumber() {
	return phoneNumber;
}

std::string &Student::getEmail() {
	return email;
}

Student::~Student() {}

