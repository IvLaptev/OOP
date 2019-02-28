#include "Library.h"

Library::Library() {
	caseSize = 0;
	shelfSize = 0;
	books.clear();
}

Library::Library(int caseSize, int shelfSize) {
	setSize(caseSize, shelfSize);
}

Library::Library(int caseSize, int shelfSize, const std::vector<Book> &books) {
	setSize(caseSize, shelfSize);
	addBooks(books);
}

void Library::setSize(int caseSize, int shelfSize) {
	if (caseSize > 0 && shelfSize > 0) {
		this->caseSize = caseSize;
		this->shelfSize = shelfSize;
	} else {
		std::cout << "Warning: cannot set size" << std::endl <<
				"\t(It must be more than 0)" << std::endl;
	}
}

void Library::addBooks(const std::vector<Book> &books) {
	for(auto a : books) {
		if ((a.getAuthors().size() != 0) && (a.getTitle() != "") && (a.getNumberOfPages() != 0)) {
			this->books.push_back(a);
		} else {
			std::cout << "Warning: one book cannot be added" << std::endl;
		}
	}
}

void Library::eraseBook(int id) {
	books.erase(books.begin() + id);
}

void Library::eraseBook(int bookcase, int shelf, int position) {
	int id = (bookcase - 1) * caseSize + (shelf - 1) * shelfSize + position - 1;
	eraseBook(id);
}

void Library::findBook(Book &book) {
	for (int i = 0; i < books.size(); i++) {
		if (book == books[i]) {
			int c, s, p;
			c = i / caseSize + 1;
			s = (i % caseSize) / shelfSize + 1;
			p = (i % caseSize) % shelfSize + 1;
			std::cout << "Book was found in the " << c << " bookcase " <<
					s << " bookshelf " << p << " position" << std::endl;
		}
	}
}

int Library::getCaseSize() {
	return caseSize;
}

int Library::getShelfSize() {
	return shelfSize;
}

Book &Library::getBook(int id) {
	return books[id];
}

Book &Library::getBook(int bookcase, int shelf, int position) {
	int id = (bookcase - 1) * caseSize + (shelf - 1) * shelfSize + position - 1;
	return getBook(id);
}

void Library::printIdList() {
	std::cout << "ID List:" << std::endl;
	for (int i = 0; i < books.size(); i++) {
		std::cout << i << "\t" << books[i].getTitle() << ' '
				<< books[i].getAuthors()[0] << std::endl;
	}
}

Library::~Library() {
}

