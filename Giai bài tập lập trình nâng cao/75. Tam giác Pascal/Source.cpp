#include<iostream>
using namespace std;
long Tohop(int n, int k){
	long res = 1;
	for (int i = 1; i <= k; i++, n--){
		res = res*n / i;
	}
	return res;
}
int main(){
	int n;
	cin >> n;
	for (int i = 0; i<n; i++){
		cout << Tohop(n - 1, i) << " ";
	}
	cout << endl;
	return 0;
}