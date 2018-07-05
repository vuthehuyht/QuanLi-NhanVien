#include "stdafx.h"
#include "Officer.h"

void Officer::enterInformation() {
	NhanVien::enterInformation();
	cout << "Nhap so ngay lam viec: ";
	cin >> workingDay;
	cout << "Nhap tro cap: ";
	cin >> subsidize;
}

void Officer::output() {
	NhanVien::output();
	cout << "So ngay lam viec: " << workingDay << endl;
	cout << "Tro cap: " << subsidize << endl;
	cout << "Luong:" << tinhLuong() << endl;
}
int Officer::tinhLuong() {
	salary = simpleSalary + workingDay * 100000 + subsidize;
	return salary;
}
Officer::Officer()
{
}


Officer::~Officer()
{

}
