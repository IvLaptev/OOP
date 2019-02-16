#pragma once
#include <iostream>
#include <string>
#include <vector>

#ifndef BOOK_H_
#define BOOK_H_

class Book {
	int pages;	// количество страниц
	int currentPage;	//текущая страница
	std::vector<std::string> authors;	// авторы
	std::string title;	// название
	std::string genre;	// жанр
	std::string publisher;	// издатель
public:
	Book(); // Создаёт пустой экземпляр

	Book(int, const std::vector<std::string> &, std::string &,  // Создаёт экземпляр с
			const std::string &, const std::string &);			// заполненными полями

	void setNumberOfPages(const int);	// Ввод количества страниц в книге

	int getNumberOfPages();		// Получение количества страниц

	void setAuthors(const std::vector<std::string> &);	// Ввод авторов книги

	void addAuthor(const std::string &);	// Добавление одного автора к уже существующим

	std::vector<std::string> &getAuthors();	// Получение авторов книги

	void setPublisher(const std::string &);	// Ввод издателя книги

	std::string &getPublisher();	// Получение издателя книги

	void setGenre(const std::string &);	// Ввод жанра

	std::string &getGenre();	// Получение жанра

	void openPage(const int);	// Установка определённой текущей страницы

	void nextPage();	// Открытие следующей страницы

	int getCurrentPage();	// Получение текущей открытой страницы

	void setTitle(const std::string &);	// Ввод названия книги

	std::string &getTitle();	// Получение названия книги

	~Book();	// Деструктор экземпляра
};

#endif /* BOOK_H_ */
