#include <iostream>
#include <vector>
#include <string>
#include "Book.h"

using namespace std;

int main() {
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

	book1.setTitle("Physics");
	book1.setAuthors({"Chertov", "Vorobiov"});
	book1.addAuthor("Trofimov");
	book1.setNumberOfPages(637);
	book1.openPage(563);
	book1.nextPage();
	book1.setGenre("Education");
	book1.setPublisher("Physmathlit");

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

	string s = "sss";
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
