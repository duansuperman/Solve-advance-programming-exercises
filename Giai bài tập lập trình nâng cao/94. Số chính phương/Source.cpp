#include<iostream>
#include<vector>
#include<cmath>
#include <bits/stdc++.h> 
using namespace std;
void Nhap(int &N, int &K, vector<int>&a){
	cin >> N >> K;
	for (int i = 0; i<N; i++){
		int k;
		cin >> k;
		a.push_back(k);
	}
}
int Sochinhphuong(int n){
	return sqrt(n) == (int)sqrt(n);
}
int Soluongchinhphuong(vector<int>&a){
	int dem = 0;
	for (int i = 0; i<a.size(); i++){
		if (Sochinhphuong(a[i])){
			dem++;
		}
	}
	return dem;
}
void Xoasochinhphuong(vector<int>&a){
	for (int i = 0; i<a.size(); i++){
		if (Sochinhphuong(a[i])){
			a.erase(a.begin() + i);
			i--;
		}
	}
}
int Timso(vector<int>&a, int k){
	for (int i = 0; i<a.size(); i++){
		if (a[i] == k){
			return 1;
		}
	}
	return 0;
}
int main(){
	int N, K;
	vector<int>a;
	Nhap(N, K, a);
	cout << Soluongchinhphuong(a) << endl;
	if (Timso(a, K)){
		cout << "Yes" << endl;
	}
	else{
		cout << "No" << endl;
	}
	Xoasochinhphuong(a);
	sort(a.begin(), a.end());
	for (int i = 0; i<a.size(); i++){
		cout << a[i] << " ";
	}
	cout << endl;
	return 0;
}