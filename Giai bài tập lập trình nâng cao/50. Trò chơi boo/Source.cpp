#include<iostream>
#include<string>
#include<vector>
using namespace std;

string Boo(int n){
	if (n == 0){
		return "boo";
	}
	string t = "b";
	for (int i = 0; i<n + 2; i++){
		t += "o";
	}
	return Boo(n - 1) + t + Boo(n - 1);
}
using namespace std;
int main(){
	int n;
	cin >> n;
	vector<int>a;
	string t = Boo(21);

	for (int i = 0; i<n; i++){
		int k;
		cin >> k;
		a.push_back(k);
	}
	for (int i = 0; i<a.size(); i++){
		cout << t[a[i] - 1] << endl;
	}
	return 0;
}