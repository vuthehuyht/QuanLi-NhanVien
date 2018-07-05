#pragma once
#include <string>
#include <iostream>
using namespace std;
class NhanVien
{
public:
	NhanVien();
	~NhanVien();

	void enterInformation();
	void output();
protected:
	string name;
	string birth;
	int simpleSalary;
	int salary;
};

