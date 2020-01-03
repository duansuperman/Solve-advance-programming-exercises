#include<iostream>
#include<string>
using namespace std;
int main(){
	string t = "abc ghk";
	//t.erase(t.begin() + 3);
	size_t k = t.find("a");
	if (k != string::npos){
		cout << k << endl;
	}
	cout << t << endl;
	cout << t.length() << endl;
	system("pause");
	return 0;
}