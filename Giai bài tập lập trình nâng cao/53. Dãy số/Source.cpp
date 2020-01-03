#include<iostream>
using namespace std;
int Dayso(int n){
	if (n == 0){
		return 0;
	}
	else if (n == 1){
		return 1;
	}
	else{
		if (n % 2 == 0){
			return Dayso(n / 2);
		}
		else{
			return Dayso((n - 1) / 2) + Dayso((n - 1) / 2 + 1);
		}
	}
}
int main(){
	int n;
	cin >> n;
	int Max = 0;
	for (int i = 0; i <= n; i++){
		if (Max<Dayso(i)){
			Max = Dayso(i);
		}
	}
	cout << Max << endl;
	return 0;
}