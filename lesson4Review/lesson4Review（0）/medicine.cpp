#include <iostream>
#include "Medicine.h"

void buyMedicine(Medicine& d, float& money, int num) {
	if (num <= d.callPrice * num) {
		money -= d.callPrice * num;
		d.quantity += num;
		cout << "购买成功！" << endl;
	}
	else {
		cout << "余额不足，购买失败！" << endl;
	}
	// 购买药物判断函数
}

void sellMedicine(Medicine& d, float money, int num) {
	if (d.quantity >= num) {
		d.quantity -= num;
		money += d.sellPrice * num;
		cout << "出售成功！" << endl;
	}
	else {
		cout << "库存不足，出售失败！" << endl;
	}
	// 售出药物判断函数
}

void printMedicine(const Medicine& d1, const Medicine& d2, const float money) {
	cout << "目前拥有的药物： " << endl;
	cout << "1. 名称：" << d1.name << " 库存数量：" << d1.quantity
		<< " 药物种类：" << showType(d1) << " 购买价格：" << d1.callPrice
		<< " 出售价格：" << d1.sellPrice << endl;
	cout << "2. 名称：" << d2.name << " 库存数量：" << d2.quantity
		<< " 药物种类：" << showType(d2) << " 购买价格：" << d2.callPrice
		<< " 出售价格：" << d2.sellPrice << endl;	
	cout << "目前余额：" << money << endl;
	cout << "显示完成！" << endl;
	// 显示药物信息函数
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
	// 判断药物种类函数
}