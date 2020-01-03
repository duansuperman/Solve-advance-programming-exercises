#include<iostream>
#include<vector>
using namespace std;
struct Phanso{
	int tu, mau;
	Phanso operator+(Phanso a){
		Phanso tong;
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
istream& operator>>(istream& is, Phanso & a){
	is >> a.tu >> a.mau;
	return is;
}
ostream& operator<<(ostream& os, Phanso a){
	int uc = Ucln(a.tu, a.mau);
	a.tu /= uc;
	a.mau /= uc;
	os << a.tu << "/" << a.mau << endl;
	return cout;
}

template<class bien>
struct Arr{
	vector<bien> a;
	bien Tinhtong(){
		bien tong = a[0];
		for (int i = 1; i<a.size(); i++){
			tong = tong + a[i];
		}
		return tong;
	}
};
template<class bien>
istream& operator>>(istream& is, Arr<bien> &m){
	bien k;
	while (is >> k){
		m.a.push_back(k);
	}
	return is;
}
int main(){
	char t;
	cin >> t;
	if (t == 'a'){
		Arr<int> a;
		cin >> a;
		cout << a.Tinhtong() << endl;
	}
	else{
		Arr<Phanso> a;
		cin >> a;
		cout << a.Tinhtong();
	}
	return 0;
}