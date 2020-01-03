#include<iostream>
using namespace std;
int n;
int a[100];
void Nhap(){
	cin >> n;
}
void Try(int k){
	if (k == n){
		for (int i = 0; i<n; i++){
			cout << a[i];
		}
		cout << endl;
		return;
	}
	for (int i = 0; i<2; i++){
		a[k] = i;
		Try(k + 1);
		a[k] = 0;
	}
}
int main(){
	Nhap();
	Try(0);
	return 0;
}