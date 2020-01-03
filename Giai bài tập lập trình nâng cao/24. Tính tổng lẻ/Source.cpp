#include<iostream>
using namespace std;
int Tinhtongle(int k){
	if (k % 2 == 0){
		k -= 1;
	}
	if (k == 1){
		return 1;
	}
	return Tinhtongle(k - 2) + k;
	
}
int main(){
	int k;
	cin >> k;
	cout << Tinhtongle(k) << endl;
	system("pause");
	return 0;
}