#include<iostream>
#include<string>
using namespace std;
struct SinhVien
{
	int mssv = 0;
	string hoten="abc";
	double diem=0;
	SinhVien(){
		mssv = 1;
		hoten = "bcd";
		diem = 1;
	}
	SinhVien(int a,string t, int b){
		mssv = a;
		hoten = t;
		diem = b;
	}
	SinhVien(const SinhVien&a){
		mssv = a.mssv;
		hoten = a.hoten;
		diem = a.diem;
	}
	void Nhap(){
		cin >> mssv;
		cin.ignore();
		getline(cin, hoten);
		cin >> diem;
	}
	void Xuat(){
		cout << "Thong tin sinh vien : " << endl;
		cout << mssv << endl;
		cout << hoten << endl; 
		cout << diem << endl;
	}
	SinhVien operator+(SinhVien a){
		SinhVien tong;
		tong.mssv = mssv + a.mssv;
		tong.diem = diem + a.diem;
		tong.hoten = hoten +" "+ a.hoten;
		return tong;
	}

	~SinhVien(){

	}
};
void Nhap(SinhVien &a){
	cin >> a.mssv;
	cin.ignore();
	getline(cin, a.hoten);
	cin >> a.diem;
}
void Xuat(SinhVien a){
	cout << "Thong tin sinh vien : " << endl;
	cout << a.mssv << endl;
	cout << a.hoten << endl;
	cout << a.diem << endl;
}
istream& operator>>(istream&is,SinhVien &a){
	is >> a.mssv;
	cin.ignore();
	getline(is, a.hoten);
	is >> a.diem;
	return is;
}
ostream& operator<<(ostream&os,SinhVien a){
	os << a.mssv << endl;
	os << a.hoten << endl;
	os << a.diem << endl;
	return os;
}
int main(){
	SinhVien a;
	cin >> a;
	SinhVien b(a);
	cout << a;
	cout << b;
	
	system("pause");
	return 0;
}