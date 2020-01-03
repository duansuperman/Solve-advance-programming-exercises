#include<iostream>
#include<string>
#include<vector>
using namespace std;
void Chuyendoichuoi(string &t){
	while (1){
		size_t s = t.find("  ");
		if (s != string::npos){
			t.erase(t.begin() + s);
		}
		else{
			break;
		}
	}
}
int Soluongso(string t){
	int dem = 0;
	for (int i = 0; i<t.length(); i++){
		if (t[i] == ' '){
			dem++;
		}
	}
	return dem + 1;
}
int main(){
	vector<string> a;
	string t;
	while (getline(cin, t)){
		a.push_back(t);
	}
	for (int i = 0; i<a.size(); i++){
		Chuyendoichuoi(a[i]);
		cout << Soluongso(a[i]) << endl;
	}
	return 0;
}