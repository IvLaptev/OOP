// Класс Student создан для создания списка студентов в классе Group

#include <iostream>
#include <string>

#ifndef STUDENT_H_
#define STUDENT_H_

class Student {
	int age;	// Возраст
	std::string name;	// Имя
	std::string surname;	// Фамилия
	std::string phoneNumber;	// Номер телефона
	std::string email; // Адрес электронной почты

public:
	Student();	// Конструктор, заполняющий объект нулевыми значениями

	Student(const std::string &, const std::string &, int,	// Конструктор, заполняющий
			const std::string &, const std::string &); 		// все поля

	void setName(const std::string &);	// Ввод имени

	void setSurname(const std::string &);	// Ввод фамилии

	void setAge(int);	// Ввод возраста

	void setPhoneNumber(const std::string &);	// Ввод номера телефона

	void setEmail(const std::string &);	// Ввод электронной почты

	std::string &getName();	// Получение имени

	std::string &getSurname();	// Получение фамилии

	int getAge();	// Получение возраста

	std::string &getPhoneNumber();	// Получение номера телефона

	std::string &getEmail();	// Получение адреса электронной почты

	void printInformation();	// Вывод информаации о студенте на экран

	~Student(); // Деструктор
};

#endif /* STUDENT_H_ */
