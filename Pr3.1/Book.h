#pragma once
#include <iostream>
#include <string>
#include <vector>

#ifndef BOOK_H_
#define BOOK_H_

class Book {
	int pages;	// ���������� �������
	int currentPage;	//������� ��������
	std::vector<std::string> authors;	// ������
	std::string title;	// ��������
	std::string genre;	// ����
	std::string publisher;	// ��������
public:
	Book(); // ������ ������ ���������

	Book(int, const std::vector<std::string> &, std::string &,  // ������ ��������� �
			const std::string &, const std::string &);			// ������������ ������

	void setNumberOfPages(const int);	// ���� ���������� ������� � �����

	int getNumberOfPages();		// ��������� ���������� �������

	void setAuthors(const std::vector<std::string> &);	// ���� ������� �����

	void addAuthor(const std::string &);	// ���������� ������ ������ � ��� ������������

	std::vector<std::string> &getAuthors();	// ��������� ������� �����

	void setPublisher(const std::string &);	// ���� �������� �����

	std::string &getPublisher();	// ��������� �������� �����

	void setGenre(const std::string &);	// ���� �����

	std::string &getGenre();	// ��������� �����

	void openPage(const int);	// ��������� ����������� ������� ��������

	void nextPage();	// �������� ��������� ��������

	int getCurrentPage();	// ��������� ������� �������� ��������

	void setTitle(const std::string &);	// ���� �������� �����

	std::string &getTitle();	// ��������� �������� �����

	~Book();	// ���������� ����������
};

#endif /* BOOK_H_ */
