#include <iostream>
#include <string>
using namespace std;

class Animal {	// базовый класс "Животное"
protected:
	int legs;
	string name;
	int age;
public:
	Animal(string&, int, int);

	void setName(string &name) { this->name = name; }

	string &getName() { return name; }

	void setAge(int age) { this->age = age; }

	int getAge() { return age; }

	void setLegs(int legs) { this->legs = legs; }

	int getLegs() { return legs; }

	virtual void say() = 0;	// Чисто виртуальная функция, выводящая на экран речь животного
};

class Cat : public Animal {	// Производный класс "Кошка"
public:
	Cat(string &name, int legs, int age) : Animal(name, legs, age) {}

	void say() { cout << "Meow" << endl; }
};

class Dog : public Animal {	// Производный класс "Собака"
public:
	Dog(string &name, int legs, int age) : Animal(name, legs, age) {}

	void say() { cout << "Woof" << endl; }
};

class Parrot : public Animal {	// Производный класс "Попугай"
public:
	Parrot(string &name, int legs, int age) : Animal(name, legs, age) {}

	void say() { cout << "I am man!" << endl; }
};

int main() {
	string s1 = "Mur", s2 = "Doggy", s3 = "Vasili";
	Cat c(s1, 4, 5);
	Dog d(s2, 4, 7);
	Parrot p(s3, 2, 6);

	cout << "Cat says - ";
	c.say();
	cout << "Dog says - ";
	d.say();
	cout << "And only parrot says - ";
	p.say();
	cout << "But everyone of them are animals" << endl;

	system("pause");
	return 0;
}

Animal::Animal(string &name, int legs, int age) {
	this->name = name;
	this->age = age;
	this->legs = legs;
}
