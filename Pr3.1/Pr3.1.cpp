#include <iostream>
#include <vector>
#include <string>
#include <Windows.h>
#include "Book.h"

using namespace std;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Book book1;

	cout << "Title: " << book1.getTitle() << endl;
	cout << "Authors: ";
	for (auto a : book1.getAuthors()) {
		cout << a << " ";
	}
	cout << endl;
	cout << "Number of pages: " << book1.getNumberOfPages() << endl;
	cout << "Current page: " << book1.getCurrentPage() << endl;
	cout << "Genre: " << book1.getGenre() << endl;
	cout << "Publisher: " << book1.getPublisher() << endl;

	cout << "----------------------------------------" << endl;

	/*
	book1.setGenre("Education");
	book1.setPublisher("Physmathlit");*/

	string s;
	cout << "Enter title: ";
	cin >> s;
	book1.setTitle(s);
	cout << "Enter first author: ";
	cin >> s;
	book1.setAuthors({s});
	cout << "Enter second author: ";
	cin >> s;
	book1.addAuthor(s);
	int f;
	cout << "Enter number of pages: ";
	cin >> f;
	book1.setNumberOfPages(f);
	cout << "Enter current page: ";
	cin >> f;
	book1.openPage(f);
	book1.nextPage();
	cout << "Enter publisher: ";
	cin >> s;
	book1.setPublisher(s);
	cout << "Enter genre: ";
	cin >> s;
	book1.setGenre(s);

	cout << "Title: " << book1.getTitle() << endl;
	cout << "Authors: ";
	for (auto a : book1.getAuthors()) {
		cout << a << " ";
	}
	cout << endl;
	cout << "Number of pages: " << book1.getNumberOfPages() << endl;
	cout << "Current page: " << book1.getCurrentPage() << endl;
	cout << "Genre: " << book1.getGenre() << endl;
	cout << "Publisher: " << book1.getPublisher() << endl;

	cout << "----------------------------------------" << endl;

	s = "sss";
	Book book2(250, {s}, s, s, s);
	book2.openPage(250);
	book2.nextPage();

	cout << "Title: " << book2.getTitle() << endl;
	cout << "Authors: ";
	for (auto a : book2.getAuthors()) {
		cout << a << " ";
	}
	cout << endl;
	cout << "Number of pages: " << book2.getNumberOfPages() << endl;
	cout << "Current page: " << book2.getCurrentPage() << endl;
	cout << "Genre: " << book2.getGenre() << endl;
	cout << "Publisher: " << book2.getPublisher() << endl;

	cout << "----------------------------------------" << endl;

	system("pause");
	return 0;
}
