#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int Nghichdao(int n){
	int sl = log10(n) + 1;
	int tong = 0;
	for (int i = sl - 1; i >= 0; i--){
		tong += (n % 10)*pow(10, i);
		n /= 10;
	}
	return tong;
}
int Kiemtra(int n){
	if (n == Nghichdao(n)){
		return 1;
	}
	return 0;
}
int main(){
	int n;
	vector<int>a;
	cin >> n;
	for (int i = 0; i<n; i++){
		int k;
		cin >> k;
		a.push_back(k);
	}
	for (int i = 0; i<a.size(); i++){
		if (a[i] == 0){
			cout << "0 ";
			continue;
		}
		if (Kiemtra(a[i])){
			cout << a[i] << " ";
		}
	}
	cout << endl;
	return 0;
}