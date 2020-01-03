#include<iostream>
#include<vector>
#include<string>
using namespace std;
struct ColoredPoint{
	int x, y;
	string ma;
	int Checkmau(string t){
		if (t == ma){
			return 1;
		}
		return 0;
	}
	void Doimau(string t){
		if (x>y){
			ma = t;

		}
	}
};
istream& operator>>(istream& is, ColoredPoint &a){
	is >> a.x >> a.y;

	is >> a.ma;
}
ostream& operator<<(ostream& os, ColoredPoint a){
	os << "(" << a.x << "," << a.y << ",#" << a.ma << ")";
}
int main(){
	vector<ColoredPoint> a;
	int n;
	cin >> n;
	for (int i = 0; i<n; i++){
		ColoredPoint b;
		cin >> b;
		a.push_back(b);
	}
	for (int i = 0; i<n; i++){
		cout << a[i] << " ";
	}
	cout << endl;
	int dem = 0;
	for (int i = 0; i<n; i++){
		if (a[i].Checkmau("5DC3A8") == 1){
			dem++;
		}

	}
	cout << dem << endl;
	for (int i = 0; i<n; i++){
		a[i].Doimau("1F00F3");
	}

	for (int i = 0; i<n; i++){
		cout << a[i] << " ";
	}
	cout << endl;
	return 0;
}