#include <iostream>

using namespace std;

void random_init(int*, int, int, int);
void user_init(int*, int);
string convert_to_string(int*, int);

int the_arithmetic_mean_of_the_nonzero_elements_of_the_vector(int*, int);

int main() {

	int min, max;
	int size;
	int choice;

	do {
		system("cls");
		cout << "Input size of vector: ";
		cin >> size;
		cout << "Select initialization (1 or 2): \n1) user_init \n2) random_init \n";
		cin >> choice;
	} while (size <= 0 || choice < 1 || choice > 2);

	int* vector = new int[size];

	if (choice == 1) {
		user_init(vector, size);
	}
	else {
		cout << "Input range of values (min, max): ";
		cin >> min >> max;
		random_init(vector, size, min, max);
	}

	cout << "Vector elements: " << convert_to_string(vector, size) << endl;

	cout << "The arithmetic mean of the nonzero elements of the vector - "
		<< the_arithmetic_mean_of_the_nonzero_elements_of_the_vector(vector, size)
		<< endl;

	delete[] vector;

	return 0;
}