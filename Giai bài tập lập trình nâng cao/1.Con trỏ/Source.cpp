#include<iostream>
#include<iomanip>
using namespace std;

int main(){
	int *a= new int;
	for (int i = 0; i < 10; i++){
		a[i] = i + 1;
	}
	for (int i = 0; i < 10; i++){
		cout << a[i] << " ";
	}
	cout << endl;
	system("pause");
	return 0;
}