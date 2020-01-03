#include<iostream>
using namespace std;
int Ucln(int a, int b){
	if (a == b){
		return a;
	}
	else if (a>b){
		return Ucln(a - b, b);
	}
	else{
		return Ucln(a, b - a);
	}
}
int main(){
	int a, b;
	cin >> a >> b;
	cout << Ucln(a, b) << endl;
	return 0;
}