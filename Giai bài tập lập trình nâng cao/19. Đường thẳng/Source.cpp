#include<iostream>
#include<string>
#include<cmath>
using namespace std;
struct DuongThang{
	int a, b, c;
	string Vitrituongdoi(DuongThang dt){
		int d = a*dt.b - dt.a*b;
		int dx = c*-1 * dt.b - dt.c*-1 * b;
		int dy = a*dt.c*-1 - dt.a*c*-1;
		if (d != 0){
			if (a*dt.a + b*dt.b == 0){
				return "V";
			}
			else{
				return "C";
			}
		}
		else{
			if (dx == dy&&dy == 0){
				return "T";
			}
			else{
				return "S";
			}
		}
	}
	float Khoangcachdiem(float x, float y){
		return (float)abs(a*x + b*y + c) / sqrt(pow(a, 2) + pow(b, 2));
	}
};
istream& operator>>(istream& is, DuongThang& dt){
	is >> dt.a >> dt.b >> dt.c;
	return is;
}
ostream& operator<<(ostream& os, DuongThang dt){
	if (dt.a == 1){
		os << "x";
	}
	else if (dt.a == -1){
		os << "-x";
	}
	else if (dt.a>0 || dt.a<0) {
		cout << dt.a << "x";
	}
	if (dt.b == 1){
		if (dt.a != 0){
			os << "+y";
		}
		else{
			os << "y";
		}
	}
	else if (dt.b == -1){
		os << "-y";
	}
	else if (dt.b > 0){
		if (dt.a != 0){
			os << "+" << dt.b << "y";
		}
		else{
			os << dt.b << "y";
		}
	}
	else if (dt.b < 0){
		os << dt.b << "y";
	}
	if (dt.c>0){
		os << "+" << dt.c;
	}
	else if (dt.c<0){
		os << dt.c;
	}
	cout << "=0" << endl;
	//return os;
}
int ucln(int a, int b){
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
	return a;
}
int main(){
	DuongThang a, b;
	cin >> a >> b;
	cout << a << b;
	string t = a.Vitrituongdoi(b);
	cout << t << endl;
	if (t == "C" || t == "V"){
		int d = a.a*b.b - b.a*a.b;
		int dx = a.c*-1 * b.b - b.c*-1 * a.b;
		int dy = a.a*b.c*-1 - b.a*a.c*-1;
		if (dx%d == 0){
			cout << "(" << dx / d << ",";
		}
		else{
			int dd = d;
			int uc = ucln(dx, d);
			if (dd<0){
				dd *= -1;
				dx *= -1;
			}
			dd /= uc;
			dx /= uc;
			cout << "(" << dx << "/" << dd << ",";
		}
		if (dy%d == 0){
			cout << dy / d << ")" << endl;
		}
		else{

			int dd = d;
			int uc = ucln(dy, d);
			if (dd<0){
				dd *= -1;
				dy *= -1;
			}
			dd /= uc;
			dy /= uc;
			cout << dy << "/" << dd << ")" << endl;
		}
	}
	else if (t == "S"){
		float x, y;
		if (b.a == 0){
			x = 1;
			y = (float)-b.c / b.b;
		}
		else if (b.b == 0){
			y = 1;
			x = (float)-b.c / b.a;
		}
		else{
			x = 1;
			y = (float)(-b.c - b.a) / b.b;
		}
		float kq = a.Khoangcachdiem(x, y);
		cout << roundf(kq * 1000) / 1000 << endl;
	}
	else{
		cout << "0" << endl;
	}
	//system("pause");
	return 0;
}