#include<iostream>
#include<vector>
using namespace std;
char k[] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F' };
void Chuyendoi(int n, vector<char>&a){
	while (n>0){
		a.push_back(k[n % 16]);
		n /= 16;
	}
}
int main(){
	int n;
	cin >> n;
	vector<char>a;
	Chuyendoi(n, a);
	for (int i = a.size() - 1; i >= 0; i--){
		cout << a[i];
	}
	cout << endl;
	return 0;
}