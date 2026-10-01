#include <iostream>
using namespace std;

int main(){
	int matrixA[2][2], matrixB[2][2], matrixC[2][2];
	cout<<"Masukkan nilai matrix A : "<<endl;
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			cout << "Masukkan elemen [" << i << "][" << j << "]: ";
			cin >> matrixA[i][j];
		}
	}
	cout<<"Masukkan nilai matrix B : "<<endl;
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			cout << "Masukkan elemen [" << i << "][" << j << "]: ";
			cin >> matrixB[i][j];
		}
	}
	
	cout<<endl<<"Matriks A kali B adalah : "<<endl;
	for(int i=0; i<2; i++){
		for(int j=0; j<2; j++){
			matrixC[i][j]=0;
			for(int k=0; k<2; k++){
				
				matrixC[i][j] += matrixA[i][k]*matrixB[k][j];
			}
		}
	}
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			cout << matrixC[i][j] << "\t";
		}
		cout<<endl;
	}
	return 0;
}
