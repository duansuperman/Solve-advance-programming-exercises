#include<iostream>
#include<string>
#include<cmath>
using namespace std;
struct Diem{
	int x, y;
	float operator-(Diem a){
		return sqrt(pow(x - a.x, 2) + pow(y - a.y, 2));
	}
	int operator==(Diem a){
		return a.x == x&&a.y == y;
	}
};
istream& operator>>(istream& is, Diem& a){
	is >> a.x >> a.y;
	return is;
}
ostream& operator<<(ostream& os, Diem a){
	os << "(" << a.x << "," << a.y << ")";
	return cout;
}

struct DuongTron{
	Diem a;
	int r;
	int operator==(DuongTron dt){
		return dt.a == a&&dt.r == r;
	}
	int operator<(DuongTron dt){
		return r<dt.r;
	}
	int operator>(DuongTron dt){
		return r>dt.r;
	}
	int Giatri(string t){
		int tong = 0;
		for (int i = 0; i<t.length(); i++){
			tong += (t[i] - 48)*pow(10, t.length() - 1 - i);
		}
		return tong;
	}
	void Chuyendoichuoi(string t){
		size_t s = t.find("-");
		size_t e = t.find(")");
		string k = "";
		for (int i = s + 1; i<e; i++){
			k += t[i];
		}
		a.x = Giatri(k);
		k = "";
		size_t s1 = t.find("-", e);
		size_t e1 = t.find(")", e + 1);
		for (int i = s1 + 1; i<e1; i++){
			k += t[i];
		}
		a.y = Giatri(k);
		k = "";
		size_t s2 = t.find("=");
		for (int i = s2 + 1; i<t.length(); i++){
			k += t[i];
		}
		r = Giatri(k);
	}
};
istream& operator>>(istream& is, DuongTron& dt){
	is >> dt.a >> dt.r;
	return is;
}
ostream& operator<<(ostream& os, DuongTron dt){
	os << "(x-" << dt.a.x << ")^2+(y-" << dt.a.y << ")^2=" << dt.r*dt.r << endl;
	return cout;
}
Diem toaDoTam(DuongTron c){
	return c.a;
}
int banKinh(DuongTron c){
	return c.r;
}
int main(){
	Diem a;
	DuongTron c1, c2, c3;
	string t;
	cin >> a;
	cin >> c1 >> c2;
	cin >> t;
	cout << a << endl;
	cout << c1 << c2;
	if (c1 == c2){
		cout << "YES" << endl;
	}
	else{
		cout << "NO" << endl;
	}
	if (c1<c2){
		cout << "C1 < C2" << endl;
	}
	else if (c1>c2){
		cout << "C1 > C2" << endl;
	}
	else{
		cout << "C1 = C2" << endl;
	}
	float kc = a - c1.a;
	if (kc<c1.r){
		cout << "A nam trong C1" << endl;
	}
	else if (kc == c1.r){
		cout << "A nam tren C1" << endl;
	}
	else{
		cout << "A nam ngoai C1" << endl;
	}
	kc = a - c2.a;
	if (kc<c2.r){
		cout << "A nam trong C2" << endl;
	}
	else if (kc == c2.r){
		cout << "A nam tren C2" << endl;
	}
	else{
		cout << "A nam ngoai C2" << endl;
	}
	c3.Chuyendoichuoi(t);
	cout << "Tam " << c3.a << " Ban kinh " << sqrt(c3.r) << endl;
	return 0;
}