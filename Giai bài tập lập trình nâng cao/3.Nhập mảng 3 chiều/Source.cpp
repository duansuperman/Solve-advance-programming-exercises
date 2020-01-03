#include<iostream>
#include<iomanip>
using namespace std;
void Nhapmang2chieu(int **a, int dong, int cot){
	for (int i = 0; i < dong; i++){
		for (int j = 0; j < cot; j++){
			cin >> a[i][j];
		}
	}
}
void Xuatmang2chieu(int **a, int dong, int cot){
	for (int i = 0; i < dong; i++){
		for (int j = 0; j < cot; j++){
			cout << setw(4) << a[i][j];
		}
	}
}
int main(){
	int dong = 2, cot = 3;
	int **a = (int **)malloc(dong*sizeof(int*));
	Nhapmang2chieu(a, dong, cot);
	Xuatmang2chieu(a, dong, cot);
	system("pause");
	return 0;
}