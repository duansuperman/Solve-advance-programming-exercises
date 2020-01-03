#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
string t = "bdfhkt";
string tmax = "";
string::iterator  stringpbrk(string  &s, const string& accept){
	for (int i = 0; i<accept.length(); i++){
		string::iterator it;
		it = find(s.begin(), s.end(), accept[i]);
		if (it != s.end()){
			return it;
		}
	}
	return s.end();
}
void Xuattu(vector<string>&a){
	for (int i = 0; i<a.size(); i++){
		if (stringpbrk(a[i], t) != a[i].end()){
			a.erase(a.begin() + i);
			i--;
		}
	}
	for (int i = 0; i<a.size(); i++){
		if (a[i].length()>tmax.length()){
			tmax = a[i];
		}
	}
	cout << tmax << endl;
}
int main(){
	vector<string>a;
	string k;
	while (cin >> k){
		a.push_back(k);
	}
	Xuattu(a);
	return 0;
}