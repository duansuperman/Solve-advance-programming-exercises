#include<iostream>
using namespace std;
int R, C;
char a[100][100];
int b[100][100];
int c[100][100];
int dx[] = { -1, 1, 0, 0 };
int dy[] = { 0, 0, -1, 1 };
int p, q, s, t;
int dem = 1;
int tongmin = 1000;
void Nhap(){
	cin >> R >> C;
	for (int i = 1; i <= R; i++){
		for (int j = 1; j <= C; j++){
			cin >> a[i][j];
			if (a[i][j] == '*'){
				b[i][j] = 0;
			}
			else{
				b[i][j] = 1;
			}
			if (a[i][j] == 'C'){
				p = i;
				q = j;
			}
			if (a[i][j] == 'B'){
				s = i;
				t = j;
			}
		}
	}
}
void Try(int x, int y){
	if (x == s&&y == t){
		if (dem<tongmin){
			tongmin = dem;
		}
	}
	for (int i = 0; i<4; i++){
		int m = x + dx[i];
		int n = y + dy[i];
		if (b[m][n] == 1 && n >= 1 && n <= C&&m >= 1 && m <= R){
			dem++;
			b[m][n] = 0;
			c[m][n] = dem;
			Try(m, n);
			b[m][n] = 1;
			c[m][n] = 0;
			dem--;
		}
	}
}
int main(){
	Nhap();
	b[p][q] = 0;
	c[p][q] = 1;
	Try(p, q);
	cout << tongmin - 1 << endl;
	return 0;
}