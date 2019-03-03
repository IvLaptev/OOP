#include <iostream>
#include <fstream>
#include <Windows.h>
using namespace std;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	ofstream fout("a.txt");

	char c = 0;

	while (c != '\n') {
		cin.get(c);
		fout << c;
	}

	fout.close();

	system("pause");
	return 0;
}
