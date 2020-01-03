#include<iostream>
#include<vector>
using namespace std;
struct Phanso{
	int tu, mau;
	int operator<(Phanso a){
		if ((float)tu / mau<(float)a.tu / a.mau){
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
	vector<bien> a;
	bien Giatrimax(){
		bien Max = a[0];
		for (int i = 1; i<a.size(); i++){
			if (Max<a[i]){
				Max = a[i];
			}
		}
		return Max;
	}
};
template<class bien>
istream& operator>>(istream & is, Arr<bien> &m){
	bien k;
	is >> k;
	m.a.push_back(k);
	return is;
}
int main(){
	char t;
	cin >> t;
	if (t == 'a'){
		Arr<int> a;
		cin >> a >> a >> a;
		cout << a.Giatrimax() << endl;
	}
	else if (t == 'b'){
		Arr<float> a;
		cin >> a >> a >> a;
		cout << a.Giatrimax() << endl;
	}
	else{
		Arr<Phanso> a;
		cin >> a >> a >> a;
		cout << a.Giatrimax();
	}

	return 0;
}