#include<iostream>
#include<cmath>
#include<vector>
using namespace std;
void Nhap(vector<int>&a){
	int k;
	while (cin >> k){
		a.push_back(k);
	}
}
int Kiemtrachinhphuong(int n){
	if (sqrt(n) == (int)sqrt(n)){
		return 1;
	}
	return 0;
}
void Xoachinhphuong(vector<int>&a){
	for (int i = 0; i<a.size(); i++){
		if (Kiemtrachinhphuong(a[i])){
			a.erase(a.begin() + i);
			i--;
		}
	}
}
void Sapxep(vector<int>&a){
	for (int i = 0; i<a.size() - 1; i++){
		for (int j = i + 1; j<a.size(); j++){
			if (a[i]>a[j]){
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
}
int main(){
	vector<int> a;
	Nhap(a);
	Xoachinhphuong(a);
	Sapxep(a);
	for (int i = 0; i<a.size(); i++){
		if (a[i] % 2 == 0){
			cout << a[i] << " ";
		}
	}
	cout << endl;
	return 0;
}