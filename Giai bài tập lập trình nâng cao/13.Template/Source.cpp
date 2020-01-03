#include<iostream>
using namespace std;
template <typename bien>
bien Max(bien a,bien b){
	return a > b ? a : b;
}
template <typename bien>
void Nhap(bien &a,bien &b){
	cin >> a >> b;
}
int main(){
	int a, b;
	Nhap(a, b);
	cout << Max(a, b) << endl;
	system("pause");
	return 0;
}