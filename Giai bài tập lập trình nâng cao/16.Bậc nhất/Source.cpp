#include<iostream>
using namespace std;
struct BacNhat{
	int a, b;
	int Giatri(int x){
		return a*x + b;
	}
	BacNhat operator+(BacNhat p){
		BacNhat tong;
		tong.a = a + p.a;
		tong.b = b + p.b;
		return tong;
	}
	int operator==(BacNhat p){
		return (a + b == p.a + p.b ? 1 : 0);
	}
};
istream& operator>>(istream& is, BacNhat & a){
	is >> a.a >> a.b;
	return is;
}
ostream& operator<<(ostream& os, BacNhat a){
	os << a.a << "x+" << a.b;
	return os;
}
int main(){
	BacNhat a, b;
	cin >> a >> b;
	int x;
	cin >> x;
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
	system("pause");
	return 0;
}