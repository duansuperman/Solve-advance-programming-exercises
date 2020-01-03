#include<iostream>
#include<vector>
using namespace std;
struct PhanSo{
	int tu, mau;
	PhanSo operator+(PhanSo a){
		PhanSo tong;
		tong.tu = tu*a.mau + mau*a.tu;
		tong.mau = mau*a.mau;
		return tong;
	}
};
int Ucln(int a, int b){
	if (a<0){
		a *= -1;
	}
	if (b<0){
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
	return a;
}
istream& operator>>(istream& is, PhanSo &a){
	is >> a.tu >> a.mau;
	return is;
}
ostream& operator<<(ostream& os, PhanSo a){
	int uc = Ucln(a.tu, a.mau);
	a.tu /= uc;
	a.mau /= uc;
	os << a.tu << "/" << a.mau << endl;
}
template<class bien>
struct Arr{
	vector<bien> a;
	void Nhap(){
		bien k;
		while (cin >> k){
			a.push_back(k);
		}
	}
	void Xuat(){
		for (int i = 1; i<a.size(); i++){
			cout << a[i] << endl;
		}
	}

	bien Tong(){
		bien tong = a[0];
		for (int i = 1; i<a.size(); i++){
			tong = tong + a[i];
		}
		return tong;
	}
};
int main(){
	char k;
	cin >> k;
	if (k == 'a'){
		Arr<int> a;
		a.Nhap();
		cout << a.Tong() << endl;
	}
	else{
		Arr<PhanSo> a;
		a.Nhap();
		cout << a.Tong() << endl;
	}
	return 0;
}