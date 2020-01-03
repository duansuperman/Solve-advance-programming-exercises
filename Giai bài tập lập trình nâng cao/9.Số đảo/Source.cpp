#include<iostream>
#include<cmath>
using namespace std;
struct SoDao{
	int n;
	int Travesodao(){
		int a = n;
		int sl = log10(n) + 1;
		int tong = 0;
		for (int i = 0; i < sl; i++){
			int k = a % 10;
			tong += k*pow(10, sl - i - 1);
			a /= 10;
		}
		return tong;
	}
	int operator>(SoDao a){
		if (Travesodao() > a.Travesodao()){
			return 1;
		}
		return 0;
	}
	int operator+(int a){
		return Travesodao() + a;
	}
};
istream& operator>>(istream&is, SoDao &a){
	is >> a.n;
	return is;
}
ostream& operator<<(ostream&os, SoDao a){
	os << "[SoDao] " ;
	os << a.n << endl;
	return os;
}
int main(){
	SoDao a,b;
	cin >> a >> b;
	cout << a;
	cout << b;
	if (a > b){
		cout << "YES"<<endl;
	}
	else{
		cout << "NO" << endl;
	}
	int k = a + 0 ;
	k = b + k;
	cout << k << endl;
	//system("pause");
	return 0;
}