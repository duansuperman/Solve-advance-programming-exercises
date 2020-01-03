#include<iostream>
#include<fstream>
#include<string>
#include<vector>
using namespace std;
ifstream is;
ofstream os;
int n;
vector<string> a;
void Nhap(){
	is.open("CONNECT.INP");
	os.open("CONNECT.OUT");
	is >> n;
	string t;
	while (is >> t){
		a.push_back(t);
	}
}
void Sapxep(){
	for (int i = 0; i<a.size() - 1; i++){
		for (int j = i + 1; j<a.size(); j++){
			if (a[i] + a[j]<a[j] + a[i]){
				string temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
}
int main(){
	Nhap();
	Sapxep();
	for (int i = 0; i<a.size(); i++){
		os << a[i];
	}

	return 0;
}