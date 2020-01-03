#include<iostream>
#include<vector>
using namespace std;
void Nhiphan(int n, vector<int>&a){
	if (n == 0){
		return;
	}
	a.push_back(n % 2);
	Nhiphan(n / 2, a);
}
int main(){
	int n;
	vector<int> a;
	cin >> n;
	Nhiphan(n, a);
	for (int i = a.size() - 1; i >= 0; i--){
		cout << a[i];
	}
	cout << endl;
	return 0;
}