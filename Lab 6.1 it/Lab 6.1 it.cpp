#include <iostream>
#include <cmath>
#include <random>
#include <cstdlib>
#include <ctime>

using namespace std;

void printArray(int* arr, int size);
void generateArray(int* arr, int size, int min, int max);
int countElements(int* arr, int size);
int sumElements(int* arr, int size);
void replaceElements(int* arr, int size);

int main() {
	const int arrSize = 20;
	int t[arrSize];

	generateArray(t, arrSize, -14, 7);

	cout << "Original array: ";
	printArray(t, arrSize);
	cout << endl;

	cout << "Number of elemnts: " << countElements(t, arrSize) << endl;

	cout << "Sum of elements: " << sumElements(t, arrSize) << endl;

	replaceElements(t, arrSize);

	std::cout << "Modified: ";
	printArray(t, arrSize);

	return 0;
}

void generateArray(int* arr, int size, int min, int max) {
	srand(time(0));
	for (int i = 0; i < size; i++) {
		arr[i] = min + rand() % (max - min + 1);
	}
}
void printArray(int* array, int size) {
	for (int i = 0; i < size; i++) {
		printf("%d ", array[i]);
	}
}

int sumElements(int* arr, int size) {

	int sum = 0;
	for (int i = 0; i < size; i++) {
		if (arr[i] > 0 && arr[i] % 4 != 0)
		{
			sum += arr[i];
		};
	}
	return sum;
}

int countElements(int* arr, int size) {
	int count = 0;
	for (int k = 0; k < size; k++) {
		if (arr[k] > 0 && arr[k] % 4 != 0) {
			count++;
		};
	}
	return count;
}

void replaceElements(int* arr, int size) {
	for (int j = 0; j < size; j++) {
		if (j == size) {
			return;
		}
		if (arr[j] > 0 && arr[j] % 4 != 0) {
			arr[j] = 0;
		}
	}
}