#include<iostream>
using namespace std;
int n;
int a[100];
int b[100];
int p[] = { 1, 0 };
int tongtien = 0;
int dem = 0;
void Nhap(){
	cin >> n;
	for (int i = 0; i<n; i++){
		cin >> a[i];
		tongtien += a[i];
	}
}
void Try(int k){
	if (k == n){
		int tong = 0;
		for (int i = 0; i<n; i++){
			if (b[i]){
				tong += a[i];
			}
		}
		if (tong == tongtien / 2){
			dem++;
		}
		return;
	}
	for (int i = 0; i<2; i++){
		b[k] = p[i];
		Try(k + 1);
		b[k] = 0;
	}
}

void Try1(int k){
	if (k == n){
		int tong = 0;
		for (int i = 0; i<n; i++){
			if (b[i]){
				tong += a[i];
			}
		}
		if (tong == tongtien / 2){
			for (int i = 0; i<n; i++){
				if (b[i]){
					cout << 'A' << " ";
				}
				else{
					cout << 'B' << " ";
				}
			}
			cout << endl;
		}
		return;
	}
	for (int i = 0; i<2; i++){
		b[k] = p[i];
		Try1(k + 1);
		b[k] = 0;
	}
}
int main(){
	Nhap();
	if (tongtien % 2 != 0){
		cout << "khong chia duoc" << endl;
		return 0;
	}
	Try(0);
	cout << dem << endl;
	Try1(0);
	return 0;
}