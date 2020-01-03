#include<iostream>
#include<cmath>
using namespace std;
struct Diem{
	float x, y;
	float Tinhkhoangcach(Diem a){
		return (float)sqrt(pow(x - a.x, 2) + pow(y - a.y, 2));
	}
	int operator==(Diem a){
		if (x == a.x&&y == a.y){
			return 1;
		}
		return 0;
	}
};

istream& operator>>(istream& is, Diem & a){
	is >> a.x >> a.y;
	return is;
}
ostream& operator<<(ostream& os, Diem a){
	os << "(" << a.x << "," << a.y << ")";
	return cout;
}

struct Tamgiac{
	Diem a, b, c;
	float Chuvi(){
		float ab = a.Tinhkhoangcach(b);
		float ac = a.Tinhkhoangcach(c);
		float bc = b.Tinhkhoangcach(c);
		return ab + ac + bc;
	}
	float operator+(Tamgiac t){
		return Chuvi() + t.Chuvi();
	}
	int operator<(Tamgiac t){
		if (Chuvi()<t.Chuvi()){
			return 1;
		}
		return 0;
	}
	int operator==(Tamgiac t){
		if (Chuvi() == t.Chuvi()){
			return 1;
		}
		else{
			return 0;
		}
	}
};
istream& operator>>(istream& is, Tamgiac& t){
	is >> t.a >> t.b >> t.c;
}
ostream& operator<<(ostream& os, Tamgiac t){
	os << t.a << " " << t.b << " " << t.c << endl;
	return cout;
}
int main(){
	Tamgiac a, b;
	cin >> a >> b;
	cout << a << b;
	if (a<b){
		cout << "TRUE" << endl;
	}
	else{
		cout << "FALSE" << endl;
	}
	if (a == b){
		cout << "TRUE" << endl;
	}
	else{
		cout << "FALSE" << endl;
	}
	return 0;
}