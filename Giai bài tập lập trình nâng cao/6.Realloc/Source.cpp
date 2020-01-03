#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	int *a;
	int n = 3;
	a=(int *)realloc(NULL, n*sizeof(int));
	for (int i = 0; i < n; i++){
		cin >> a[i];
	}
	for (int i = 0; i < n; i++){
		cout << setw(n) << a[i];
	}
	cout << endl;
	cout << a[4] << endl;
	a=(int *)realloc(a, (n + 2)*sizeof(int));
	a[3] = 4, a[4] = 5;
	for (int i = 0; i < n+2; i++){
		cout << setw(n) << a[i];
	}
	free(a);
	int dong = 2,cot = 3;
	int **b = (int **)realloc(NULL, dong * sizeof(int *));
	for (int i = 0; i < dong; i++){
		b[i] = (int *)realloc(NULL, cot * sizeof(int));
	}
	for (int i = 0; i < dong; i++){
		for (int j = 0; j < cot; j++){
			cin >> b[i][j];
		}
	}
	for (int i = 0; i < dong; i++){
		for (int j = 0; j < cot; j++){
			cout <<setw(4)<< b[i][j];
		}
	}
	cout << endl;
	b = (int **)realloc(b, (dong-1)*sizeof(int*));
	for (int i = 0; i < dong-1; i++){
		b[i] = (int *)realloc(b[i], (cot-1)* sizeof(int));
	}
	for (int i = 0; i < dong-1; i++){
		for (int j = 0; j < cot-1; j++){
			cout << setw(4) << b[i][j];
		}
	}
	cout << endl;
	free(b);
	system("pause");
	return 0;
}