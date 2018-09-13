// MatrixLib.h

#include <cstdlib>
#include <vector>

using namespace System;
using namespace std;

namespace MatrixLib {

	public ref class MatrixMultiplication
	{
		vector<vector<int>> mutiply(vector<vector<int>> a, vector<vector<int>> b);
	}; 

	public ref class MatrixTranspose
	{
		vector<vector<int>> tranpose(vector<vector<int>> a, vector<vector<int>> b);
	};


	public ref class MatrixAddSub
	{
		vector<vector<int>> add(vector<vector<int>> a, vector<vector<int>> b, bool add);
	};
	
}
