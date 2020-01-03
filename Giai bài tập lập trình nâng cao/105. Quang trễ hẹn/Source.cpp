#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
long Giaithua(long n){
	long tich = 1;
	for (long i = 2; i <= n; i++){
		tich *= i;
	}
	return tich;
}
void Sapxep(vector<string>&a){
	sort(a.begin(), a.end());
}
long  Tichsoluonggiong(vector<string>&a){
	long tich = 1;
	long dem = 0;
	for (long i = 0; i<a.size(); i++){
		if (a[i] == a[i + 1]){
			dem++;
		}
		else{
			tich *= Giaithua((dem + 1));
			dem = 0;
		}
	}
	return tich;
}
int main(){
	vector<string> a;
	string t;
	while (cin >> t){
		a.push_back(t);
	}
	Sapxep(a);
	cout << Giaithua(a.size()) / Tichsoluonggiong(a) << endl;
	return 0;
}