#include <iostream>
using namespace std;

void enterData(int firstMatrix[][10], int secondMatrix[][10], int rowFirst, int columnFirst, int rowSecond, int columnSecond);
void add(int firstMatrix[][10], int secondMatrix[][10], int multResult[][10], int rowFirst, int columnFirst, int rowSecond, int columnSecond);
void sub(int firstMatrix[][10], int secondMatrix[][10], int multResult[][10], int rowFirst, int columnFirst, int rowSecond, int columnSecond);
void display(int mult[][10], int rowFirst, int columnSecond);

void addSub()
{
	int firstMatrix[10][10], secondMatrix[10][10], mult[10][10], rowFirst, columnFirst, rowSecond, columnSecond, i, j, k;

	cout << "Enter rows and column for first matrix: ";
	cin >> rowFirst >> columnFirst;

	cout << "Enter rows and column for second matrix: ";
	cin >> rowSecond >> columnSecond;

	// If colum of first matrix in not equal to row of second matrix, asking user to enter the size of matrix again.
	while ((columnFirst != columnSecond) || (rowFirst != rowSecond))
	{
		cout << "Error! column/row of first matrix not equal to column/row of second." << endl;
		cout << "Enter rows and column for first matrix: ";
		cin >> rowFirst >> columnFirst;
		cout << "Enter rows and column for second matrix: ";
		cin >> rowSecond >> columnSecond;
	}

	// Function to take matrices data
	enterData(firstMatrix, secondMatrix, rowFirst, columnFirst, rowSecond, columnSecond);

	cout << "Press 1 for addition and 2 for subtraction :";
	int num;
	cin >> num;
	switch (num) {
	case 1:

		add(firstMatrix, secondMatrix, mult, rowFirst, columnFirst, rowSecond, columnSecond);
		break;
	case 2:
		sub(firstMatrix, secondMatrix, mult, rowFirst, columnFirst, rowSecond, columnSecond);
		break;
	default:
		cout << "No Operation";

	}
	// Function to multiply two matrices.


	// Function to display resultant matrix after multiplication.
	display(mult, rowFirst, columnSecond);
	system("pause");

}

void enterData(int firstMatrix[][10], int secondMatrix[][10], int rowFirst, int columnFirst, int rowSecond, int columnSecond)
{
	int i, j;
	cout << endl << "Enter elements of matrix 1:" << endl;
	for (i = 0; i < rowFirst; ++i)
	{
		for (j = 0; j < columnFirst; ++j)
		{
			cout << "Enter elements a" << i + 1 << j + 1 << ": ";
			cin >> firstMatrix[i][j];
		}
	}

	cout << endl << "Enter elements of matrix 2:" << endl;
	for (i = 0; i < rowSecond; ++i)
	{
		for (j = 0; j < columnSecond; ++j)
		{
			cout << "Enter elements b" << i + 1 << j + 1 << ": ";
			cin >> secondMatrix[i][j];
		}
	}
}

void add(int firstMatrix[][10], int secondMatrix[][10], int mult[][10], int rowFirst, int columnFirst, int rowSecond, int columnSecond)
{
	int i, j, k;

	// Initializing elements of matrix mult to 0.
	for (i = 0; i < rowFirst; ++i)
	{
		for (j = 0; j < columnFirst; ++j)
		{
			mult[i][j] = 0;
		}
	}

	// Multiplying matrix firstMatrix and secondMatrix and storing in array mult.
	for (i = 0; i < rowFirst; ++i)
	{
		for (j = 0; j < columnFirst; ++j)
		{
			mult[i][j] = firstMatrix[i][j] + secondMatrix[i][j];
		}
	}
}

void sub(int firstMatrix[][10], int secondMatrix[][10], int mult[][10], int rowFirst, int columnFirst, int rowSecond, int columnSecond)
{
	int i, j, k;

	// Initializing elements of matrix mult to 0.
	for (i = 0; i < rowFirst; ++i)
	{
		for (j = 0; j < columnFirst; ++j)
		{
			mult[i][j] = 0;
		}
	}

	// Multiplying matrix firstMatrix and secondMatrix and storing in array mult.
	for (i = 0; i < rowFirst; ++i)
	{
		for (j = 0; j < columnFirst; ++j)
		{
			mult[i][j] = firstMatrix[i][j] - secondMatrix[i][j];
		}
	}
}

void display(int mult[][10], int rowFirst, int columnSecond)
{
	int i, j;

	cout << "Output Matrix:" << endl;
	for (i = 0; i < rowFirst; ++i)
	{
		for (j = 0; j < columnSecond; ++j)
		{
			cout << mult[i][j] << " ";
			if (j == columnSecond - 1)
				cout << endl << endl;
		}
	}
}
