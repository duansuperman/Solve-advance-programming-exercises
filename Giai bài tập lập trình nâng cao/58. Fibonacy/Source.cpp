#include<iostream>
using namespace std;
int Fibonacy(int n){
	if (n <= 2){
		return 1;
	}
	return Fibonacy(n - 1) + Fibonacy(n - 2);
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