#include<iostream>
#include<vector>
using namespace std;
struct Dathuc{
	int n;
	vector<int> a;
	void Daoham(){
		n -= 1;

		for (int i = a.size() - 1; i >= 0; i--){
			a[i] *= i;
		}
		a.erase(a.begin());
	}
};
istream& operator>>(istream& is, Dathuc &d){
	is >> d.n;
	vector<int>b;

	for (int i = 0; i <= d.n; i++){
		int k;
		is >> k;
		b.push_back(k);
	}
	for (int i = d.n; i >= 0; i--){
		d.a.push_back(b[i]);
	}
	return is;
}
ostream& operator<<(ostream& os, Dathuc d){
	for (int i = d.a.size() - 1; i >= 0; i--){
		if (i == d.a.size() - 1){
			if (i == 1){
				if (d.a[i] == 0){
					continue;
				}
				else if (d.a[i] == 1){
					cout << "x";
				}
				else if (d.a[i] == -1){
					cout << "-x";
				}
				else{
					cout << d.a[i] << "x";
				}
				continue;
			}
			if (i == 0){
				if (d.a[i] == 0){
					continue;
				}
				else if (d.a[i] == 1){
					cout << "1";
				}
				else if (d.a[i] == -1){
					cout << "-1";
				}
				else{
					cout << d.a[i];
				}
				continue;
			}
			if (d.a[i] == 0){
				continue;
			}
			else if (d.a[i] == 1){
				cout << "x^" << i;
			}
			else if (d.a[i] == -1){
				cout << "-x^" << i;
			}
			else{
				cout << d.a[i] << "x^" << i;
			}
		}
		else if (i == 0){
			if (d.a[d.n] != 0){
				if (d.a[i] == 0){
					continue;
				}
				else{
					if (d.a[i]>0){
						cout << "+" << d.a[i];
					}
					else{
						cout << d.a[i];
					}
				}
			}
			else{
				if (d.a[i] == 0){
					continue;
				}
				else{
					if (d.a[i]>0){
						cout << d.a[i];
					}
					else{
						cout << d.a[i];
					}
				}
			}
		}
		else if (i == 1){
			if (d.a[d.n] != 0){
				if (d.a[i] == 0){
					continue;
				}
				else if (d.a[i] == 1){
					cout << "+x";
				}
				else if (d.a[i] == -1){
					cout << "-x";
				}
				else{
					if (d.a[i]>0){
						cout << "+" << d.a[i] << "x";
					}
					else{
						cout << d.a[i] << "x";
					}
				}
			}
			else{
				if (d.a[i] == 0){
					continue;
				}
				else if (d.a[i] == 1){
					cout << "x";
				}
				else if (d.a[i] == -1){
					cout << "-x";
				}
				else{
					if (d.a[i]>0){
						cout << d.a[i] << "x";
					}
					else{
						cout << d.a[i] << "x";
					}
				}
			}
		}
		else{
			if (d.a[d.n] != 0){
				if (d.a[i] == 0){
					continue;
				}
				else if (d.a[i] == 1){
					cout << "+x^" << i;
				}
				else if (d.a[i] == -1){
					cout << "-x^" << i;
				}
				else{
					if (d.a[i]>0){
						cout << "+" << d.a[i] << "x^" << i;
					}
					else{
						cout << d.a[i] << "x^" << i;
					}
				}
			}
			else{
				if (d.a[i] == 0){
					continue;
				}
				else if (d.a[i] == 1){
					cout << "x^" << i;
				}
				else if (d.a[i] == -1){
					cout << "-x^" << i;
				}
				else{
					if (d.a[i]>0){
						cout << d.a[i] << "x^" << i;
					}
					else{
						cout << d.a[i] << "x^" << i;
					}
				}
			}
		}
	}
	os << endl;
	return cout;
}

int main(){
	Dathuc a;
	cin >> a;
	cout << a;

	if (a.n <= 0){
		cout << "0" << endl;

	}
	else{
		a.Daoham();
		cout << a;
	}

	if (a.n <= 0){
		cout << "0" << endl;

	}
	else{
		a.Daoham();
		cout << a;
	}
	return 0;
}