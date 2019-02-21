#include "Student.h"
#include <vector>
#include <string>

#ifndef GROUP_H_
#define GROUP_H_

// Ключи для изменения данных студентов
#define S_NAME 		1
#define S_SURNAME 	2
#define S_AGE 		3
#define S_PHONE 	4
#define S_EMAIL		5

class Group {
	std::vector<Student> students;	// Список студентов
	std::string name;	// Название группы
public:
	Group();	// Конструктор, заполняющий объект нулевыми значениями

	// Конструктор, заполняющий все поля
	Group(const std::string &, const std::vector<Student> &);

	void setName(const std::string &);	// Ввод названия группы

	std::string &getName();	//Вывод названия группы

	void addStudent(const Student &student);	// Добавление студента к списку

	Student &getStudent(int);	// Получение студента по его номеру

	void printStudent(int);	// Печать информации о студенте по его номеру

	// Изменение текстовой информации о студенте по его номеру и ключу
	void setStudentParam(int, int, const std::string &);

	// Изменение целочисленных данных о студенте по его номеру и ключу
	void setStudentParam(int, int, int);

	// Получение определённых данных о студенте по его номеру и ключу
	template<typename T> T getStudentParam(int, int);

	void printIdList();	// Вывод на экран списка студентов с их номерами

	void eraseStudent(int);	// Удаление студента из списка

	void clear();	// Удаление всех студентов из списка группы

	~Group(); // Деструктор
};

#endif /* GROUP_H_ */
