#include<iostream>
using namespace std;
int N;
int a[100][100];
int b[100][100];
int c[100];
int dx[] = { 1, 1 };
int dy[] = { 0, 1 };
int dem = 0;
int tongmax = 0;
void Nhap(){
	cin >> N;
	for (int i = 0; i<N; i++){
		for (int j = 0; j<N; j++){
			if (j <= i){
				cin >> a[i][j];
				b[i][j] = 1;
			}
		}
	}
}
void Try(int x, int y){
	if (x == N - 1){
		int tong = 0;
		for (int i = 0; i <= dem; i++){
			tong += c[i];
		}
		if (tong>tongmax){
			tongmax = tong;
		}
		return;
	}
	for (int i = 0; i<2; i++){
		int m = x + dx[i];
		int n = y + dy[i];
		if (b[m][n] == 1 && n >= 0 && n<N&&m >= 0 && m<N){
			b[m][n] = 0;
			dem++;
			c[dem] = a[m][n];
			Try(m, n);
			b[m][n] = 1;
			c[dem] = 0;
			dem--;
		}
	}
}

void Try1(int x, int y){
	if (x == N - 1){
		int tong = 0;
		for (int i = 0; i <= dem; i++){
			tong += c[i];
		}
		if (tong == tongmax){
			for (int i = 0; i <= dem; i++){
				cout << c[i] << " ";
			}
			cout << endl;
			return;
		}
		return;
	}
	for (int i = 0; i<2; i++){
		int m = x + dx[i];
		int n = y + dy[i];
		if (b[m][n] == 1 && n >= 0 && n<N&&m >= 0 && m<N){
			b[m][n] = 0;
			dem++;
			c[dem] = a[m][n];
			Try1(m, n);
			b[m][n] = 1;
			c[dem] = 0;
			dem--;
		}
	}
}
int main(){
	Nhap();
	b[0][0] = 0;
	c[0] = a[0][0];
	Try(0, 0);
	Try1(0, 0);
	cout << tongmax << endl;
	return 0;
}