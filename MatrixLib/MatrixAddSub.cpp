

#include "MatrixLib.h"
#include <iostream>
#include <cstdlib>
#include <vector>

using namespace std;


vector<vector<int>>  MatrixLib::MatrixAddSub::add(vector<vector<int>> a, vector<vector<int>>b, bool add){

	return a;
}

vector<vector<int> > adsdafsdd(vector<vector<int> > m1, vector<vector<int> > m2){
	// check order
	vector<vector<int> > result;
	//sameorder(m1,m2)
	int r1 = m1.size();
	int r2 = m2.size();
	int c1 = m1[0].size();
	int c2 = m2[0].size();
	//If(r1==r2&&c1==c2)
	{
		for (int i = 0; i<rows; i++)
		{
			for (int j = 0; j<columns; j++)
			{
				cout << "Enter the number for Matrix 1";
				result[i][j] = m1[i][j] + m2[i][j];
			}


		}


	}


}

vector<vector<int> > suasdfsdb(vector<vector<int> > m1, vector<vector<int> > m2){
	// check order
	vector<vector<int> > result;
	//sameorder(m1,m2)
	//If(sameorder)
	{
		for (int i = 0; i<rows; i++)
		{
			for (int j = 0; j<columns; j++)
			{
				cout << "Enter the number for Matrix 1";
				result[i][j] = m1[i][j] + m2[i][j];
			}


		}
		return  result;

	}


}

