#include<iostream>
#include<vector>
using namespace std;
struct Phanso{
	int tu, mau;
	int operator>(Phanso a){
		if ((float)tu / mau>(float)a.tu / a.mau){
			return 1;
		}
		return 0;
	}
};
istream& operator>>(istream& is, Phanso &a){
	is >> a.tu >> a.mau;
	return is;
}
ostream& operator<<(ostream& os, Phanso a){
	os << a.tu << "/" << a.mau << endl;
	return cout;
}
template<class bien>
struct Arr{
	vector<bien>a;
	bien Giatrimin(){
		bien Min = a[0];
		for (int i = 1; i<a.size(); i++){
			if (Min>a[i]){
				Min = a[i];
			}
		}
		return Min;
	}
};
template<class bien>
istream& operator>>(istream& is, Arr<bien> &m){
	bien t;
	is >> t;
	m.a.push_back(t);
	return is;
}
int main(){
	Arr<int> a;
	Arr<float> b;
	Arr<Phanso> c;
	char t;
	while (cin >> t){
		if (t == 'a'){
			cin >> a;
		}
		else if (t == 'b'){
			cin >> b;
		}
		else if (t == 'c'){
			cin >> c;
		}
		else{
			break;
		}
	}
	if (a.a.size() == 0){
		cout << "khong co" << endl;
	}
	else{
		cout << a.Giatrimin() << endl;
	}
	if (b.a.size() == 0){
		cout << "khong co" << endl;
	}
	else{
		cout << b.Giatrimin() << endl;
	}
	if (c.a.size() == 0){
		cout << "khong co" << endl;
	}
	else{
		cout << c.Giatrimin() << endl;
	}
	return 0;
}