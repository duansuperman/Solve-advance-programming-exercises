#include <iostream>
#include <vector>
#include <algorithm>

#define MAX 502
using namespace std;

long long dp[MAX][MAX] = { 0 };

int main(){
	int N;
	cin >> N;
	dp[1][1] = 1;
	for (int i = 2; i <= N; i++){
		for (int j = 1; j <= i; j++){
			dp[i][j] = dp[i - 1][j - 1] + dp[i - j][j - 1];
		}
	}
	long long ans = 0;
	for (int i = 0; i != N; i++) ans += dp[N][i];
	cout << ans << endl;
	return 0;
}