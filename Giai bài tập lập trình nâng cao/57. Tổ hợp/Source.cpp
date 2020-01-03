#include<iostream>
using namespace std;
int Tohop(int n, int k){
	if (k == 1){
		return n;
	}
	else if (k == n){
		return 1;
	}
	else{
		return Tohop(n - 1, k) + Tohop(n - 1, k - 1);
	}
}
int main(){
	int n, k;
	cin >> n >> k;
	cout << Tohop(n, k) << endl;
	return 0;
}