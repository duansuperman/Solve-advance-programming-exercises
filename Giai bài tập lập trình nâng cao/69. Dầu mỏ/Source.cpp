#include<iostream>
using namespace std;
int M, N;
int a[100][100];
int b[100][100];
int c[100][100];
int d[100][100];
int dx[] = { 1, 0 };
int dy[] = { 0, 1 };
void Nhap(){
	cin >> M >> N;
	for (int i = 1; i <= M; i++){
		for (int j = 1; j <= N; j++){
			cin >> a[i][j];
			b[i][j] = 1;
		}
	}
}
int tongmax = 0;
void Try(int x, int y){
	if (x == M&&y == N){
		int tong = 0;
		for (int i = 1; i <= M; i++){
			for (int j = 1; j <= N; j++){
				tong += c[i][j];
			}

		}
		if (tong >= tongmax){
			tongmax = tong;
			// cout<<tong<<endl;
			for (int i = 1; i <= M; i++){
				for (int j = 1; j <= N; j++){
					d[i][j] = c[i][j];
				}
			}
		}
		return;
	}
	for (int i = 0; i <= 1; i++){
		int m = x + dx[i];
		int n = y + dy[i];
		if (m >= 1 && m <= M&&n >= 1 && n <= N&&b[m][n] == 1){
			c[m][n] = a[m][n];
			b[m][n] = 0;
			Try(m, n);
			b[m][n] = 1;
			c[m][n] = 0;
		}
	}
}
int main(){
	Nhap();
	c[1][1] = a[1][1];
	b[1][1] = 0;
	Try(1, 1);
	cout << tongmax << endl;
	for (int i = 1; i <= M; i++){
		for (int j = 1; j <= N; j++){
			if (d[i][j] != 0){
				cout << i << " " << j << endl;
			}
		}

	}
	cout << endl;
	return 0;
}