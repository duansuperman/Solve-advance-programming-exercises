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
string tongmax = "0";
string kq = "";
void Nhap(){
	cin >> n;
	for (int i = 0; i<n; i++){
		for (int j = 0; j<n; j++){
			cin >> a[i][j];
			b[i][j] = 1;
		}
	}
}
void Try(int x, int y){
	if (x == n - 1 && y == n - 1){

		if (kq>tongmax){
			tongmax = kq;
		}
		return;
	}
	for (int i = 0; i<2; i++){
		int p = x + dx[i];
		int q = y + dy[i];
		if (b[p][q] == 1 && p >= 0 && p<n&&q >= 0 && q<n){
			b[p][q] = 0;
			//dem++;
			//c[dem] = a[p][q];
			kq += char(a[p][q] + 48);
			Try(p, q);
			b[p][q] = 1;
			//c[dem] = 0;
			//dem--;
			kq = kq.erase(kq.length() - 1);
		}
	}
}
int main(){
	Nhap();
	b[0][0] = 0;
	kq += char(a[0][0] + 48);
	Try(0, 0);
	int tong = 0;
	for (int i = 0; i<tongmax.length(); i++){
		if (tongmax[i] == '1'){
			tong += pow(2, tongmax.length() - 1 - i);
		}

	}
	cout << tong << endl;
	return 0;
}