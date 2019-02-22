#include <iostream>
#include <ctime>
using namespace std;

void fillArray(int *, int);	// Заполняет массив случайными числами

void printArray(int *, int);	// Выводит массив на экран

void changeElements(int *, int);	// Меняет местами пары элементов массива

int main() {
	srand(time(NULL));

	int size = 12;
	int *arr = new int[size];
	fillArray(arr, size);
	printArray(arr, size);

	changeElements(arr, 12);
	printArray(arr, size);

	delete [] arr;

	system("pause");
	return 0;
}

void fillArray(int *arr, int size) {
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 100;
	}
}

void printArray(int *arr, int size) {
	cout << "Array: ";
	for (int i = 0; i < size; i++) {
		cout << arr[i] << ' ';
	}
	cout << endl;
}

void changeElements(int *arr, int size) {
	for (int i = 0; i < size; i = i + 2) {
		int c = arr[i];
		arr[i] = arr[i+1];
		arr[i+1] = c;
	}
}
