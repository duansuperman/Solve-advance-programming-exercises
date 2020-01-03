#include<iostream>
#include<string>
#include<vector>
using namespace std;

struct Date{
	int ngay, thang, nam;
	int Kiemtranamnhuan(){
		if ((nam % 4 == 0 && nam % 100 != 0) || nam % 400 == 0){
			return 1;
		}
		return 0;
	}
	int Ngaytrongnam(){
		int tong = 0;
		for (int i = 1; i < thang; i++){
			if (i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12){
				tong += 31;
			}
			else if (i == 2){
				if (Kiemtranamnhuan()){
					tong += 29;
				}
				else{
					tong += 28;
				}
			}
			else{
				tong += 30;
			}

		}

		tong += ngay;
		return tong;
	}
	string Thutrongtuan(){

		int month = thang;
		int year = nam;
		if (thang <= 2){
			month += 12;
			year -= 1;
		}
		int n = (ngay + 2 * month + (3 * (month + 1)) / 5 + year + (year / 4)) % 7;
		vector<string> a = { "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday" };
		return a[n];
	}
	Date Ngayketiep(){
		Date a = *this;
		if (thang == 1 || thang == 3 || thang == 5 || thang == 7 || thang == 8 || thang == 10 || thang == 12){
			if (ngay < 31){
				a.ngay += 1;
			}
			else{
				if (thang == 12){
					a.ngay = 1;
					a.thang = 1;
					a.nam += 1;
				}
				else{
					a.ngay = 1;
					a.thang += 1;
				}

			}
			return a;
		}
		else if (thang == 2){
			if (Kiemtranamnhuan()){
				if (ngay < 29){
					a.ngay += 1;
				}
				else{
					a.ngay = 1;
					a.thang += 1;
				}
			}
			else{
				if (ngay < 28){
					a.ngay += 1;
				}
				else{
					a.ngay = 1;
					a.thang += 1;
				}
			}
			return a;
		}
		else{
			if (ngay < 30){
				a.ngay += 1;
			}
			else{
				a.ngay = 1;
				a.thang += 1;
			}
			return a;
		}
	}
	int operator==(Date a){
		if (ngay == a.ngay&&thang == a.thang&&nam == a.nam){
			return 1;
		}
		return 0;
	}
	int Kiemtratrungthu(Date a){
		if (Thutrongtuan() == a.Thutrongtuan()){
			return 1;
		}
		return 0;
	}
	int operator<(Date a){
		if (nam < a.nam){
			return 1;
		}
		if (nam>a.nam){
			return 0;
		}
		if (thang < a.thang){
			return 1;
		}
		if (thang > a.thang){
			return 0;
		}
		if (ngay < a.ngay){
			return 1;
		}
		if (ngay > a.ngay){
			return 0;
		}
		return 0;
	}
	int operator-(Date a){
		int moc = 1000;
		int tong = 0;
		Date b = *this;
		for (int i = moc; i < nam; i++){
			b.nam = i;
			if (b.Kiemtranamnhuan()){
				tong += 366;
			}
			else{
				tong += 365;
			}
		}
		tong += Ngaytrongnam();
		int tong2 = 0;
		for (int i = moc; i < a.nam; i++){
			b.nam = i;
			if (b.Kiemtranamnhuan()){
				tong2 += 366;
			}
			else{
				tong2 += 365;
			}
		}
		tong2 += a.Ngaytrongnam();
		return abs(tong - tong2);
	}
};
istream& operator>>(istream & is, Date &a){
	is >> a.ngay >> a.thang >> a.nam;
	return is;
}
ostream& operator<<(ostream&os, Date a){

	if (a.ngay / 10 == 0){
		os << "0" << a.ngay << "/";
	}
	else{
		os << a.ngay << "/";
	}

	if (a.thang / 10 == 0){
		os << "0" << a.thang << "/";
	}
	else{
		os << a.thang << "/";
	}
	os << a.nam;

}

int main(){
	Date a, b;
	cin >> a;
	cin >> b;
	cout << a << " " << a.Thutrongtuan() << " " << a.Ngaytrongnam() << " " << a.Ngayketiep();
	if (a.Kiemtranamnhuan()){
		cout << " TRUE" << endl;
	}
	else{
		cout << " FALSE" << endl;
	}
	cout << b << " " << b.Thutrongtuan() << " " << b.Ngaytrongnam() << " " << b.Ngayketiep();
	if (b.Kiemtranamnhuan()){
		cout << " TRUE" << endl;
	}
	else{
		cout << " FALSE" << endl;
	}
	if (a.Kiemtratrungthu(b)){
		cout << "TRUE" << endl;
	}
	else{
		cout << "FALSE" << endl;
	}
	if (a < b){
		cout << "1 < 2" << endl;
	}
	else if (a == b){
		cout << "1 = 2" << endl;
	}
	else{
		cout << "1 > 2" << endl;
	}
	cout << a - b << endl;
	//system("pause");
	return 0;
}