#include<iostream>
using namespace std;
int m, n, x, y;
string t;
char a[100][100];
int b[100][100];
char c[100];
int dx[] = { -1, 1, 0, 0 };
int dy[] = { 0, 0, -1, 1 };
int dem = 0;
int checkout = 0;
void Nhap(){
	cin >> m >> n >> x >> y;
	cin >> t;
	for (int i = 0; i<m; i++){
		for (int j = 0; j<n; j++){
			cin >> a[i][j];
			b[i][j] = 1;
		}
	}
}
void Try(int p, int q){
	if (dem == t.length() - 1){
		int check = 0;
		for (int i = 0; i <= dem; i++){

			if (c[i] != t[i]){
				check = 1;
			}
		}
		if (check == 0){
			checkout = 1;
			cout << "YES" << endl;
			cout << "(" << p << "," << q << ")" << endl;
			exit(0);
		}
		return;
	}
	for (int i = 0; i<4; i++){
		int xx = p + dx[i];
		int yy = q + dy[i];
		if (b[xx][yy] == 1 && xx >= 0 && xx<m&&yy >= 0 && yy<n){
			b[xx][yy] = 0;
			dem++;
			c[dem] = a[xx][yy];
			Try(xx, yy);
			b[xx][yy] = 1;
			c[dem] = '0';
			dem--;

		}
	}
}
int main(){
	Nhap();
	b[x][y] = 0;
	c[0] = a[x][y];
	Try(x, y);
	if (checkout == 0){
		cout << "NO" << endl;
	}
	return 0;
}