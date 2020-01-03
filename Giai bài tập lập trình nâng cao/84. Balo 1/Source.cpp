#include<iostream>
using namespace std;
int n, w;
int a[100];
int b[100];
int tongmax = 0;
void Nhap(){
	cin >> n >> w;
	for (int i = 0; i<n; i++){
		cin >> a[i];
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
		if (tong <= w){
			if (tong>tongmax){
				tongmax = tong;
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
	if (k == n){
		int tong = 0;
		for (int i = 0; i<n; i++){
			if (b[i]){
				tong += a[i];
			}
		}
		if (tong <= w){
			if (tong == tongmax){
				for (int i = 0; i<n; i++){
					if (b[i]){
						cout << i << " ";
					}
				}
				cout << endl;
				exit(0);
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
	Try(0);
	cout << tongmax << endl;
	Try1(0);
	return 0;
}