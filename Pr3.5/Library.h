#include <string>
#include <vector>
#include <iostream>
#include "Book.h"

#ifndef LIBRARY_H_
#define LIBRARY_H_

class Library {
	std::vector<Book> books;
	int caseSize;
	int shelfSize;
public:
	Library();

	Library(int, int);

	Library(int, int, const std::vector<Book> &);

	void setSize(int, int);

	void addBooks(const std::vector<Book> &);

	void eraseBook(int);

	void eraseBook(int, int, int);

	void findBook(Book &);

	int getCaseSize();

	int getShelfSize();

	Book &getBook(int);

	Book &getBook(int, int, int);

	void printIdList();

	~Library();
};

#endif /* LIBRARY_H_ */
