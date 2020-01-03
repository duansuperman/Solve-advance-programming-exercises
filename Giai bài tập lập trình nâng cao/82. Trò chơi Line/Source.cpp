#include<iostream>
using namespace std;
int n, sx, sy, dx, dy;
int a[100][100];
int dxx[] = { 1, -1, 0, 0 };
int dyy[] = { 0, 0, 1, -1 };
int check = 0;
void Nhap(){
	cin >> n >> sx >> sy >> dx >> dy;
	for (int i = 1; i <= n; i++){
		for (int j = 1; j <= n; j++){
			int k;
			cin >> k;
			if (k == 0){
				a[i][j] = 1;
			}
		}
	}
}
void Try(int x, int y){
	if (x == dx&&y == dy){
		check = 1;
		cout << "YES" << endl;
		exit(0);
	}
	for (int i = 0; i<4; i++){
		int p = x + dxx[i];
		int q = y + dyy[i];
		if (a[p][q] == 1 && p >= 1 && p <= n&&q >= 1 && q <= n){
			a[p][q] = 0;
			Try(p, q);
			a[p][q] = 1;
		}
	}
}
int main(){
	Nhap();
	Try(sx, sy);
	if (check == 0){
		cout << "NO" << endl;
	}
	return 0;
}