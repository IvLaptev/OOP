#include <iostream>
#include <string>
#include <vector>

#ifndef BOOK_H_
#define BOOK_H_

class Book {
	int pages;	// количество страниц
	std::vector<std::string> authors;	// авторы
	std::string title;	// название
	std::string genre;	// жанр
	std::string publisher;	// издатель
public:
	friend bool operator== (const Book& left, const Book& right);

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

	void setTitle(const std::string &);	// Ввод названия книги

	std::string &getTitle();	// Получение названия книги

	~Book();	// Деструктор экземпляра
};

#endif /* BOOK_H_ */
