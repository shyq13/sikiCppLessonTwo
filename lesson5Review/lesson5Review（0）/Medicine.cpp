#include "Medicine.h"

Medicine::Medicine()
{
}

Medicine::Medicine(string name, Type type, int quantity, float callPrice)
{
	name_ = name;
	type_ = type;
	quantity_ = quantity;
	callPrice_ = callPrice;
	sellPrice_ = callPrice * ratio;
}

void Medicine::buyMedicine(float& money, int quantity)
{
	if (quantity > 0) {
		if (callPrice_ * quantity <= money) {
			money -= quantity * callPrice_;
			quantity_ += quantity;
			cout << "购买成功！" << endl;
		}
		else {
			cout << "余额不足，购买失败！" << endl;
		}
	}
	else {
		cout << "输入错误，购买失败！" << endl;
	}
}

void Medicine::sellMedicine(float& money, int quantity)
{
	if (quantity > 0) {
		if (quantity_ >= quantity) {
			money += quantity * sellPrice_;
			quantity_ -= quantity;
			cout << "出售成功！" << endl;
		}
		else {
			cout << "存货不足，出售失败！" << endl;
		}
	}
	else {
		cout << "输入错误，出售失败！" << endl;
	}
}

void Medicine::printMedicine()
{
	cout << "药物名称：" << name_ << endl
		<< "存货数量：" << quantity_ << endl;
	if (type_ == 0) {
		cout << "药品种类：PlusHp" << endl;
	}
	else if (type_ == 1) {
		cout << "药品种类：PlusMp" << endl;
	}
	cout << "买入价格：" << callPrice_ << endl
		<< "出售价格：" << sellPrice_ << endl;
}
