#include <string>
#include <vector>
#include <iostream>
#include "Book.h"

#ifndef LIBRARY_H_
#define LIBRARY_H_

class Library {
	std::vector<Book> books;	// Вектор, хранящий экземпляры книг
	int caseSize;	// Размер шкафа
	int shelfSize;	// Размер полки шкафа
public:
	Library();	// Создает объект, заполненный нулями

	Library(int, int);	// Создает объект с заданными размерами

	Library(int, int, const std::vector<Book> &);	// Создает объект с размерами и книгами

	void setSize(int, int);	// Задает размер шафа и полки

	void addBooks(const std::vector<Book> &);	// Добавляет книги в библиотеку

	void eraseBook(int);	// Удаляет книги из библиотеки

	void eraseBook(int, int, int);

	void findBook(Book &);	// Находит местоположение книги

	int getCaseSize();	// Возвращает размер шкафа

	int getShelfSize();	// Возвращает размер полки шкафа

	Book &getBook(int);	// Возвращает книгу, имеющую данный id

	Book &getBook(int, int, int); // Выдает книгу по её местоположению

	void printIdList();	// Выводит книги и соответствующие им id

	~Library();
};

#endif /* LIBRARY_H_ */
