// Программа получает на вход строку (имя пользователя) и на её основе выводит приветствие

#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	string name;
	cout << "Enter your name: ";
	cin >> name;
	cout << "Hello, " << name << "!" << endl;

	system("pause");
	return 0;
}
