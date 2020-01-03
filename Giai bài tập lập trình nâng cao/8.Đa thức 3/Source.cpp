#include<iostream>
#include<vector>
using namespace std;
struct DaThuc{
	int n;
	vector<int> a;

};
istream& operator>>(istream & is, DaThuc &dt){
	is >> dt.n;
	dt.a.resize(dt.n + 1);
	for (int i = dt.a.size() - 1; i >= 0; i--){
		int k;
		is >> k;
		dt.a[i] = k;
	}
	return is;
}
ostream& operator<<(ostream &os, DaThuc dt){
	if (dt.n == -1){
		os << 0;
	}
	if (dt.n == -2){
		os << 0;
	}

	for (int i = dt.n; i >= 0; i--){
		if (i == dt.n){
			if (dt.n == 1){
				if (dt.a[i] == 1){
					os << "x";
				}
				else if (dt.a[i] == -1){
					os << "-x";
				}
				else{
					os << dt.a[i] << "x";
				}
				continue;
			}
			if (dt.n == 0){
				os << dt.a[i];
				continue;
			}
			if (dt.a[i] == 0){
				continue;
			}
			else if (dt.a[i] == 1){
				os << "x^" << i;
			}
			else if (dt.a[i] == -1){
				os << "-x^" << i;
			}
			else{
				os << dt.a[i] << "x^" << i;
			}
		}
		else if (i == 1){
			if (dt.a[i] == 0){
				continue;
			}
			else if (dt.a[i] == 1){
				os << "x";
			}
			else if (dt.a[i] == -1){
				os << "-x";
			}
			else{
				if (dt.a[i] > 0){
					os << "+" << dt.a[i] << "x";
				}
				else{
					os << dt.a[i] << "x";
				}
			}
		}
		else if (i == 0){
			if (dt.a[i] == 0){
				continue;
			}
			else{
				if (dt.a[i] > 0){
					os << "+" << dt.a[i];
				}
				else{
					os << dt.a[i];
				}
			}
		}
		else{
			if (dt.a[i] == 0){
				continue;
			}
			else if (dt.a[i] == 1){
				os << "+x^" << i;
			}
			else if (dt.a[i] == -1){
				os << "-x^" << i;
			}
			else {
				if (dt.a[i] > 0){
					os << "+" << dt.a[i] << "x^" << i;
				}
				else{
					os << dt.a[i] << "x^" << i;
				}
			}
		}
	}
	os << endl;
	return os;
}
void Daoham(DaThuc &dt){
	for (int i = dt.a.size() - 1; i >= 0; i--){
		dt.a[i] *= i;
	}
	if (dt.a.size()>0){
		dt.a.erase(dt.a.begin());
	}
	dt.n -= 1;
}
int main(){
	DaThuc a;
	cin >> a;
	cout << a;
	Daoham(a);
	cout << a;
	Daoham(a);
	cout << a;
	//system("pause");
	return 0;
}