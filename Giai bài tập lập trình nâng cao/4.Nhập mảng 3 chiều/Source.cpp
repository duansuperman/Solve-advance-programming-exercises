#include<iostream>
#include<iomanip>
using namespace std;
void Nhapmang3chieu(int ***a, int c1, int c2, int c3){
	for (int i = 0; i < c1; i++){
		for (int j = 0; j < c2; j++){
			for (int k = 0; k < c3; k++){
				cin >> a[i][j][k];
			}
		}
	}
}
void Xuatmang3chieu(int ***a,int c1,int c2,int c3){
	for (int i = 0; i < c1; i++){
		for (int j = 0; j < c2; j++){
			for (int k = 0; k < c3; k++){
				cout <<setw(4)<< a[i][j][k];
			}
			cout << endl;
		}
		
	}
}
int main(){
	int c1 = 2, c2 = 3, c3 = 5;
	int ***a = (int ***)malloc(c1*sizeof(sizeof(int *)));
	for (int i = 0; i < c1; i++){
		a[i] = (int **)malloc(c2*sizeof(int *));
		for (int j = 0; j < c2; j++){
			a[i][j] = (int *)malloc(c3*sizeof(int));
		}
	}
	cout << a << endl;
	free(a);
	//cout << a << endl;
	system("pause");
	return 0;

}