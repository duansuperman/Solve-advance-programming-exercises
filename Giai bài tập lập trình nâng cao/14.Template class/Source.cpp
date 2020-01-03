#include<iostream>
#include<vector>
#include<string>
using namespace std;
template<class bien>
struct Arr{
	int n;
	vector<bien> a;
	Arr(){
		n = 0;
	}
	bien& operator[](int i){
		return a[i];
	}
};
template<typename bien>
istream& operator>>(istream& is, Arr<bien> &a){
	cin >> a.n;
	for (int i = 0; i < a.n; i++){
		bien k;
		cin >> k;
		a.a.push_back(k);
	}

	return is;
}
template<class bien>
ostream& operator<<(ostream& os, Arr<bien> a){
	for (int i = 0; i < a.a.size(); i++){
		os << a.a[i] << " ";
	}
	os << endl;
	return os;
}
int main(){
	Arr<int> a;
	cin >> a;
	cout << a;
	a.a[1] = 6;
	cout << a[1] << endl;
	
	system("pause");
	return 0;
}