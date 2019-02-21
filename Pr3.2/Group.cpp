#include "Group.h"

Group::Group() {
	name = "";
	students.clear();
}

Group::Group(const std::string &name, const std::vector<Student> &students) {
	this->name = name;
	for (auto a : students) {
		this->students.push_back(a);
	}
}

void Group::setName(const std::string &name) {
	this->name = name;
}

std::string &Group::getName() {
	if (name == "") {
		std::cout << "Warning: name of group is empty" << std::endl;
	}
	return name;
}

void Group::addStudent(const Student &student) {
	students.push_back(student);
}

Student &Group::getStudent(int id) {
	if (id < students.size() && id >= 0) {
		return students[id];
	} else {
		std::cout << "Warning: there is no student with such id" << std::endl;
		Student s;
		return s;
	}
}

void Group::printStudent(int id) {
	if (id < students.size() && id >= 0) {
		students[id].printInformation();
	} else {
		std::cout << "Warning: there is no student with such id" << std::endl;
	}
}

void Group::setStudentParam(int id, int name, const std::string &value) {
	if (id < students.size() && id >= 0) {
		switch(name) {
		case S_NAME:
			students[id].setName(value);
			break;
		case S_SURNAME:
			students[id].setSurname(value);
			break;
		case S_PHONE:
			students[id].setPhoneNumber(value);
			break;
		case S_EMAIL:
			students[id].setEmail(value);
			break;
		default:
			std::cout << "Warning: setStudentParam name wrong" << std::endl;
			break;
		}
	} else {
		std::cout << "Warning: there is no student with such id" << std::endl;
	}
}

void Group::setStudentParam(int id, int name, int value) {
	if (id < students.size() && id >= 0) {
		if (name == S_AGE) {
			students[id].setAge(value);
		} else {
			std::cout << "Warning: wrong pair of name and value" << std::endl;
		}
	} else {
		std::cout << "Warning: there is no student with such id" << std::endl;
	}
}

template<> std::string &Group::getStudentParam(int id, int name)  {
	if (id < students.size() && id >= 0) {
			switch(name) {
			case S_NAME:
				return students[id].getName();
			case S_SURNAME:
				return students[id].getSurname();
			case S_PHONE:
				return students[id].getPhoneNumber();
			case S_EMAIL:
				return students[id].getEmail();
			default:
				std::cout << "Warning: getStudentParam name wrong" << std::endl;
				std::string s = "";
				return s;
			}
		} else {
			std::cout << "Warning: there is no student with such id" << std::endl;
	}
}

template<> int Group::getStudentParam(int id, int name) {
	if (id < students.size() && id >= 0) {
			if (name == S_AGE) {
				return students[id].getAge();
			} else {
				std::cout << "Warning: wrong pair of name and return type" << std::endl;
			}
		} else {
			std::cout << "Warning: there is no student with such id" << std::endl;
	}
}

void Group::printIdList() {
	std::cout << "List of " << name << " group:" << std::endl;
	if (students.size() > 0) {
		for (int i = 0; i < students.size(); i++) {
			std::cout << i << "\t" << students[i].getSurname() << " " <<
					students[i].getName() << std::endl;
		}
	} else {
		std::cout << "List is empty" << std::endl;
	}
}

void Group::eraseStudent(int id) {
	if (id < students.size() && id >= 0) {
		students.erase(students.begin() + id);
	} else {
		std::cout << "Warning: there is no student with such id" << std::endl;
	}
}

void Group::clear() {
	students.clear();
}

Group::~Group() {}

