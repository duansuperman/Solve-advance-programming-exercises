#include<iostream>
#include<string>
#include<vector>
using namespace std;
void Locgmail(vector<string>& a){
	for (int i = 0; i<a.size(); i++){
		size_t s = a[i].find("@gmail");
		if (s == string::npos){
			a.erase(a.begin() + i);
			i--;
		}
	}
}
int main(){
	vector<string> a;
	string t;
	while (cin >> t){
		a.push_back(t);
	}
	Locgmail(a);
	for (int i = 0; i<a.size(); i++){
		cout << a[i] << endl;
	}
	return 0;
}