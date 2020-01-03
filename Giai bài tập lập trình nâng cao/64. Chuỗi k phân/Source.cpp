#include<iostream>
#include<cmath>
#include<vector>
using namespace std;
int k, n;
vector<int>a;
void Nhap(){
	cin >> k >> n;
	a.resize(n + 1);

}
void Try(int m){
	if (m == n + 1){
		for (int i = 1; i<m; i++){
			cout << a[i];
		}
		cout << endl;
		return;
	}
	for (int i = 1; i <= k; i++){
		a[m] = i;
		m++;
		Try(m);
		m--;
	}
}
int main(){
	Nhap();
	cout << pow(k, n) << endl;
	Try(1);
	return 0;
}