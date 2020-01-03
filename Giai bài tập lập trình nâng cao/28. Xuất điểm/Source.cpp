#include<iostream>
#include<vector>
using namespace std;
struct Diem{
	int x, y;
	int operator==(Diem a){
		if (x == a.x&& y == a.y){
			return 1;
		}
		return 0;
	}
	Diem operator+(Diem a){
		Diem tong;
		tong.x = x + a.x;
		tong.y = y + a.y;
		return tong;
	}
	int operator<(Diem a){
		if (x<a.x){
			return 1;
		}
		else if (x>a.x){
			return 0;
		}
		if (y<a.y){
			return 1;
		}
		else if (y>a.y){
			return 0;
		}
		return 0;
	}
};
istream& operator>>(istream& is, Diem& a){
	is >> a.x >> a.y;
	return is;
}
ostream& operator<<(ostream& os, Diem a){
	os << "(" << a.x << "," << a.y << ")" << endl;
	return cout;
}
struct Arr{
	vector<Diem> a;
	Diem Maxarr(){
		Diem Max = a[0];
		for (int i = 1; i<a.size(); i++){
			if (Max<a[i]){
				Max = a[i];
			}
		}
		return Max;
	}
	Diem Tong(){
		Diem tong = a[0];
		for (int i = 1; i<a.size(); i++){
			tong = tong + a[i];
		}
		return tong;
	}
};
istream& operator>>(istream& is, Arr &a){
	Diem k;
	while (cin >> k){
		a.a.push_back(k);
	}
}

int main(){
	Arr a;
	cin >> a;
	cout << a.Maxarr();
	cout << a.Tong();
	return 0;
}