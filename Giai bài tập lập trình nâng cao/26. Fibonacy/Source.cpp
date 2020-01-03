#include<iostream>
using namespace std;
int Fibonacy(int k){
	if (k == 1 || k == 2){
		return 1;
	}
	return Fibonacy(k - 1) + Fibonacy(k - 2);
}
int main(){
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++){
		cout << Fibonacy(i) << " ";
	}
	cout << endl;
	return 0;
}