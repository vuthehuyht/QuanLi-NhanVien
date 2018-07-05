#pragma once
#include "NhanVien.h"
#include <iostream>
using namespace std;
class Management:public NhanVien
{
public:
	Management();
	~Management();

	void enterInformation();
	void output();
	int tinhLuong();
protected:
	double coefficient;
	int bonus;
	int luong;
};

