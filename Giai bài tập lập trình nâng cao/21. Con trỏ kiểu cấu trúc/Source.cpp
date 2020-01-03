#include<iostream>
using namespace std;
struct PhanSo{
	int tu, mau;
};
int main(){
	PhanSo *ps ;
	ps = new PhanSo;
	(*ps).tu = 1;
	(*ps).mau = 2;
	cout << ps->tu << "/" << ps->mau << endl;
	system("pause");
	return 0;
}