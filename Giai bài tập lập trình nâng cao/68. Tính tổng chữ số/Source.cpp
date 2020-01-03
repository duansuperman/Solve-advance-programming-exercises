#include<iostream>
using namespace std;
long Tong(long n){
	if (n == 0){
		return 0;
	}
	long tong = n % 10;
	return tong + Tong(n / 10);
}
int main(){
	long n;
	cin >> n;
	cout << Tong(n) << endl;
	return 0;
}s