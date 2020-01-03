#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main(){
	vector<string> a;
	string t;
	while (cin >> t){
		a.push_back(t);
	}
	if (a.size() == 2){
		cout << "Ho: " << a[0] << endl;
		cout << "Ten: " << a[1] << endl;
	}
	else{
		cout << "Ho: " << a[0] << endl;
		cout << "Lot: ";
		for (int i = 1; i<a.size() - 1; i++){
			cout << a[i] << " ";
		}
		cout << endl;
		cout << "Ten: " << a[a.size() - 1] << endl;
	}
	return 0;
}