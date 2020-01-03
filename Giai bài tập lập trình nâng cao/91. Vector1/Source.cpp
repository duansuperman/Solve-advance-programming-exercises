#include<iostream>
#include<vector>
using namespace std;
void Nhap(vector<int>&a){
	int k;
	while (cin >> k){
		a.push_back(k);
	}
}
int main(){
	vector<int> a;
	Nhap(a);
	vector<int>::iterator it = a.begin();
	while (it<a.end()){
		cout << *it << " ";
		it++;
	}
	cout << endl;
	vector<int>::iterator it1 = a.end() - 1;
	while (it1 >= a.begin()){
		cout << *it1 << " ";
		it1--;
	}
	cout << endl;
	return 0;
}