#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
int Sochan(int n){
	return n % 2 == 0;
}
int Kytu(char t){
	return t < 'b';
}
int main(){
	vector<int> a = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	vector<int>::iterator it;
	it = a.begin();
	cout << *it << endl;
	it = find(a.begin(), a.end(), 9);
	if (it != a.end()){
		cout << "1" << endl;
	}
	it = find_if(a.begin(), a.end(), Sochan);
	if (it != a.end()){
		cout << *it << endl;
		cout << "1" << endl;
	}
	it = remove(a.begin(), a.end(), 9);
	for (vector<int>::iterator i = a.begin(); i != it; i++){
		cout << *i << " ";
	}
	cout << endl;
	vector<int>::iterator rm;
	rm = remove_if(a.begin(), a.end(), Sochan);
	for (vector<int>::iterator i = a.begin(); i != rm; i++){
		cout << *i << " ";
	}
	cout << endl;
	cout << a.size() << endl;

	string::iterator str;
	string t = "abc ghk";
	str = find(t.begin(), t.end(), 'a');
	if (str != t.end()){
		cout << *str << endl;
	}

	str = find_if(t.begin(), t.end(), Kytu);
	if (str != t.end()){
		cout << *str << endl;
	}
	vector<int>::iterator kt;
	
	cout << a.size() << endl;
	for (vector<int>::iterator i = a.begin(); i!=rm; i++){
		cout << *i << " ";
	}
	cout << endl;
	replace(t.begin(), t.end(), 'a', 'c');
	cout << t << endl;
	system("pause");
	return 0;
}