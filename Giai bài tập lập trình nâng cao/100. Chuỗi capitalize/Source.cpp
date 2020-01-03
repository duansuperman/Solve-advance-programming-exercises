#include<iostream>
using namespace std;
void Chuyendoi(string& t){

	if (t[0] <= 'z'&&t[0] >= 'a'){
		t[0] = t[0] - 32;
	}
	for (int i = 1; i<t.length(); i++){
		if (t[i] == ' '){
			if (t[i + 1] <= 'z'&&t[i + 1] >= 'a'){
				t[i + 1] = t[i + 1] - 32;

			}
			i++;
		}
		else{
			if (t[i] <= 'Z'&&t[i] >= 'A'){
				t[i] += 32;
			}
		}
	}
}
int main(){
	string t;
	getline(cin, t);
	Chuyendoi(t);
	cout << t << endl;
	return 0;
}