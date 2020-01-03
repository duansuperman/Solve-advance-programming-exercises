#include<iostream>
#include<vector>
using namespace std;
int n;
vector<int>a;
void Nhap(){
	cin >> n;
	a.resize(n);
}
void Try(int k){
	if (k == n){
		for (int i = 0; i<k; i++){
			cout << a[i];
		}
		cout << endl;
		return;
	}
	for (int i = 0; i <= 1; i++){
		a[k] = i;
		k++;
		Try(k);
		k--;
	}
}
int main(){
	Nhap();
	Try(0);
	return 0;
}