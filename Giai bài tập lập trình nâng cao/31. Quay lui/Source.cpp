#include<iostream>
using namespace std;
int a[100][100], ddi[100];
int danhdau[100];
int stt;
int s, t,n;
void Try(int i){
	if (i == t){
		for (int j = 0; j <= stt; j++){
			cout << ddi[j] << " ";
		}
		cout << endl;
	}
	else{
		for (int j = 1; j <= n; j++){
			if (a[i][j] == 1 && danhdau[j] == 0){
				danhdau[j] = 1;
				stt++;
				ddi[stt] = j;
				Try(j);
				ddi[stt] = 0;
				--stt;
				danhdau[j] = 0;
			}
		}
	}
}
int main(){
	return 0;
}