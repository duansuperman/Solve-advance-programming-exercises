#include<iostream>
#include<vector>
using namespace std;
struct Phanso{
	int tu, mau;
	int operator==(Phanso a){
		if ((float)tu / mau == (float)a.tu / a.mau){
			return 1;
		}
		return 0;
	}
};
istream& operator>>(istream& is, Phanso &a){
	is >> a.tu >> a.mau;
	return is;
}

template<class bien>
struct Arr{
	vector<bien> a;
	int Haibienbangnhau(){
		if (a[0] == a[1]){
			return 1;
		}
		return 0;
	}
};
template<class bien>
istream& operator>>(istream& is, Arr<bien> &m){
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
		cin >> a >> a;
		if (a.Haibienbangnhau()){
			cout << "true" << endl;
		}
		else{
			cout << "false" << endl;
		}
	}
	else if (t == 'b'){
		Arr<float> a;
		cin >> a >> a;
		if (a.Haibienbangnhau()){
			cout << "true" << endl;
		}
		else{
			cout << "false" << endl;
		}
	}
	else{
		Arr<Phanso> a;
		cin >> a >> a;
		if (a.Haibienbangnhau()){
			cout << "true" << endl;
		}
		else{
			cout << "false" << endl;
		}
	}
	return 0;
}