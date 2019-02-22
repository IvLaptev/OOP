#include <iostream>
#include <vector>
#include <ctime>
using namespace std;

void printArray(const vector<int> &);	// Выводит массив на экран
void printArray(const vector<double> &);

void fillArray(vector<int> &, int);		// Генерирует элементы массива
void fillArray(vector<double> &, int);

void insSort(vector<int> &);		// Сортирует пузырьком
void insSort(vector<double> &);

int main() {
	srand(time(NULL));

	int size;
	cout << "Enter size of arrays: ";
	cin >> size;

	vector<int> arrI;
	vector<double> arrD;

	fillArray(arrI, size);
	fillArray(arrD, size);

	cout << "Input arrays: " << endl;
	cout << "Int:\t";
	printArray(arrI);
	cout << "Double:\t";
	printArray(arrD);

	insSort(arrI);
	insSort(arrD);

	cout << "Output arrays: " << endl;
	cout << "Int:\t";
	printArray(arrI);
	cout << "Double:\t";
	printArray(arrD);

	system("pause");
	return 0;
}

void printArray(const vector<int> &arr) {
	for (int i = 0; i < arr.size(); i++) {
		cout << arr[i] << ' ';
	}
	cout << endl;
}


void printArray(const vector<double> &arr) {
	for (int i = 0; i < arr.size(); i++) {
		cout << arr[i] << ' ';
	}
	cout << endl;
}

void insSort(vector<int> &arr) {
	for (int i = 0; i < arr.size(); i++) {
		for (int j = i; j > 0; j--) {
			if (arr[j] < arr[j - 1]) {
				int c = arr[j];
				arr[j] = arr[j - 1];
				arr[j - 1] = c;
			} else {
				break;
			}
		}
	}
}


void insSort(vector<double> &arr) {
	for (int i = 0; i < arr.size(); i++) {
		for (int j = i; j > 0; j--) {
			if (arr[j] < arr[j - 1]) {
				double c = arr[j];
				arr[j] = arr[j - 1];
				arr[j - 1] = c;
			} else {
				break;
			}
		}
	}
}

void fillArray(vector<int> &arr, int size) {
	for (int i = 0; i < size; i++) {
		arr.push_back(rand() % 100);
	}
}

void fillArray(vector<double> &arr, int size) {
	for (int i = 0; i < size; i++) {
		arr.push_back(((double)(rand() % 1000)) / 10);
	}
}
