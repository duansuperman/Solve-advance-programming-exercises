#include<iostream>
#include<cmath>
using namespace std;
long Giaithua(int n){
	long tich = 1;
	for (int i = 2; i <= n; i++){
		tich *= i;
	}
	return tich;
}
double Sinx(double x, int n){
	if (fabs(pow(-1, n)*pow(x, 2 * n + 1) / Giaithua(2 * n + 1)) <= 0.0001){
		return pow(-1, n)*pow(x, 2 * n + 1) / Giaithua(2 * n + 1);
	}
	double tong = pow(-1, n)*pow(x, 2 * n + 1) / Giaithua(2 * n + 1);
	return tong + Sinx(x, n + 1);
}
double Cosx(double x, int n){
	if (fabs(pow(-1, n)*pow(x, 2 * n) / Giaithua(2 * n)) <= 0.0001){
		return pow(-1, n)*pow(x, 2 * n) / Giaithua(2 * n);
	}
	double tong = pow(-1, n)*pow(x, 2 * n) / Giaithua(2 * n);
	return tong + Cosx(x, n + 1);
}
int main(){
	double n;
	cin >> n;
	cout << roundf(Sinx(n, 0) * 100) / 100 << endl;
	cout << roundf(Cosx(n, 0) * 100) / 100 << endl;
	return 0;
}