#include<iostream>
#include<vector>
using namespace std;
struct Arr{
	int n;
	vector<int> a;
	int operator==(Arr m){
		if (n == m.n){
			for (int i = 0; i<n; i++){
				if (a[i] != m.a[i]){
					return 0;
				}
			}
			return 1;
		}
		return 0;
	}
	void operator=(Arr m){
		n = m.n;
		for (int i = 0; i<n; i++){
			m.a.push_back(m.a[i]);
		}
	}
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
		if (n>m.n){
			for (int i = Min; i<n; i++){
				tong.a.push_back(a[i]);
			}
		}
		return tong;
	}
	int operator!=(Arr m){
		if ((*this) == m){
			return 0;
		}
		return 1;
	}
	int operator[](int i){
		return a[i];
	}
};
istream& operator>>(istream& is, Arr& m){
	is >> m.n;
	for (int i = 0; i<m.n; i++){
		int k;
		is >> k;
		m.a.push_back(k);
	}
	return is;
}
ostream& operator<<(ostream& os, Arr m){
	for (int i = 0; i<m.a.size(); i++){
		os << m.a[i] << " ";
	}
	os << endl;
	return cout;
}

int main(){
	Arr a, b;
	cin >> a >> b;
	if (a == b){
		cout << "yes" << endl;
	}
	else{
		cout << "no" << endl;
	}
	return 0;
}