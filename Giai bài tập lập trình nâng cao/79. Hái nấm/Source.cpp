#include<iostream>
using namespace std;
long n, m;
long a[100][100];
long b[100][100];
long c[100];
long dem = 0;
long dx[] = { 1, 0 };
long dy[] = { 0, 1 };
long cach = 0;
void Nhap(){
	cin >> n >> m;
	for (long i = 1; i <= n; i++){
		for (long j = 1; j <= m; j++){
			cin >> a[i][j];
			if (a[i][j] != -1){
				b[i][j] = 1;
			}
		}
	}
}
void Try(long x, long y){
	if (x == n&&y == m){
		long check = 0;
		for (long i = 1; i<dem - 1; i++){
			if (c[i] != c[i + 1]){
				check = 1;
			}
		}
		if (check){
			cach++;
		}
		return;
	}
	for (long i = 0; i<2; i++){
		long p = x + dx[i];
		long q = y + dy[i];
		if (b[p][q] == 1 && p >= 1 && p <= n&&q >= 1 && q <= m){
			b[p][q] = 0;
			dem++;
			c[dem] = a[p][q];
			Try(p, q);
			b[p][q] = 1;
			c[dem] = 0;
			dem--;
		}
	}
}
int main(){
	Nhap();
	c[0] = a[1][1];
	b[1][1] = 0;
	Try(1, 1);
	if (cach != 0){
		cout << cach << endl;
	}
	else{
		cout << "-1" << endl;
	}
	return 0;
}