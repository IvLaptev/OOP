#include <iostream>
using namespace std;

class Screen {	// Базовый абстрактный класс "Экран"
protected:
	double screenSize;
public:
	Screen(double size) { this->screenSize = size; }

	virtual void changeScreen(double size) = 0;	// Виртуальный метод заены экрана


};

class Keyboard {	// Базовый абстрактный класс "Клавиатура"
protected:
	int buttons;
public:
	Keyboard(int buttons) { this->buttons = buttons; }

	virtual void changeKeyboard(int buttons) = 0;	// Виртуальный метод замены клавиатуры
};

class Computer : public Screen, Keyboard {	// Класс "Стационарный компьютер"
public:
	Computer(double screenSize, int buttons) : Screen(screenSize), Keyboard(buttons) {};

	void changeScreen(double size) {
		cout << "Screen with " << screenSize <<
				" size has been changed to " << size << " size" << endl;
		screenSize = size;
	}

	void changeKeyboard(int buttons) {
		cout << "Keyboard with " << this->buttons << " buttons " <<
				"has been changed to keyboard with " << buttons << " buttons" << endl;
		this->buttons = buttons;
	}

	~Computer() {}
};

class Notebook : public Screen, Keyboard {	// Класс "Ноутбук"
public:
	Notebook(double screenSize, int buttons) : Screen(screenSize), Keyboard(buttons) {};

	void changeScreen(double size) {
		if (screenSize == size) {
			cout << "Screen has been changed" << endl;
		} else {
			cout << "Notebook screen can be replaced only by the screen of the same size" << endl;
		}
	}

	void changeKeyboard(int buttons) {
		if (this->buttons == buttons) {
			cout << "Keyboard has been changed" << endl;
		} else {
			cout << "Notebook keyboard can be replaced only by the same keyboard" << endl;
		}
	}

	~Notebook() {}
};

class Phone : public Screen, Keyboard {	// Класс "Телефон"
public:
	Phone(double screenSize, int buttons) : Screen(screenSize), Keyboard(buttons) {};

	void changeScreen(double size) {
		if (screenSize == size) {
			cout << "Screen has been changed" << endl;
		} else {
			cout << "Phone screen can be replaced only by the screen of the same size" << endl;
		}
	}

	void changeKeyboard(int buttons) {
		cout << "Phone keyboard can not be changed" << endl;
	}

	~Phone() {}
};

int main() {
	Computer c(19, 80);
	Notebook n(15, 80);
	Phone p(5, 40);

	c.changeKeyboard(120);
	c.changeScreen(21);

	n.changeKeyboard(120);
	n.changeScreen(15);

	p.changeKeyboard(40);
	p.changeScreen(6);

	system("pause");
	return 0;
}
