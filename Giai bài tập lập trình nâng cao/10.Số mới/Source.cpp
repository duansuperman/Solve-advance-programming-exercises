#include<iostream>
#include<cmath>
using namespace std;
struct SoMoi{
	int n;
	int Tongchuso(){
		int a = n;
		int sl = log10(a) + 1;
		int tong = 0;
		for (int i = 0; i<sl; i++){
			tong += a % 10;
			a /= 10;
		}
		return tong;
	}
	int operator>(SoMoi a){
		if (Tongchuso()>a.Tongchuso()){
			return 1;
		}
		return 0;
	}
	SoMoi operator+(SoMoi a){
		SoMoi tong;
		tong.n = Tongchuso() + a.Tongchuso();
		return tong;
	}
};
istream& operator>>(istream&is, SoMoi&a){
	is >> a.n;
}
ostream& operator<<(ostream&os, SoMoi a){
	os << "[SoMoi] " << a.n << endl;
}
int main(){
	SoMoi a, b;
	cin >> a >> b;
	cout << a << b;
	if (a>b){
		cout << "true" << endl;
	}
	else{
		cout << "false" << endl;
	}
	SoMoi tong = a + b;
	cout << tong;
	return 0;
}