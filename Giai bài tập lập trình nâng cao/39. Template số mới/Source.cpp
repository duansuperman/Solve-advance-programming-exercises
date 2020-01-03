#include<iostream>
#include<cmath>
#include<vector>
using namespace std;
struct Somoi{
	int a;
	Somoi(){
		a = 0;
	}
	void operator=(int k){
		a = k;
	}
	int operator<(Somoi s){
		int a1 = a;
		int a2 = s.a;
		int n = log10(a) + 1;
		int m = log10(s.a) + 1;
		int tong1 = 0;
		int tong2 = 0;
		for (int i = 0; i<n; i++){
			tong1 += a1 % 10;
			a1 /= 10;
		}
		for (int i = 0; i<m; i++){
			tong2 += a2 % 10;
			a2 /= 10;
		}
		if (tong1<tong2){
			return 1;
		}
		return 0;
	}
	Somoi operator+(Somoi s){
		int a1 = a;
		int a2 = s.a;
		int n = log10(a1) + 1;
		int m = log10(a2) + 1;
		int tong1 = 0;
		int tong2 = 0;
		for (int i = 0; i<n; i++){
			tong1 += a1 % 10;
			a1 /= 10;
		}
		for (int i = 0; i<m; i++){
			tong2 += a2 % 10;
			a2 /= 10;
		}
		Somoi tong;
		tong.a = tong1 + tong2;
		return tong;
	}
	int operator==(Somoi s){
		int a1 = a;
		int a2 = s.a;
		int n = log10(a1) + 1;
		int m = log10(a2) + 1;
		int tong1 = 0;
		int tong2 = 0;
		for (int i = 0; i<n; i++){
			tong1 += a1 % 10;
			a1 /= 10;
		}
		for (int i = 0; i<m; i++){
			tong2 += a2 % 10;
			a2 /= 10;
		}
		if (tong1 == tong2){
			return 1;
		}
		return 0;
	}
};
istream& operator>>(istream& is, Somoi & s){
	is >> s.a;
	return is;
}
ostream& operator<<(ostream& os, Somoi s){
	os << "[SoMoi] " << s.a;
	return cout;
}
template<class bien>
struct Arr{
	vector<bien> a;
	bien Giatrilonnhat(){
		bien Max = a[0];
		for (int i = 1; i<a.size(); i++){
			if (Max<a[i]){
				Max = a[i];
			}
		}
		return Max;
	}
	int Soluongbienmax(){
		bien Max = Giatrilonnhat();
		int dem = 0;
		for (int i = 0; i<a.size(); i++){
			if (a[i] == Max){
				dem++;
			}
		}
		return dem;
	}
	bien Tong(){
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
	if (t == 'N'){
		Arr<int>a;
		cin >> a;
		cout << a.Giatrilonnhat() << endl;
		cout << a.Soluongbienmax() << endl;
		cout << a.Tong();
	}
	else{
		Arr<Somoi> a;
		cin >> a;
		cout << a.Giatrilonnhat() << endl;
		cout << a.Soluongbienmax() << endl;
		if (a.a.size() == 1){
			Somoi tong;
			tong = 0;
			cout << tong + a.a[0] << endl;
		}
		else{
			cout << a.Tong();
		}
	}
	return 0;
}