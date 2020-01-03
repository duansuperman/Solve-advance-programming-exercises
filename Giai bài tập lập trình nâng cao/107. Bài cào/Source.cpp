#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
string k[] = { "Su", "Lu", "Bu", "Ti", "Teo" };
string kt[] = { "J J J", "Q Q Q", "K K K", "J Q K", "Q Q K", "J J K", "J J Q", "Q Q J", "K K Q", "K K J" };
int Kiemtrachuoi(string t){
	string t1 = t;
	for (int i = 0; i<10; i++){

		string t2 = kt[i];
		sort(t1.begin(), t1.end());
		sort(t2.begin(), t2.end());
		if (t1 == t2){
			return 1;
		}
	}
	return 0;
}
int Diem(string t){
	if (t.length() == 6){
		size_t s = t.find("10");
		t.replace(s, s + 2, "Q");
	}
	int tong = 0;
	if (t[0] == 'A'){
		tong += 1;
	}
	else if (t[0] <= '9'&&t[0] >= '2'){
		tong += (t[0] - 48);
	}
	else{
		tong += 10;
	}

	if (t[2] == 'A'){
		tong += 1;
	}
	else if (t[2] <= '9'&&t[2] >= '2'){
		tong += (t[2] - 48);
	}
	else{
		tong += 10;
	}

	if (t[4] == 'A'){
		tong += 1;
	}
	else if (t[4] <= '9'&&t[4] >= '2'){
		tong += (t[4] - 48);
	}
	else{
		tong += 10;
	}
	return tong;
}
int Kiemtra(vector<string>& a){
	for (int i = 0; i<a.size(); i++){
		if (Kiemtrachuoi(a[i])){
			return 1;
		}
	}
}
void Xuat(vector<string>&a){
	if (Kiemtra(a)){
		for (int i = 0; i<a.size(); i++){
			if (Kiemtrachuoi(a[i])){
				cout << k[i] << " ";
			}
		}
		cout << endl;
	}
	else{
		int max = 0;
		for (int i = 0; i<a.size(); i++){
			int diem = Diem(a[i]) % 10;

			if (diem>max){
				max = diem;
			}
		}
		for (int i = 0; i<a.size(); i++){
			if (Diem(a[i]) % 10 == max){
				cout << k[i] << " ";
			}
		}
		cout << endl;
	}
}
int main(){
	vector<string> a;
	for (int i = 0; i<5; i++){
		string t;
		getline(cin, t);
		a.push_back(t);
	}
	Xuat(a);
	return 0;
}