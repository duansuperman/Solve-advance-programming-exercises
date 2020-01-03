#include<iostream>
using namespace std;
int n, w;
int a[100];
int c[100];
int b[100];
int gtmax = 0;
void Nhap(){
	cin >> n >> w;
	for (int i = 1; i <= n; i++){
		cin >> a[i] >> c[i];
		b[i] = 1;
	}
}
void Try(int k){
	if (k == n + 1){
		int tong = 0;
		for (int i = 1; i <= n; i++){
			if (b[i]){
				tong += a[i];
			}
		}
		if (tong <= w){
			int gt = 0;
			for (int i = 1; i <= n; i++){
				if (b[i]){
					gt += c[i];
				}
			}
			if (gt>gtmax){
				gtmax = gt;
			}
		}
		return;
	}
	for (int i = 0; i<2; i++){
		b[k] = i;
		Try(k + 1);
		b[k] = 0;
	}
}

void Try1(int k){
	if (k == n + 1){
		int tong = 0;
		for (int i = 1; i <= n; i++){
			if (b[i]){
				tong += a[i];
			}
		}
		if (tong <= w){
			int gt = 0;
			for (int i = 1; i <= n; i++){
				if (b[i]){
					gt += c[i];
				}
			}
			if (gt == gtmax){
				for (int i = 1; i <= n; i++){
					cout << b[i] << " ";
				}
				cout << endl;
			}
		}
		return;
	}
	for (int i = 0; i<2; i++){
		b[k] = i;
		Try1(k + 1);
		b[k] = 0;
	}
}
int main(){
	Nhap();
	Try(1);
	cout << gtmax << endl;
	Try1(1);
	return 0;
}