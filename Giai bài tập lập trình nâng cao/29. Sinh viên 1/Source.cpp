#include<iostream>
#include<vector>
#include<string>
using namespace std;
struct SinhVien{
	string t;
	float a, b, c;
	float DTB(){
		return (a + b + c) / 3;
	}
	int operator<(SinhVien a){
		if (DTB()<a.DTB()){
			return 1;
		}
		return 0;
	}
};
istream& operator>>(istream& is, SinhVien &a){

	getline(is, a.t);
	is >> a.a >> a.b >> a.c;
	return is;
}
ostream& operator<<(ostream& os, SinhVien a){
	cout << a.t << endl;
	return cout;
}
int main(){
	vector<SinhVien> a;
	SinhVien k;
	while (cin >> k){
		cin.ignore();
		a.push_back(k);

	}
	float Max = a[0].DTB();
	for (int i = 1; i < a.size(); i++){
		if (Max<a[i].DTB()){
			Max = a[i].DTB();
		}
	}
	int dem = 0;
	for (int i = 0; i<a.size(); i++){
		if (a[i].DTB() == Max){
			dem++;
		}
	}
	if (dem == 1){
		for (int i = 0; i<a.size(); i++){
			if (a[i].DTB() == Max){
				cout << a[i];
				break;
			}
		}
	}
	else{
		for (int i = 0; i<a.size(); i++){
			if (a[i].DTB() == Max){
				cout << i;
				break;
			}
		}
	}
	//system("pause");
	return 0;
}