#include<iostream>
using namespace std;
struct HCN{
	double a, b;
	double Chuvi(){
		return (a + b) * 2;
	}
	int operator<(HCN h){
		if (Chuvi()<h.Chuvi()){
			return 1;
		}
		return 0;
	}
	double operator+(double k){
		return Chuvi() + k;
	}
};
istream& operator>>(istream&iss, HCN &a){
	iss >> a.a >> a.b;
	return iss;
}
ostream& operator<<(ostream&oss, HCN a){
	oss << "[HCN] " << a.a << "," << a.b << endl;
	return oss;
}
int main(){
	HCN a, b;
	cin >> a >> b;
	cout << a << b;
	if (a<b){
		cout << "true" << endl;
	}
	else{
		cout << "false" << endl;
	}
	return 0;
}
