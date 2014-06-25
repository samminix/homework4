#include <iostream>
using namespace std;

int* doubleCapacity(const int *list, int size);

int main()
{
	const int SIZE = 10;
	int count[SIZE] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 }; //Initialize array with size 10
	int count1 = 0;

	cout << "The values held in the first array are: ";
	for (int i = 0; i < SIZE; i++)
	{
		cout << count[i] << " ";
	}
	cout << endl;
	int* newArray = doubleCapacity(count, SIZE);

	cout << "The values held in the second array are: ";
	for (int i = 0; i < (2 * SIZE); i++)
	{
		cout << newArray[i] << " ";
	}
	cout << endl;

	delete[] newArray;//Delete new dynamic array

}


int* doubleCapacity(const int *list, int size)
{
	int x = 2 * size;
	int* newArray = new int[2*size]; //Create dynamic array with twice the size of the original

	for (int i = 0; i < x; i++)
	{
		newArray[i] = list[i];
		static int c = 1;
		if (i >= size) //if i > original size
		{
			newArray[i] = c;
			c++;
		}
	}

	return newArray;//Return the dynamic array
}