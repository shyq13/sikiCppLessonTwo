#include <iostream>
#include "Medicine.h"

int main() {
	
	Medicine Plus_Mp{
		"��ħҩˮ",
		PlusMp,
		10,
		150,
		112.5
	};
	Medicine Plus_Hp{
		"��Ѫҩˮ",
		PlusHp,
		20,
		100,
		75
	};	

	float totalMoney = 1000;
	int input;
	int num = 0;
	
	cout << "1. �����Ѫҩˮ   2. �����ħҩˮ   3. ���ۻ�Ѫҩˮ   4. ���ۻ�ħҩˮ  "
		"5. ��ʾĿǰӵ�е�ҩˮ���Ǯ������   6. �˳�" << endl;
	cout << "�����������";
	
	while (cin >> input && input <= 6 && input > 0) {
		if (input == 1) {
			cout << "�����빺��������";
			if (cin >> num && num > 0) {
				buyMedicine(Plus_Hp, totalMoney, num);
			}
			else {
				cout << "��������ݲ���ȷ�����ٴ����룡" << endl;
				cout << "�����������";
			}
		}
		else if (input == 2) {
			cout << "�����빺��������";
			if (cin >> num && num > 0) {
				buyMedicine(Plus_Mp, totalMoney, num);
			}
			else {
				cout << "��������ݲ���ȷ�����ٴ����룡" << endl;
				cout << "�����������";
			}
		}
		else if (input == 3) {
			cout << "���������������";
			if (cin >> num && num > 0) {
				sellMedicine(Plus_Hp, totalMoney, num);
			}
			else {
				cout << "��������ݲ���ȷ�����ٴ����룡" << endl;
				cout << "�����������";
			}
		}
		else if (input == 4) {
			cout << "���������������";
			if (cin >> num && num > 0) {
				sellMedicine(Plus_Mp, totalMoney, num);
			}
			else {
				cout << "��������ݲ���ȷ�����ٴ����룡" << endl;
				cout << "�����������";
			}
		}
		else if (input == 5) {
			printMedicine(Plus_Hp, Plus_Mp, totalMoney);
		}
		else if (input == 6) {
			break;
		}
	}

	cout << "���˳�����" << endl;

	
	return 0;
}