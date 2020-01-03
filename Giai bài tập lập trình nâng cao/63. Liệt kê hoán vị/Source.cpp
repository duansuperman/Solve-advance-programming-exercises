#include<iostream>
#include<vector>
using namespace std;
int n;
vector<int> a;
vector<int> b;
int Giaithua(int n){
	int tich = 1;
	for (int i = 2; i <= n; i++){
		tich *= i;
	}
	return tich;
}
void Nhap(){
	cin >> n;
	a.resize(n + 1, 1);
	b.resize(n + 1);
}
void Try(int k){
	if (k == n + 1){
		for (int i = 1; i<k; i++){
			cout << b[i];
		}
		cout << endl;
		return;
	}
	for (int i = 1; i <= n; i++){
		if (a[i]){
			b[k] = i;
			a[i] = 0;
			k++;
			Try(k);
			k--;
			a[i] = 1;
		}
	}
}
int main(){
	Nhap();
	cout << Giaithua(n) << endl;
	Try(1);
	return 0;
}