#include <iostream>
#include "Medicine.h"

int main() {
	
	Medicine Plus_Mp{
		"回魔药水",
		PlusMp,
		10,
		150,
		112.5
	};
	Medicine Plus_Hp{
		"回血药水",
		PlusHp,
		20,
		100,
		75
	};	

	float totalMoney = 1000;
	int input;
	int num = 0;
	
	cout << "1. 购买回血药水   2. 购买回魔药水   3. 出售回血药水   4. 出售回魔药水  "
		"5. 显示目前拥有的药水与金钱的数量   6. 退出" << endl;
	cout << "请输入操作：";
	
	while (cin >> input && input <= 6 && input > 0) {
		if (input == 1) {
			cout << "请输入购买数量：";
			if (cin >> num && num > 0) {
				buyMedicine(Plus_Hp, totalMoney, num);
			}
			else {
				cout << "输入的内容不正确，请再次输入！" << endl;
				cout << "请输入操作：";
			}
		}
		else if (input == 2) {
			cout << "请输入购买数量：";
			if (cin >> num && num > 0) {
				buyMedicine(Plus_Mp, totalMoney, num);
			}
			else {
				cout << "输入的内容不正确，请再次输入！" << endl;
				cout << "请输入操作：";
			}
		}
		else if (input == 3) {
			cout << "请输入出售数量：";
			if (cin >> num && num > 0) {
				sellMedicine(Plus_Hp, totalMoney, num);
			}
			else {
				cout << "输入的内容不正确，请再次输入！" << endl;
				cout << "请输入操作：";
			}
		}
		else if (input == 4) {
			cout << "请输入出售数量：";
			if (cin >> num && num > 0) {
				sellMedicine(Plus_Mp, totalMoney, num);
			}
			else {
				cout << "输入的内容不正确，请再次输入！" << endl;
				cout << "请输入操作：";
			}
		}
		else if (input == 5) {
			printMedicine(Plus_Hp, Plus_Mp, totalMoney);
		}
		else if (input == 6) {
			break;
		}
	}

	cout << "已退出程序！" << endl;

	
	return 0;
}