#pragma once
#include "NhanVien.h"
#include <iostream>
using namespace std;
class Officer:public NhanVien
{
public:
	Officer();
	~Officer();

	void enterInformation();
	void output();
	int tinhLuong();
private:
	int workingDay;
	int subsidize;
};

