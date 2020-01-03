#include<iostream>
#include<vector>
using namespace std;
int k, n;
vector<int> a;
vector<int>b;
int dem = 1;
void Nhap(){
	cin >> k >> n;
	a.resize(n + 1, 1);
	b.resize(n + 1);
}
void Try(int m){
	if (m == k + 1){
		for (int j = 1; j<m; j++){
			cout << b[j] << " ";
		}
		cout << endl;
		return;
	}
	for (int i = 1; i <= n; i++){

		if (a[i]){
			b[m] = i;
			a[i] = 0;
			m++;
			Try(m);
			a[i] = 1;
			m--;

		}
	}
}
int main(){
	Nhap();

	Try(1);
	return 0;
}