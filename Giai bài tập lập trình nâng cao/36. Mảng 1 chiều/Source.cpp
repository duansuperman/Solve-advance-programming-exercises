#include<iostream>
#include<vector>
using namespace std;
struct Arr{
	int n;
	vector<int> a;
	Arr operator+(Arr m){
		Arr tong;
		int Min = n<m.n ? n : m.n;
		for (int i = 0; i<Min; i++){
			tong.a.push_back(a[i] + m.a[i]);
		}
		if (n<m.n){
			for (int i = Min; i<m.n; i++){
				tong.a.push_back(m.a[i]);
			}
		}
		else if (n>m.n){
			for (int i = Min; i<n; i++){
				tong.a.push_back(a[i]);
			}
		}
		return tong;
	}
};
istream& operator>>(istream& is, Arr & a){
	is >> a.n;
	for (int i = 0; i<a.n; i++){
		int k;
		is >> k;
		a.a.push_back(k);
	}
	return is;
}
ostream& operator<<(ostream & os, Arr a){
	for (int i = 0; i<a.a.size(); i++){
		os << a.a[i] << " ";
	}
	os << endl;
	return cout;
}
int main(){
	Arr a, b;
	cin >> a >> b;
	cout << a + b;
	return 0;
}