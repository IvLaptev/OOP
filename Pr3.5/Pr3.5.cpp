#include <iostream>
#include "Library.h"
#include "Book.h"
#include <Windows.h>
using namespace std;

int main() {
	//system("chcp 1251");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	vector<Book> b;

	for (int i = 0; i < 3; i++) {
		string s;
		Book book;
		cout << "Book " << i + 1 << ":" << endl;
		cout << "Title: ";
		cin >> s;
		book.setTitle(s);
		cout << "Author: ";
		cin >> s;
		book.addAuthor(s);
		int a;
		cout << "Number of pages: ";
		cin >> a;
		book.setNumberOfPages(a);
		b.push_back(book);
	}

	Library l(10, 5, b);
	l.printIdList();

	l.findBook(b[2]);

	l.eraseBook(1, 1, 3);
	l.printIdList();

	system("pause");
	return 0;
}
