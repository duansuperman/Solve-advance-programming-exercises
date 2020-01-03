#include<iostream>
#include<cmath>
using namespace std;
int Tinhtong(int n, int x){
	if (n == 0){
		return 1;
	}
	int tong = pow(x, n);
	return tong + Tinhtong(n - 1, x);
}
int main(){
	int n, x;
	cin >> n >> x;
	cout << Tinhtong(n, x) << endl;
	return 0;
}