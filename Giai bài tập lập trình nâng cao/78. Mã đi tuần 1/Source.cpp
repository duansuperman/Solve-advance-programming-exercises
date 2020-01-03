#include<iostream>
using namespace std;
int n;
int a[100][100];
int dem = 1;
int dx[] = { -1, -1, -2, -2, 1, 1, 2, 2 };
int dy[] = { -2, 2, -1, 1, -2, 2, -1, 1 };
int cach = 0;
void Nhap(){
	cin >> n;
	for (int i = 1; i <= n; i++){
		for (int j = 1; j <= n; j++){
			a[i][j] = 1;
		}
	}
}
void Try(int x, int y){
	if (dem == n*n){
		cach++;
		return;
	}
	for (int i = 0; i<8; i++){
		int p = x + dx[i];
		int q = y + dy[i];
		if (a[p][q] == 1 && p >= 1 && p <= n&&q >= 1 && q <= n){
			a[p][q] = 0;
			dem++;
			Try(p, q);
			a[p][q] = 1;
			dem--;
		}
	}
}
int main(){
	Nhap();
	for (int i = 1; i <= n; i++){
		for (int j = 1; j <= n; j++){
			a[i][j] = 0;
			Try(i, j);
			a[i][j] = 1;
		}
	}
	cout << cach << endl;
	return 0;
}