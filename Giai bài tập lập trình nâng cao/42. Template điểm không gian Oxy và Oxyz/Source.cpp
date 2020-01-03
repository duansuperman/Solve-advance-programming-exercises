#include<iostream>
#include<vector>
#include<cmath>
#include<string>
using namespace std;
struct Oxy{
	float x, y;
	float operator-(Oxy o){
		return sqrt(pow(x - o.x, 2) + pow(y - o.y, 2));
	}
	int operator<(Oxy o){
		if (x<o.x){
			return 1;
		}
		if (x>o.x){
			return 0;
		}
		if (y<o.y){
			return 1;
		}
		if (y>o.y){
			return 0;
		}
		return 0;
	}
};
istream& operator>>(istream& is, Oxy &o){
	is >> o.x >> o.y;
	return is;
}
ostream& operator<<(ostream& os, Oxy o){
	os << "(" << o.x << "," << o.y << ")";
	return cout;
}

struct Oxyz{
	float x, y, z;
	float operator-(Oxyz o){
		return sqrt(pow(x - o.x, 2) + pow(y - o.y, 2) + pow(z - o.z, 2));
	}
	int operator<(Oxyz o){
		if (x<o.x){
			return 1;
		}
		if (x>o.x){
			return 0;
		}
		if (y<o.y){
			return 1;
		}
		if (y>o.y){
			return 0;
		}
		if (z<o.z){
			return 1;
		}
		if (z>o.z){
			return 0;
		}
		return 0;
	}
};
istream& operator>>(istream& is, Oxyz &o){
	is >> o.x >> o.y >> o.z;
	return is;
}
ostream& operator<<(ostream& os, Oxyz o){
	os << "(" << o.x << "," << o.y << "," << o.z << ")";
	return cout;
}

template<class bien>
struct Arr{
	vector<bien> a;
	float Khoangcachmax(){
		float Max = a[0] - a[1];
		for (int i = 0; i<a.size() - 1; i++){
			for (int j = i + 1; j<a.size(); j++){
				if (Max<a[i] - a[j]){
					Max = a[i] - a[j];
				}
			}
		}
		return Max;
	}
	void Mangtangdan(){
		for (int i = 0; i<a.size() - 1; i++){
			for (int j = i + 1; j<a.size(); j++){
				if (a[j]<a[i]){
					bien temp = a[i];
					a[i] = a[j];
					a[j] = temp;
				}
			}
		}
	}
	void Manggiamdan(){
		for (int i = 0; i<a.size() - 1; i++){
			for (int j = i + 1; j<a.size(); j++){
				if (a[i]<a[j]){
					bien temp = a[i];
					a[i] = a[j];
					a[j] = temp;
				}
			}
		}
	}
};
template<class bien>
istream& operator>>(istream& is, Arr<bien> & m){
	bien k;
	is >> k;
	m.a.push_back(k);
	return is;
}
template<class bien>
ostream& operator<<(ostream& os, Arr<bien> m){
	for (int i = 0; i<m.a.size(); i++){
		os << m.a[i] << " ";
	}
	os << endl;
	return cout;
}
int main(){
	Arr<Oxy> a;
	Arr<Oxyz> b;
	string t;
	while (cin >> t){
		if (t == "Oxy"){
			cin >> a;
		}
		else if (t == "Oxyz"){
			cin >> b;
		}
		else{
			break;
		}
	}
	a.Mangtangdan();
	b.Manggiamdan();
	cout << a << b;
	cout << roundf(a.Khoangcachmax() * 1000) / 1000 << endl;
	cout << roundf(b.Khoangcachmax() * 1000) / 1000 << endl;
	return  0;
}