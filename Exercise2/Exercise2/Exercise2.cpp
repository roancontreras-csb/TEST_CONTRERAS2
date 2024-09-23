#include <iostream>
#include <string>
#include <time.h>
#include <vector>

using namespace std;

//read-only parameter
void printVector(const vector<int>& vector)
{
	cout << "----------" << endl;
	cout << "PRINTING NUMBERS: " << endl;
	for (int i = 0; i < vector.size(); i++)
		cout << vector[i] << endl;
}

//read & write parameter
void populateVector(vector<int>& vector)
{
	cout << "---------" << endl;
	cout << "Adding 5 random numbers" << endl;
	for (int i = 0; i < 5; i++)
		vector.push_back(rand() % 100);
}

int main()
{
	srand(time(NULL));

	vector<int> numbers;
	numbers.push_back(1); //0
	numbers.push_back(2); //1
	numbers.push_back(12); //2
	numbers.push_back(rand() % 100); //3
	numbers.push_back(999); //4
	numbers.push_back(2134);
	numbers.push_back(565);
	numbers.push_back(10);
	numbers.push_back(9);
	numbers.push_back(5);
	numbers.push_back(12);
	numbers.push_back(21334);
	numbers.push_back(5655);
	numbers.push_back(1770);
	numbers.push_back(90);
	numbers.push_back(2123);

	numbers[2] /= 2;
	cout << numbers[2] << endl;

	numbers.erase(numbers.begin() + 4);
	printVector(numbers);

	populateVector(numbers);
	printVector(numbers);

	numbers.clear();
	printVector(numbers);

	system("pause");
	return 0;
}