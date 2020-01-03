#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int Kiemtra(string t1, string t2){
	if (t1.length() == t2.length()){
		for (int i = 0; i<t1.length(); i++){
			string::iterator it;
			it = find(t2.begin(), t2.end(), t1[i]);
			if (it == t2.end()){
				return 0;
			}
		}
		return 1;
	}
	return 0;
}
int main(){
	string t1, t2;
	getline(cin, t1);
	getline(cin, t2);
	if (Kiemtra(t1, t2)){
		cout << "YES" << endl;
	}
	else{
		cout << "NO" << endl;
	}
	return 0;
}