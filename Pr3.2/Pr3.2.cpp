#include <iostream>
#include <vector>
#include "Student.h"
#include "Group.h"
#include <Windows.h>
using namespace std;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	string name, surname, tel, mail;
	int age;
	cout << "Enter name: ";
	cin >> name;
	cout << "Enter surname: ";
	cin >> surname;
	cout << "Enter age: ";
	cin >> age;
	cout << "Enter phone number: ";
	cin >> tel;
	cout << "Enter email: ";
	cin >> mail;

	Student s1(name, surname, age, tel, mail);
	Student s2("Stepan", "Kot", 40, "+79184736254", "kots@yambler.cot");
	Student s3;

	vector<Student> s = {s1, s2, s3};

	Group inbo4("INBO-04-18", s);
	inbo4.printStudent(0);

	cout << "-----------------------------------" << endl;

	inbo4.printStudent(2);

	cout << "-----------------------------------" << endl;

	inbo4.printStudent(3);

	cout << "-----------------------------------" << endl;

	inbo4.setStudentParam(2, S_NAME, "Ivan");
	inbo4.setStudentParam(2, S_SURNAME, "Laptev");
	inbo4.setStudentParam(2, S_AGE, 18);
	inbo4.setStudentParam(2, S_PHONE, "0");
	inbo4.setStudentParam(2, S_EMAIL, "ivlaptev");
	inbo4.printStudent(2);

	cout << "-----------------------------------" << endl;
	cout << inbo4.getStudentParam<std::string&>(2, S_NAME) << endl;
	cout << inbo4.getStudentParam<std::string&>(2, S_SURNAME) << endl;
	cout << inbo4.getStudentParam<int>(2, S_AGE) << endl;
	cout << inbo4.getStudentParam<std::string&>(2, S_PHONE) << endl;
	cout << inbo4.getStudentParam<std::string&>(2, S_EMAIL) << endl;

	cout << "-----------------------------------" << endl;

	inbo4.addStudent(s2);
	inbo4.printIdList();

	cout << "-----------------------------------" << endl;

	inbo4.getStudent(3).printInformation();

	cout << "-----------------------------------" << endl;

	inbo4.eraseStudent(3);
	inbo4.printIdList();

	cout << "-----------------------------------" << endl;

	inbo4.clear();
	inbo4.printIdList();

	system("pause");
	return 0;
}
