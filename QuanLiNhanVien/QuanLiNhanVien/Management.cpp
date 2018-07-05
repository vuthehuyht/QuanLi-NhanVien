#include "stdafx.h"
#include "Management.h"
int Management::tinhLuong() {
	 luong = simpleSalary * coefficient + bonus;
	return (int)luong;
}

void Management::output() {
	NhanVien::output();
	cout << "Luong: " << tinhLuong() << "." << endl;
}

void Management::enterInformation() {
	NhanVien::enterInformation();
	cout << "Nhap he so: ";
	cin >> coefficient;
	cout << "Nhap thuong: ";
	cin >> bonus;
}
Management::Management()
{
}


Management::~Management()
{
}
