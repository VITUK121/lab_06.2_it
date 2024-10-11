#include <iostream>
#include <ctime>
using namespace std;

int* make_arr(int size) {
	int* arr = new int[size];
	for (int i = 0; i != size; i++) {
		arr[i] = -10 + rand() % (10 - (-10) + 1);
	}
	return arr;
}

void print_arr(int* arr, int size) {
	cout << "{";
	for (int i = 0; i != size-1; i++) {
		cout << arr[i] << ',';
	}
	cout << arr[size - 1] << '}' << endl;
}

int counter(int* arr, int size) {
	int result = 0;
	for (int i = 0; i != size; i++) {
		if (arr[i] % 2 != 0) {
			result++;
		}
	}
	return result;
}

int main()
{
	srand(time(NULL));
	int n;
	cout << "n = "; cin >> n;
	int* a = make_arr(n);
	print_arr(a,n);
	cout << "counter() = " << counter(a, n) << endl;
	delete[] a;
}