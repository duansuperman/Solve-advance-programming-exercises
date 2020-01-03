#include<iostream>
using namespace std;
int Giatri(int k){
	if (k == 0){
		return 0;
	}
	return Giatri(k - 1) + k;
}
int main(){
	cout << Giatri(5) << endl;
	system("pause");
	return 0;
}
