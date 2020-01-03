#include<iostream>
#include<string>
using namespace std;
int Ucln(int a, int b);
struct PhanSo{
	int tu, mau;
	int operator!=(PhanSo a){
		if (tu != a.tu){
			return 1;
		}
		if (mau != a.mau){
			return 1;
		}
		return 0;
	}
	void Rutgon(){
		int uc = Ucln(tu, mau);
		tu /= uc;
		mau /= uc;
	}
};
int Ucln(int a, int b){
	if (a < 0){
		a *= -1;
	}
	if (b < 0){
		b *= -1;
	}
	while (a != b){
		if (a>b){
			a -= b;
		}
		else{
			b -= a;
		}
	}
	return b;
}
istream& operator>>(istream& is, PhanSo & a){
	is >> a.tu >> a.mau;
	return is;
}
ostream& operator<<(ostream& os, PhanSo a){
	int uc = Ucln(a.tu, a.mau);
	a.tu /= uc;
	a.mau /= uc;
	os << a.tu << "/" << a.mau << endl;
	return cout;
}

struct HonSo{
	int a;
	PhanSo b;
	HonSo Chuyendoihonso(int k=1){
		HonSo h;
		if (k == 1){
			PhanSo tong;
			tong.tu = a*b.mau + b.tu;
			tong.mau = b.mau;
			tong.Rutgon();
			
			h.a = tong.tu/tong.mau;
			h.b.mau = tong.mau;
			h.b.tu = tong.tu - h.a*tong.mau;
			
		}
		else{
			PhanSo tong;
			tong.tu = a*b.mau + b.tu;
			tong.mau = b.mau;
			tong.Rutgon();
			h.b = tong;
			
		}
		return h;
	}
	int Tongthanhphan(){
		return a + b.tu + b.mau;
	}
	int operator!=(HonSo h){
		if (a != h.a){
			return 1;
		}
		if (b != h.b){
			return 1;
		}
		return 0;
	}
	int operator>(HonSo h){
		if (Tongthanhphan() > h.Tongthanhphan()){
			return 1;
		}
		return 0;
	}
};
istream& operator>>(istream& is, HonSo & h){
	is >> h.a >> h.b;
	return is;
}
ostream& operator<<(ostream& os, HonSo h){
	os << h.a << " " << h.b;
	return cout;
}
int main(){
	HonSo  a, b;
	string t;
	cin >> a >> b >> t;
	if (a != b){
		cout << "TRUE" << endl;
	}
	else{
		cout << "FALSE" << endl;
	}
	if (a > b){
		cout << "TRUE" << endl;
	}
	else{
		cout << "FALSE" << endl;
	}
	if (t == "true"){
		cout << a.Chuyendoihonso();
		cout << b.Chuyendoihonso();
	}
	else{
		cout << a.Chuyendoihonso(2).b;
		cout << b.Chuyendoihonso(2).b;
	}
	//system("pause");
	return 0;
}