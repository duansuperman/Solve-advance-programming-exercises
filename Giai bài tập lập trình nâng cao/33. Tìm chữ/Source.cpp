#include<iostream>
#include<string>
#include<vector>
using namespace std;
int di[] = { -1, 0, 0, 1 };
int dj[] = { 0, -1, 1, 0 };
int m, n;
char kt[100];
int dem = 0;
string t;
char a[100][100];
int b[100][100];
int vtx, vty;
int cach = 0;
void Nhap(){
	for (int i = 0; i<m; i++){
		for (int j = 0; j<n; j++){
			b[i][j] = 0;
		}
	}
}
void Try(int i, int j){
	if (dem == t.length() - 1){
		int check = 0;
		for (int h = 0; h <= dem; h++){
			if (kt[h] != t[h]){
				check = 1;
			}
		}
		if (check == 0){
			cout << "YES" << endl;
			cout << "(" << vtx << "," << vty << ")" << endl;
			exit(0);
		}


	}
	for (int k = 0; k<4; k++){
		int x = i + di[k];
		int y = j + dj[k];
		if (x<m&&x >= 0 && y<n&&y >= 0 && b[x][y] == 0){
			dem++;
			kt[dem] = a[x][y];
			b[x][y] = 1;
			vtx = x;
			vty = y;
			Try(x, y);
			b[x][y] = 0;
			dem--;
		}
	}
}
int main(){
	int x, y;
	cin >> m >> n >> x >> y;
	cin >> t;
	for (int i = 0; i<m; i++){
		for (int j = 0; j<n; j++){
			cin >> a[i][j];
		}
	}
	Nhap();
	kt[0] = a[x][y];
	b[x][y] = 1;
	Try(x, y);
	cout << "NO" << endl;
	return 0;
}