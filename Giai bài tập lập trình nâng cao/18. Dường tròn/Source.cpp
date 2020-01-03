#include<iostream>
#include<cmath>
#include<string>
using namespace std;
struct Diem{
	float x, y;
	float operator-(Diem a){
		return sqrt(pow(x - a.x, 2) + pow(y - a.y, 2));
	}
	int operator==(Diem a){
		if (x == a.x&&y == a.y){
			return 1;
		}
		return 0;
	}
};

istream& operator>>(istream& is, Diem &a){
	is >> a.x >> a.y;
	return is;
}
ostream& operator<<(ostream& os, Diem a){
	os << "(" << a.x << "," << a.y << ")";
}
struct DuongTron{
	Diem d;
	float r;
	int operator==(DuongTron dt){
		if (Chuvi() == dt.Chuvi()){
			return 1;
		}
		return 0;
	}
	int operator<(DuongTron dt){
		if (Chuvi()<dt.Chuvi()){
			return 1;
		}
		return 0;
	}
	float  operator+(DuongTron dt){
		return Dientich() + dt.Dientich();
	}
	float Chuvi(){
		return 2 * 3.12*r;
	}
	float Dientich(){
		return 3.14*r*r;
	}
	string Vitrituongdoi(DuongTron dt){
		int kc = d - dt.d;
		if (kc == 0){
			return "DT";
		}
		else if (kc<r + dt.r&&kc>abs(r - dt.r)){
			return "C";
		}
		else if (kc == r + dt.r){
			return "TXN";
		}
		else if (kc == abs(r - dt.r)){
			return "TXT";
		}
		else if (kc>r + dt.r){
			return "NN";
		}
		else if (kc<abs(r - dt.r)){
			return "DN";
		}


	}


};
istream& operator>>(istream& is, DuongTron &d){
	cin >> d.d.x >> d.d.y;
	cin >> d.r;
	return is;
}
ostream& operator<<(ostream& os, DuongTron d){
	os << d.d << " " << d.r << endl;
}
int main(){
	DuongTron a, b;
	cin >> a >> b;
	cout << a << b;
	float tong = a + b;
	cout << roundf(tong * 1000) / 1000 << endl;
	if (a<b){
		cout << "1 < 2" << endl;
	}
	else if (a == b){
		cout << "1 = 2" << endl;
	}
	else {
		cout << "1 > 2" << endl;
	}
	cout << a.Vitrituongdoi(b) << endl;
	return 0;
}