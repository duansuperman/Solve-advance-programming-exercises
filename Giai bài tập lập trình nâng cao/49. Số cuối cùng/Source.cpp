#include<iostream>
#include<cmath>
using namespace std;
int Lastnum(int n){
	int sl = log10(n) + 1;
	int tong = 0;
	for (int i = 0; i<sl; i++){
		tong += n % 10;
		n /= 10;
	}
	if (tong <= 9){
		return tong;
	}
	return Lastnum(tong);
}
int main(){
	int n;
	cin >> n;
	cout << Lastnum(n) << endl;
	return 0;
}