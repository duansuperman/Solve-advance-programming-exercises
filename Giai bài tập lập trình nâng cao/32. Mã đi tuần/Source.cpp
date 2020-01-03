#include<iostream>
using namespace std;
int di[] = { -2, -2, -1, -1, 1, 1, 2, 2 };
int dj[] = { -1, 1, -2, 2, -2, 2, -1, 1 };
int a[100][100];
int b[100][100];
int n;
int dem = 1;
int cach = 0;
void Nhap(){
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
			{
				b[i][j] = 0;
			}
		}
	}
}
void Try(int i, int j){
	if (dem == n*n){
		cach++;
	}
	for (int k = 0; k < 8; k++){
		int x = i + di[k];
		int y = j + dj[k];
		if (x >= 0 && x < n&& y >= 0 && y < n&&b[x][y] == 0){
			dem++;
			a[x][y] = dem;
			b[x][y] = 1;
			Try(x, y);
			b[x][y] = 0;
			dem--;
		}
	}
}
int main(){
	cin >> n;
	Nhap();
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
			b[i][j] = 1;
			a[i][j] = 1;
			Try(i, j);
			b[i][j] = 0;
			
		}
	}
	cout << cach << endl;
	//system("pause");
	return 0;
}