#include <iostream>
#include <fstream>
#include <string>
#include <Windows.h>
using namespace std;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	ifstream fin("a.txt");

	while (!fin.eof()) {
		string s;
		fin >> s;
		cout << s << endl;
	}

	system("pause");
	return 0;
}
