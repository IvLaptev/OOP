#include <cmath>

#ifndef VECTOR_H_
#define VECTOR_H_

class Vector {
	double x;	// Координаты вектора
	double y;
	double z;
public:
	Vector();	// Конструктор, создающий нулевой вектор

	// Конструктор, создающий вектор по точкам начали и конца
	Vector(double, double, double, double, double, double);

	// Конструктор, создающий вектор по его координатам
	Vector(double, double, double);

	void set(double, double, double);	// Задаёт новые координаты вектора

	void setX(double x);	// Задаёт координату x

	void setY(double y);	// Задаёт координату y

	void setZ(double z);	// Задаёт координату z

	double getX();	// Возвращает координату x

	double getY();	// Возвращает координату y

	double getZ();	// Возвращает координату z

	double getLength();	// Возвращает длину вектора

	void add(Vector&);	// Прибавляет вектор

	double algProd(Vector&);	// Возвращает алгебраическое произведение

	void geomProd(Vector&);	// Производит геометрическое умножение на вектор

	void prod(double);	// Производит умножение вектора на число

	~Vector();	// Деструктор
};

#endif /* VECTOR_H_ */
