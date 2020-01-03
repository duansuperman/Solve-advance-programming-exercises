#include<iostream>
#include<cmath>
using namespace std;
int n;
int a[100][100];
int b[100][100];
int c[1000];
int dx[] = { 0, 1 };
int dy[] = { 1, 0 };
int dem = 0;
string tongmin = "1111111111111111";
void Nhap(){
	cin >> n;
	for (int i = 0; i<n; i++){
		for (int j = 0; j<n; j++){
			cin >> a[i][j];
			if (a[i][j] == -1){
				b[i][j] = 0;
			}
			else{
				b[i][j] = 1;
			}
		}
	}
}
void Try(int x, int y){
	if (x == n - 1 && y == n - 1){
		string tong = "";
		for (int i = 0; i <= dem; i++){
			tong += char(c[i] + 48);

		}
		if (tong<tongmin){
			tongmin = tong;
		}
		return;
	}
	for (int i = 0; i<2; i++){
		int p = x + dx[i];
		int q = y + dy[i];
		if (b[p][q] == 1 && p >= 0 && p<n&&q >= 0 && q<n){
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
	b[0][0] = 0;
	c[0] = a[0][0];
	Try(0, 0);
	int tong = 0;
	for (int i = 0; i<tongmin.length(); i++){
		if (tongmin[i] == '1'){
			tong += pow(2, tongmin.length() - 1 - i);
		}

	}
	cout << tong << endl;
	return 0;
}