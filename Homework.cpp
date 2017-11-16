#include <iostream>
using namespace std;

int main() {
	const int size = 10;
	int numbers[size], x;

	cout << "Enter x: ";
	cin >> x;

	for (int i = 0; i < size; i++) {
		cout << "Enter your " << i << " number:" << endl;
		cin >> numbers[i];
	}

	int count = 0;

	for (int i = 0; i < size; i++) {
		if (numbers[i] != x) {
			numbers[count++] = numbers[i];
		}
	}

	while (count < size) {
		numbers[count++] = -1;
	}

	cout << "New numbers:" << endl;

	for (int i = 0; i < size; i++) {
		cout <<numbers[i] <<" ";
	}

	system("PAUSE");
	return 0;
}