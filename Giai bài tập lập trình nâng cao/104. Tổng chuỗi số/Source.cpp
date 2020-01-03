#include<iostream>
#include<string>
#include<vector>
#include<cmath>
using namespace std;
void Tachchuoi(string t, vector<string>&a){
	string k = "";
	for (int i = 0; i<t.length(); i++){
		if (t[i] != ','){
			k += t[i];
			if (i == t.length() - 1){
				a.push_back(k);
			}
		}
		else{
			a.push_back(k);
			k = "";
			continue;
		}
	}
}
int Tong(string t){
	int tong = 0;
	int check = 0;
	if (t[0] == '-'){
		check = 1;
		t.erase(t.begin());
	}
	for (int i = 0; i<t.length(); i++){
		tong += (t[i] - 48)*pow(10, t.length() - 1 - i);
	}
	if (check){
		return -tong;
	}
	return tong;
}
int main(){
	string t;
	cin >> t;
	vector<string> a;
	Tachchuoi(t, a);
	for (int i = 0; i<a.size(); i++){
		cout << a[i] << endl;
	}
	int tong = 0;
	for (int i = 0; i<a.size(); i++){
		tong += Tong(a[i]);
	}
	cout << tong << endl;
	return 0;
}