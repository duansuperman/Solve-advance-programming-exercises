#include<iostream>
#include<cmath>
#include<vector>
using namespace std;
struct SoNguyen{
	int n;
	int Tinhtongthanhphan(int k = 0){
		int sl = log10(n) + 1;
		int nn = n;
		int tongchan = 0;
		int tongle = 0;
		for (int i = sl - 1; i >= 0; i--){
			int b = nn % 10;
			if (i % 2 == 0){
				tongchan += b;
			}
			else{
				tongle += b;
			}
			nn /= 10;
		}
		if (k == 0){
			return tongchan;
		}
		else{
			return tongle;
		}
	}
	int operator<(SoNguyen a){
		if (Giatrichan() < a.Giatrichan()){
			return 1;
		}
		return 0;
	}
	int Giatrichan(){
		int sl = log10(n) + 1;
		int nn = n;
		vector<int> a;
		int tong = 0;
		for (int i = sl - 1; i >= 0; i--){
			int b = nn % 10;
			if (i % 2 == 0){
				a.push_back(b);
			}

			nn /= 10;
		}
		for (int i = a.size() - 1; i >= 0; i--){
			tong += a[i] * pow(10, i);
		}
		return tong;
	}
};
istream& operator>>(istream & is, SoNguyen &a){
	is >> a.n;
	return is;
}
ostream& operator<<(ostream& oss, SoNguyen a){
	int sl = log10(a.n) + 1;
	vector<int> arr;
	for (int i = sl - 1; i >= 0; i--){
		int b = a.n % 10;
		if (i % 2 == 0){
			arr.push_back(b);
		}
		a.n /= 10;
	}
	for (int i = arr.size() - 1; i >= 0; i--){
		oss << arr[i];
	}
	oss << endl;
	return cout;
}
int main(){
	SoNguyen a, b;
	cin >> a >> b;
	int k;
	cin >> k;
	cout << a << b;
	if (a < b){
		cout << "true" << endl;
	}
	else{
		cout << "false" << endl;
	}
	cout << a.Tinhtongthanhphan(k) << endl;
	cout << b.Tinhtongthanhphan(k) << endl;
	//system("pause");
	return 0;
}