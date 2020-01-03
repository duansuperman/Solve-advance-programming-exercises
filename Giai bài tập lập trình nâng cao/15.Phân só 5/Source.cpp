#include<iostream>
#include<string>
using namespace std;
struct PhanSo{
	int tu, mau;
	void operator++(){
		tu += 1;
	}
	void operator--(){
		tu -= 1;
	}
};
istream& operator>>(istream& is, PhanSo &a){
	is >> a.tu >> a.mau;
	return is;
}
ostream& operator<<(ostream& os, PhanSo a){
	os << a.tu << "/" << a.mau << endl;
	return os;
}

int main(){
	string t;
	PhanSo a;
	cin >> a;
	cin.ignore();
	cin >> t;
	cout << a;
	if (t == "++"){
		a++;
		cout << a;
	}
	else{
		a--;
		cout << a;
	}
	system("pause");
	return 0;
}