#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
void Format(string &t){
	if (t[0] == '-'){
		for (int i = 1; i<t.length(); i++){
			if (t[i] == '0'){
				t.erase(t.begin() + i);
				i--;
			}
			else{
				break;
			}
		}
	}
	else{
		for (int i = 0; i<t.length(); i++){
			if (t[i] == '0'){
				t.erase(t.begin() + i);
				i--;
			}
			else{
				break;
			}
		}
	}
}
string Sodaonguoc(string t){
	string k = "";
	if (t[0] == '-'){
		k += t[0];
		for (int i = t.length() - 1; i >= 1; i--){
			k += t[i];
		}
	}
	else{
		for (int i = t.length() - 1; i >= 0; i--){
			k += t[i];
		}
	}
	return k;
}
int main(){
	string t;
	cin >> t;
	Format(t);
	string kq = Sodaonguoc(t);
	Format(kq);
	cout << kq << endl;
	return 0;
}