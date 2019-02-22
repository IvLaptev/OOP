#include <iostream>
#include <ctime>
using namespace std;

double *createArray(int);	// Создаёт массив

void fillArray(double *, int);	// Заполняет массив случайными числами

void printArray(double *, int);	// Выводит массив на экран

void deleteArray(double *, int);	// Удаляет массив

int main() {
	srand(time(NULL));
	int size;
	cout << "Enter size of massive(lower than 1 if you want to exit the program): ";
	cin >> size;

	while (size > 0) {
		double *arr = createArray(size);
		fillArray(arr, size);
		printArray(arr, size);
		deleteArray(arr, size);

		cout << "Enter size of massive(lower than 1 if you want to exit the program): ";
		cin >> size;
	}

	return 0;
}

double *createArray(int size) {
	return new double[size];
}

void fillArray(double *arr, int size) {
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 100;
	}
}

void printArray(double *arr, int size) {
	cout << "Array: ";
	for (int i = 0; i < size; i++) {
		cout << arr[i] << ' ';
	}
	cout << endl;
}

void deleteArray(double *arr, int size) {
	delete [] arr;
}
