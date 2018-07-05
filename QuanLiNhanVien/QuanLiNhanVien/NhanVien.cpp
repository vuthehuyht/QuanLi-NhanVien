#include "stdafx.h"
#include "NhanVien.h"
#include <string>

void NhanVien::enterInformation() {
	fflush(stdin);
	cout << "Nhap ho ten: ";
	getline(cin, name);
	fflush(stdin);
	cout << "Nhap ngay sinh: ";
	getline(cin, birth);
	
}
void NhanVien::output() {
	cout << "Ho ten: " << name << "." << endl;
	cout << "Ngay sinh: " << birth << "." << endl;
	cout << "Luong co ban: " << simpleSalary << "." << endl;
}

NhanVien::NhanVien()
{
	simpleSalary = 200000;
}


NhanVien::~NhanVien()
{
}
