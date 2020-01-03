#include<iostream>
#include<vector>
using namespace std;
void Nhap(vector<int>& a){
	int k;
	while (cin >> k){
		a.push_back(k);
	}
}
int Catalan(int k){
	if (k == 0 || k == 1){
		return 1;
	}
	else{
		int tong = 0;
		for (int i = 0; i<k; i++){
			tong += Catalan(i)*Catalan(k - i - 1);
		}
		return tong;
	}
}
int main(){
	vector<int> a;
	Nhap(a);
	for (int i = 0; i<a.size(); i++){
		cout << Catalan(a[i]) << endl;
	}

	return 0;
}