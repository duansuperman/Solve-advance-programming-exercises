#include<iostream>
#include<cmath>
using namespace std;
long Giaithua(long n){
	long tich = 1;
	for (long i = 2; i <= n; i++){
		tich *= i;
	}
	return tich;
}
double Tinhtong(long n, long x){
	if (n == 0){
		return x;
	}
	double tong = pow(-1, n)*pow(x, 2 * n + 1) / Giaithua(2 * n + 1);
	return tong + Tinhtong(n - 1, x);
}
int main(){
	long n, x;
	cin >> n >> x;
	cout << roundf(Tinhtong(n, x) * 1000) / 1000 << endl;
	return 0;
}