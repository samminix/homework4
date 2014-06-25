#include <iostream>
#include <algorithm>
using namespace std;

int smallestElement(int *x, int size);


int main()
{
	int *x; //pointer
	int numbers[8] = { 1, 2, 4, 5, 10, 100, 2, -22 };
	x = numbers;

	cout << "The smallest number in the array is: " << smallestElement(x, 8) << endl << endl;
}

int smallestElement(int *x, int size)
{
	int* min = min_element(x, x + size);
	return *min; //return the value of min
}