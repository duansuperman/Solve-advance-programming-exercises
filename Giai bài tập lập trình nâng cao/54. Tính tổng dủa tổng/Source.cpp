#include<iostream>
using namespace std;
long Tong(long n){
	long tong = 1;
	for (long i = 2; i <= n; i++){
		tong += i;
	}
	if (tong == 1){
		return tong;
	}
	return tong + Tong(n - 1);
}
long Tich(long n){
	long tich = 1;
	for (long i = 2; i <= n; i++){
		tich *= i;
	}
	if (tich == 1){
		return tich;
	}
	return tich + Tich(n - 1);
}
int main(){
	long n;
	cin >> n;
	cout << "S(" << n << ") = " << Tong(n) << endl;
	cout << "P(" << n << ") = " << Tich(n) << endl;
	return 0;
}