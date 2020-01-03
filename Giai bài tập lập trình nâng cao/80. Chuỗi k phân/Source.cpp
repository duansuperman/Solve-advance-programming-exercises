#include<iostream>
#include<cmath>
using namespace std;
int k, n;
int a[100];
void Nhap(){
	cin >> k >> n;
}
void Try(int m){
	if (m == n){
		for (int i = 0; i<n; i++){
			cout << a[i];
		}
		cout << endl;
		return;
	}
	for (int i = 1; i <= k; i++){
		a[m] = i;
		Try(m + 1);
		a[m] = 0;
	}
}
int main(){
	Nhap();
	cout << pow(k, n) << endl;
	Try(0);
	return 0;
}