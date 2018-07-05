#pragma once
#include "NhanVien.h"
#include "Officer.h"
#include "Producer.h"
#include "Management.h"
#include <vector>
class Company
{
public:
	Company();
	~Company();
	void input();
	void output();

private:
	vector<Officer> officer;
	vector<Producer> producer;
	vector<Management> manager;
};

