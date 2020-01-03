#include<iostream>
#include<string>
#include<vector>
using namespace std;
struct KhachHang{
	string ma;
	string ten;
	string tien;
	void Chuyendoichuoi(string t){
		ma = "";
		ten = "";
		tien = "";
		for (int i = 0; i<3; i++){
			ma += t[i];
		}
		size_t s = t.find("-", 6);
		for (int i = 6; i<s - 1; i++){
			ten += t[i];
		}
		for (int i = s + 2; i<t.length(); i++){
			tien += t[i];
		}
	}
	int operator>(KhachHang a){
		if (tien.length() == a.tien.length()){
			return tien>a.tien;
		}
		return tien.length()>a.tien.length();
	}
};
ostream& operator<<(ostream& os, KhachHang a){
	os << a.ma << " - " << a.ten << " - " << a.tien << endl;
	return cout;
}
int main(){
	vector<KhachHang> a;
	string t;
	int n;
	cin >> n;
	cin.ignore();
	for (int i = 0; i<n; i++){
		getline(cin, t);
		KhachHang b;
		b.Chuyendoichuoi(t);
		a.push_back(b);
	}
	int dem = 0;
	for (int i = 0; i<a.size(); i++){
		if (a[i].tien[0] != '-'){
			dem++;
		}
		else{
			a.erase(a.begin() + i);
			i--;
		}
	}
	cout << dem << endl;
	KhachHang max = a[0];
	for (int i = 1; i<a.size(); i++){
		if (a[i]>max){
			max = a[i];
		}
	}
	cout << max << endl;
	return 0;
}