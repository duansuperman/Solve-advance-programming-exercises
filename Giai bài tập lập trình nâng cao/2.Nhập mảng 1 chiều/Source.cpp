#include<iostream>
#include<iomanip>
using namespace std;
void Nhapmang1chieu(int *a){
	int *b = (int *)malloc(sizeof(int)* 5);
	for (int i = 0; i < 5; i++){
		cin >> b[i];
	}
	for (int i = 0; i < 5; i++){
		a[i] = b[i];
	}
}

int main(){
	int *a = (int *)malloc(sizeof(int)* 5);
	Nhapmang1chieu(a);
	free(a);
	system("pause");
	return 0;
}