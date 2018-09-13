// MatrixLib.h

#pragma once
#include <iostream>
#include <vector>
using namespace std;

namespace MatrixLib {

	public ref class Class1
	{
		public:
		vector<vector<double>> addMatrix(vector<vector<double>> first, vector<vector<double>> second);
		vector<vector<double>> subtractMatrix(vector<vector<double>> first, vector<vector<double>> second);
		//vector<vector<double>> multiplication(vector<vector<double>> first, vector<vector<double>> second);
		//vector<vector<double>> transpose(vector<vector<double>> first, vector<vector<double>> second);
	};
}
