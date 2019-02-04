#include <iostream>
#include "stdafx.h"
using namespace std;

int firstMatrix[10][10], secondMatrix[10][10], mult[10][10], rowFirst, columnFirst, rowSecond, columnSecond;

void multiplyMatrices(){

	cout << "Enter rows and column for first matrix: ";
	cin >> rowFirst >> columnFirst;

	cout << "Enter rows and column for second matrix: ";
	cin >> rowSecond >> columnSecond;

	// If column of first matrix in not equal to row of second matrix, asking user to enter the size of matrix again.
	while (columnFirst != rowSecond)
	{
		cout << "Error! column of first matrix not equal to row of second." << endl;
		cout << "Enter rows and column for first matrix: ";
		cin >> rowFirst >> columnFirst;
		cout << "Enter rows and column for second matrix: ";
		cin >> rowSecond >> columnSecond;
	}

	// TAKING MATRICES DATA
    int i, j;
	cout << endl << "Enter elements of matrix 1:" << endl;
	for(i = 0; i < rowFirst; ++i)
	{
		for(j = 0; j < columnFirst; ++j)
		{
			cout << "Enter elements a"<< i + 1 << j + 1 << ": ";
			cin >> firstMatrix[i][j];
		}
	}

	cout << endl << "Enter elements of matrix 2:" << endl;
	for(i = 0; i < rowSecond; ++i)
	{
		for(j = 0; j < columnSecond; ++j)
		{
			cout << "Enter elements b" << i + 1 << j + 1 << ": ";
			cin >> secondMatrix[i][j];
		}
	}
     
   
   	int p, q, r;

	// Initializing elements of matrix mult to 0.
	for(p = 0; p < rowFirst; ++p)
	{
		for(q = 0; q < columnSecond; ++q)
		{
			mult[p][q] = 0;
		}
	}

	// Multiplying matrix firstMatrix and secondMatrix and storing in array mult.
	for(p = 0; p < rowFirst; ++p)
	{
		for(q = 0; q < columnSecond; ++q)
		{
			for(r=0; r<columnFirst; ++r)
			{
				mult[p][q] += firstMatrix[p][r] * secondMatrix[r][q];
			}
		}
	}
	int m, n;

	cout << "Output Matrix:" << endl;
	for(m = 0; m < rowFirst; ++m)
	{
		for(n = 0; n < columnSecond; ++n)
		{
			cout << mult[m][n] << " ";
			if(n == columnSecond - 1)
				cout << endl << endl;
		}
	}


}


