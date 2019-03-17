#include <iostream>
#include <fstream>
#include <Windows.h>
using namespace std;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	ofstream fout("a.txt");	// Открытие файла для записи

	char c = 0;

	while (c != '\n') {
		cin.get(c);
		fout << c;	// Посимвольный ввод текста в файл
	}

	fout.close();	// Закрытие файла

	system("pause");
	return 0;
}
