#include<iostream>
#include<vector>
#include<string>
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
istream& operator>>(istream& is, Arr<bien> & m){
	bien k;
	is >> k;
	m.a.push_back(k);
	return is;
}
int main(){
	Arr<int> a;
	Arr<Phanso> b;
	char t;
	while (cin >> t){
		if (t == 'a'){
			cin >> a;
		}
		else if (t == 'b'){
			cin >> b;
		}
		else{
			break;
		}
	}
	if (a.a.size() == 0){
		cout << "khong co" << endl;
	}
	else{
		cout << a.Tinhtong() << endl;
	}
	if (b.a.size() == 0){
		cout << "khong co" << endl;
	}
	else{
		cout << b.Tinhtong() << endl;
	}
	return 0;
}