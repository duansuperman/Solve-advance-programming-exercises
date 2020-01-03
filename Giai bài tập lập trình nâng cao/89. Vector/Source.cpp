#include<iostream>
#include<cmath>
#include<vector>
using namespace std;
void Nhap(int &n, vector<int>&a){
	cin >> n;
	for (int i = 0; i<n; i++){
		int k;
		cin >> k;
		a.push_back(k);
	}
}
int Kiemtranguyento(int n){
	if (n<2){
		return 0;
	}
	else if (n == 2){
		return 1;
	}
	else{
		for (int i = 2; i <= sqrt(n); i++){
			if (n%i == 0){
				return 0;
			}
		}
		return 1;
	}
}
int Tongkhongnguyento(int n){
	int a = log10(n) + 1;
	int tong = 0;
	for (int i = 0; i<a; i++){
		if (Kiemtranguyento(n % 10) == 0){
			tong += n % 10;
		}
		n /= 10;
	}
	return tong;
}
int main(){
	int n;
	vector<int> a;
	Nhap(n, a);
	for (int i = 0; i<a.size(); i++){
		if (Kiemtranguyento(a[i])){
			cout << Tongkhongnguyento(a[i]) << endl;
		}
		else{
			cout << "-1" << endl;
		}
	}
	return 0;
}