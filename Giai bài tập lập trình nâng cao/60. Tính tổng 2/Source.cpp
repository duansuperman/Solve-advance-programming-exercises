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
double Tinhtong(int n, int x){
	if (n == 0){
		return x;
	}
	double tong = pow(x, 2 * n + 1) / Giaithua(2 * n + 1);
	return tong + Tinhtong(n - 1, x);
}
int main(){
	int n, x;
	cin >> n >> x;
	cout << roundf((Tinhtong(n, x) + 1) * 1000) / 1000 << endl;
	return 0;
}