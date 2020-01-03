#include<iostream>
#include<vector>
using namespace std;
template<class bien>
struct M1C{
	vector<bien> a;
	void nhap(){
		bien k;
		while (cin >> k){
			a.push_back(k);
		}
	}
	int tong(){
		bien Tong = a[0];
		for (int i = 1; i<a.size(); i++){
			Tong = Tong + a[i];
		}
		return Tong;
	}
	void xuat(){
		cout << tong() << endl;
	}
};

int main(){
	M1C<int> a;
	a.nhap();
	a.xuat();
	return 0;
}