#include "stdafx.h"
#include "Producer.h"

int Producer::tinhLuong() {
	luong = simpleSalary + product * 2000;
	return luong;
}

void Producer::enterInformation() {
	NhanVien::enterInformation();
	cout << "Nhap so san pham: ";
	cin >> product;
}
void Producer::output() {
	NhanVien::output();
	cout << "So san pham: " << product << endl;
	cout << "Luong: " << tinhLuong() << endl;
}


Producer::Producer()
{
}


Producer::~Producer()
{
}
