#include<iostream>
using namespace std;
int n, v, s, t;
int a[100][100];
int dem = 0;
int demmin = 100;
void Nhap(){
	cin >> n >> v >> s >> t;
	for (int i = 1; i <= v; i++){
		int k, m;
		cin >> k >> m;
		a[k][m] = 1;
		a[m][k] = 1;
	}
}
void Try(int k){
	if (k == t){
		if (dem<demmin){
			demmin = dem;
		}
		return;
	}
	for (int i = 1; i <= n; i++){
		if (a[k][i]){
			dem++;
			a[k][i] = 0;
			a[i][k] = 0;
			Try(i);
			a[k][i] = 1;
			a[i][k] = 1;
			dem--;
		}
	}
}
int main(){
	Nhap();
	Try(s);
	cout << demmin << endl;
	return 0;
}