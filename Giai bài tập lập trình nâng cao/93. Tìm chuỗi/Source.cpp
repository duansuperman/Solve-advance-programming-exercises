#include<iostream>
#include<fstream>

using namespace std;
ifstream is;
ofstream os;
int N;
char a[100][100];
int  b[100][100];
char c[100];
int dx[] = { 1, 1 };
int dy[] = { 0, 1 };
int dem = 0;
int tongmax = 0;
void Nhap(){
	is.open("TG.INP");
	is >> N;
	for (int i = 0; i<N; i++){
		for (int j = 0; j <= i; j++){
			is >> a[i][j];
			b[i][j] = 1;
		}
	}
}
void Try(int x, int y){
	if (x == N - 1){
		int tong = 0;
		for (int i = 0; i <= dem; i++){
			if (c[i] == '-'){
				tong -= (c[i + 1] - 48);
				i++;
				continue;
			}
			if (c[i] <= '9'&&c[i] >= '0'){
				tong += c[i] - 48;
			}

		}
		if (tong>tongmax){
			tongmax = tong;
		}
		return;
	}
	for (int i = 0; i<2; i++){
		int m = x + dx[i];
		int n = y + dy[i];
		if (b[m][n] == 1 && m >= 0 && m<N&&n >= 0 && n<N){
			b[m][n] = 0;
			dem++;
			c[dem] = a[m][n];
			Try(m, n);
			b[m][n] = 1;
			c[dem] = ' ';
			dem--;
		}
	}
}
int main(){
	Nhap();
	b[0][0] = 1;
	c[0] = a[0][0];
	Try(0, 0);
	os.open("TG.OUT");
	os << tongmax << endl;
	return 0;
}