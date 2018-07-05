#pragma once
#include "NhanVien.h"
class Producer:public NhanVien
{
public:
	Producer();
	~Producer();

	void enterInformation();
	void output();
	int tinhLuong();

protected:
	int product;
	int luong;
};

