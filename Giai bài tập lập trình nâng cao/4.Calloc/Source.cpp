#include<iostream>
#include<iomanip>
using namespace std;
void Nhap(int **b,int dong,int cot){
	
	cout << dong << cot << endl;
	for (int i = 0; i < dong; i++){
		for (int j = 0; j < cot; j++){
			cin >> b[i][j];
		}
	}
}
int main(){
	int *a = (int *)calloc(1, sizeof(int));
	int dong = 2;
	int cot = 3;
	int **b = (int **)calloc(dong, sizeof(int *));
	for (int i = 0; i < dong; i++){
		b[i] = (int *)calloc(cot, sizeof(int));
	}
	Nhap(b, dong, cot);
	
	for (int i = 0; i < dong; i++){
		for (int j = 0; j < cot; j++){
			cout << setw(4) << b[i][j];
		}
		cout << endl;
	}
	int c1 = 2, c2 = 3, c3 = 4;
	int ***c = (int ***)calloc(c1, sizeof(sizeof(int*)));
	for (int i = 0; i < c1; i++){
		c[i] = (int **)calloc(c2,sizeof(int*));
		for (int j = 0; j < c2; j++){
			c[i][j] = (int *)calloc(c3, sizeof(int));
		}
	}
	for (int i = 0; i < c1; i++){
		for (int j = 0; j < c2; j++){
			for (int k = 0; k < c3; k++){
				cin >> c[i][j][k];
			}
		}
	}
	for (int i = 0; i < c1; i++){
		for (int j = 0; j < c2; j++){
			for (int k = 0; k < c3; k++){
				cout<< setw(4)<<c[i][j][k];
			}
		}
	}
	cout << endl;
	cin >> a[0];
	cout << a[4] << endl;
	cout << a << endl;
	cout << &a << endl;
	free(a);
	free(b);
	free(c);
	cout << a << endl;
	cout << &a << endl;
	system("pause");
	return 0;
}