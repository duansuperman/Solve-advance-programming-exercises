#include<iostream>
using namespace std;
struct BacNhat{
	int a, b;
	int Giatri(int x){
		return a*x + b;
	}
	BacNhat operator+(BacNhat c){
		BacNhat tong;
		tong.a = a + c.a;
		tong.b = b + c.b;
		return tong;
	}
	int operator==(BacNhat c){
		if (a + b == c.a + c.b){
			return 1;
		}
		return 0;
	}
};
istream& operator>>(istream& is, BacNhat &a){
	is >> a.a >> a.b;
	return is;
}
ostream& operator<<(ostream& os, BacNhat a){
	os << a.a << "x+" << a.b;
	return cout;
}
int main(){
	BacNhat a, b;
	int x;
	cin >> a >> b >> x;
	cout << a << endl;
	cout << b << endl;
	cout << a << "+" << b << "=" << a + b << endl;
	cout << a.Giatri(x) << endl;
	cout << b.Giatri(x) << endl;
	if (a == b){
		cout << "TRUE" << endl;
	}
	else{
		cout << "FALSE" << endl;
	}
	return 0;
}