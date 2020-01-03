#include<iostream>
using namespace std;
int n, m, p, q, s, t;
int a[100][100];
int b[100][100];
int dx[] = { 1, 1, -1, -1 };
int dy[] = { 1, -1, 1, -1 };
int dem = 1;
int demmin = 1000;
void Nhap(){
	cin >> n >> m >> p >> q >> s >> t;
	for (int i = 1; i <= n; i++){
		for (int j = 1; j <= n; j++){
			a[i][j] = 1;
		}
	}
	for (int i = 0; i<m; i++){
		int ri, ci;
		cin >> ri >> ci;
		a[ri][ci] = 0;
	}
}
void Try(int x, int y){
	if (x == s&&y == t){
		if (dem<demmin){
			demmin = dem;
		}
		return;
	}
	for (int i = 0; i<4; i++){
		int h = x + dx[i];
		int k = y + dy[i];
		if (a[h][k] == 1 && h >= 1 && h <= n&&k >= 1 && k <= n){
			b[h][k] = ++dem;
			a[h][k] = 0;
			Try(h, k);
			b[h][k] = 0;
			a[h][k] = 1;
			dem--;
		}
	}
}
int main(){
	Nhap();
	a[p][q] = 0;
	b[p][q] = 1;
	Try(p, q);
	if (demmin != 1000){
		cout << demmin / 2 << endl;
	}
	else{
		cout << "-1" << endl;
	}
	return 0;
}