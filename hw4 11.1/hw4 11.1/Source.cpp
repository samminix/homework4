#include <iostream>
using namespace std;

int main()
{
	int *x; //Create pointer
	int numb; 
	cout << "How many numbers would you like to store? ";
	cin >> numb;

	x = new int[numb]; //Set x equal to a dynamic array with a size int 'numb'

	for (int i = 0; i < numb; i++)
	{
		cout << "Enter a number to be stored: ";
		cin >> x[i];
	}

	int avg = 0;
	int sum = 0;
	for (int i = 0; i < numb; i++) //find sum
	{
		sum += x[i];
	}

	avg = sum / numb; 
	int count = 0;
	for (int i = 0; i < numb; i++)
	{
		if (x[i] > avg) //If number is larger than average
			count++;
	}

	cout << "The average of the numbers is " << avg << endl << endl;
	cout << "There are " << count << " number(s) above the average." << endl << endl;

	delete[] x; //Delete the dynamic array
}