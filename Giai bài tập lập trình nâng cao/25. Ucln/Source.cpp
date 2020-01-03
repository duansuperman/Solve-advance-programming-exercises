#include<iostream>
using namespace std;
int Ucln(int a,int b){
	if (b == 0){
		return a;
	}
	return Ucln(b, a%b);
}
int main(){
	cout << Ucln(3, 6) << endl;
	system("pause");
	return 0;
}