#include <iostream>
#include "Medicine.h"

void buyMedicine(Medicine& d, float& money, int num) {
	if (num <= d.callPrice * num) {
		money -= d.callPrice * num;
		d.quantity += num;
		cout << "����ɹ���" << endl;
	}
	else {
		cout << "���㣬����ʧ�ܣ�" << endl;
	}
	// ����ҩ���жϺ���
}

void sellMedicine(Medicine& d, float money, int num) {
	if (d.quantity >= num) {
		d.quantity -= num;
		money += d.sellPrice * num;
		cout << "���۳ɹ���" << endl;
	}
	else {
		cout << "��治�㣬����ʧ�ܣ�" << endl;
	}
	// �۳�ҩ���жϺ���
}

void printMedicine(const Medicine& d1, const Medicine& d2, const float money) {
	cout << "Ŀǰӵ�е�ҩ� " << endl;
	cout << "1. ���ƣ�" << d1.name << " ���������" << d1.quantity
		<< " ҩ�����ࣺ" << showType(d1) << " ����۸�" << d1.callPrice
		<< " ���ۼ۸�" << d1.sellPrice << endl;
	cout << "2. ���ƣ�" << d2.name << " ���������" << d2.quantity
		<< " ҩ�����ࣺ" << showType(d2) << " ����۸�" << d2.callPrice
		<< " ���ۼ۸�" << d2.sellPrice << endl;	
	cout << "Ŀǰ��" << money << endl;
	cout << "��ʾ��ɣ�" << endl;
	// ��ʾҩ����Ϣ����
}

string showType(const Medicine &d) {
	switch (d.type) {
	case 0:
		return "PlusHp";
		break;
	case 1:
		return "PlusMp";
		break;
	}
	// �ж�ҩ�����ຯ��
}