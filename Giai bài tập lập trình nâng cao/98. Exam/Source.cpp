#include<iostream>
#include<vector>
using namespace std;
struct Arr{
	string t1, t2;
	int t;
};
istream& operator>>(istream& is, Arr & a){
	is >> a.t1 >> a.t2 >> a.t;
	return is;
}

int Khoangthoigian(string t1, string t2){
	int a = ((t1[0] - 48) * 10 + t1[1] - 48) * 3600 + ((t1[3] - 48) * 10 + t1[4] - 48) * 60 + (t1[6] - 48) * 10 + t1[7] - 48;
	int b = ((t2[0] - 48) * 10 + t2[1] - 48) * 3600 + ((t2[3] - 48) * 10 + t2[4] - 48) * 60 + (t2[6] - 48) * 10 + t2[7] - 48;
	if (t1>t2){
		return b + 86400 - a;
	}
	else if (t1 == t2){
		return 86400;
	}
	return b - a;
}
int main(){
	int n;
	vector<Arr> a;
	cin >> n;
	for (int i = 0; i<n; i++){
		Arr t;
		cin >> t;
		a.push_back(t);
		cin.ignore();
	}
	for (int i = 0; i<a.size(); i++){
		int t1 = Khoangthoigian(a[i].t1, a[i].t2);
		int t = a[i].t * 60;
		if (t1 >= t){
			cout << "Perfect" << endl;
		}
		else{
			if (t1 + 3600 >= t){
				cout << "Extra" << endl;
			}
			else{
				cout << "Fail" << endl;
			}
		}
	}
	return 0;
}