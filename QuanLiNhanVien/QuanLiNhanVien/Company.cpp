#include "stdafx.h"
#include "Company.h"
void Company::input() {
	int choose;
	do {
		cout << "-------------MENU-------------"<< endl;
		cout << "1. Nhap nhan vien van phong" << endl;
		cout << "2. Nhap nhan vien san xuat" << endl;
		cout << "3. Nhap nhan vien quan li" << endl;
		cout << "4. Thoat" << endl;
		cin >> choose;
		while (choose < 0 || choose > 4){
			cout << "Nhap lai: ";
			cin >> choose;
		}
		if (choose == 1) {
			Officer o;
			o.enterInformation();
			officer.push_back(o);
		}
		else if (choose == 2) {
			Producer p;
			p.enterInformation();
			producer.push_back(p);
		}
		else if (choose == 3) {
			Management m;
			m.enterInformation();
			manager.push_back(m);
		}
	} while (choose != 4);
}

void Company::output() {
	cout << "\n Danh sach nhan vien quan li" << endl;
	for (int i = 0; i < manager.size(); i++)
		manager[i].output();
	cout << "\n Danh sach nhan vien van phong" << endl;
	for (int i = 0; i < officer.size(); i++)
		officer[i].output();
	cout << "\n Danh sach nhan vien san xuat" << endl;
	for (int i = 0; i < producer.size(); i++)
		producer[i].output();
}


Company::Company()
{
}


Company::~Company()
{
}
