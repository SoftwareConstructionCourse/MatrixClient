#include "Stdafx.h"
#include "MatrixLib.h"
using namespace MatrixLib;

vector <vector <double>>  Class1::addMatrix(vector<vector<double>> matrix1, vector < vector<double>>matrix2){
	vector <vector <double>> final0;

	if (matrix1.size() == matrix2.size() && matrix1[0].size() == matrix2[0].size()){

		for (int i = 0; i < matrix1.size(); i++){
			vector<double> tmp;
			final0.push_back(tmp);
			for (int j = 0; j < matrix1[0].size(); j++){

				final0[i].push_back(matrix1[i][j] + matrix2[i][j]);

			}
		}

	}

	return final0;

}

vector <vector <double>>  Class1::subtractMatrix(vector<vector<double>> matrix1, vector < vector<double>>matrix2){
	vector <vector <double>> final1;

	if (matrix1.size() == matrix2.size() && matrix1[0].size() == matrix2[0].size()){

		for (int i = 0; i < matrix1.size(); i++){
			vector<double> tmp;
			final1.push_back(tmp);
			for (int j = 0; j < matrix1[0].size(); j++){

				final1[i].push_back(matrix1[i][j] - matrix2[i][j]);

			}
		}

	}

	return final1;

}



int main(){
	vector<vector<double>> matrix1;
	vector<vector<double>> matrix2;

	for (int i = 0; i < 3; i++){
		vector <double> tmp1;
		vector <double> tmp2;

		matrix1.push_back(tmp1);
		matrix2.push_back(tmp2);

		for (int j = 0; j < 3; j++){
			matrix1[i].push_back(j);
			matrix2[i].push_back(j);

		}

	}
	Class1 matrix;
	//Addition results//
	vector <vector <double>> final0 = matrix.addMatrix(matrix1, matrix2);
	for (int i = 0; i < final0.size(); i++){
		for (int j = 0; j < final0[0].size(); j++){

			cout << final0[i][j] << " ";

		}
	}

	cout << endl;

	//Subtraction results//
	vector <vector <double>> final1 = matrix.subtractMatrix(matrix1, matrix2);
	for (int i = 0; i < final1.size(); i++){
		for (int j = 0; j < final1[0].size(); j++){

			cout << final1[i][j] << " ";

		}
	}

	getchar();



	return 0;
}
