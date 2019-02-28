#include "Book.h"

bool operator== (const Book& left, const Book& right) {
	bool res = true;
	res = res && (left.pages == right.pages);
	res = res && (left.authors == right.authors);
	res = res && (left.genre == right.genre);
	res = res && (left.publisher == right.publisher);
	res = res && (left.title == right.title);
	return res;
}


Book::Book() {
	this->pages = 0;
	this->authors.clear();
	this->genre = "";
	this->publisher = "";
}

Book::Book(int pages, const std::vector<std::string> &authors, std::string &title,
		const std::string &genre, const std::string &publisher) {
	this->pages = pages;
	this->authors = authors;
	this->title = title;
	this->genre = genre;
	this->publisher = publisher;
}

void Book::setAuthors(const std::vector<std::string> &authors) {
	this->authors = authors;
}

void Book::addAuthor(const std::string &author) {
	authors.push_back(author);
}

std::vector<std::string> &Book::getAuthors() {
	if(!authors.size()) {
		std::cout << "The book has no author." << std::endl;
	}
	return authors;
}

void Book::setNumberOfPages(const int pages) {
	this->pages = pages;
}

int Book::getNumberOfPages() {
	return pages;
}

void Book::setPublisher(const std::string & publisher) {
	this->publisher = publisher;
}

std::string &Book::getPublisher() {
	if (!publisher.size()) {
		std::cout << "The book has no publisher." << std::endl;
	}
	return publisher;
}

void Book::setGenre(const std::string &genre) {
	this->genre = genre;
}

std::string &Book::getGenre() {
	if (!genre.size()) {
		std::cout << "The book has no genre." << std::endl;
	}
	return genre;
}

void Book::setTitle(const std::string &title) {
	this->title = title;
}

std::string &Book::getTitle() {
	if (!title.size()) {
		std::cout << "The book has no title." << std::endl;
	}
	return title;
}

Book::~Book() {
	authors.clear();
	genre.clear();
	publisher.clear();
}

