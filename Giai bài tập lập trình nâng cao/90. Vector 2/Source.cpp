#include<iostream>
#include<string>
#include<vector>
using namespace std;
void Nhap(string &t1, string &t2, vector<int>&a, vector<int>&b){
	getline(cin, t1);
	getline(cin, t2);
	if (t1 == "-1"){
		a.push_back(-1);
	}
	else{
		for (int i = 0; i<t1.length(); i++){
			if (t1[i] <= '9'&&t1[i] >= '0'){
				a.push_back((int)t1[i] - 48);
			}
		}
	}
	for (int i = 0; i<t2.length(); i++){
		if (t2[i] <= '9'&&t2[i] >= '0'){
			b.push_back((int)t2[i] - 48);
		}
	}
}
void Xoaphantu(vector<int>&a, vector<int>& b){
	if (a.size() == 1){

		if (a[0] == -1){

			b.clear();
		}
		else{
			b.erase(b.begin() + a[0]);
		}
	}
	else{
		for (int i = a[0]; i<a[1]; i++){
			b.erase(b.begin() + i);
			i--;
			a[1] -= 1;
		}
	}
}
int main(){
	string t1, t2;
	vector<int>a, b;
	Nhap(t1, t2, a, b);
	Xoaphantu(a, b);

	if (b.empty()){
		cout << "empty" << endl;
	}
	else{
		for (int i = 0; i<b.size(); i++){
			cout << b[i] << " ";
		}
		cout << endl;
	}
	return 0;
}