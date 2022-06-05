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
			cout << "����ɹ���" << endl;
		}
		else {
			cout << "���㣬����ʧ�ܣ�" << endl;
		}
	}
	else {
		cout << "������󣬹���ʧ�ܣ�" << endl;
	}
}

void Medicine::sellMedicine(float& money, int quantity)
{
	if (quantity > 0) {
		if (quantity_ >= quantity) {
			money += quantity * sellPrice_;
			quantity_ -= quantity;
			cout << "���۳ɹ���" << endl;
		}
		else {
			cout << "������㣬����ʧ�ܣ�" << endl;
		}
	}
	else {
		cout << "������󣬳���ʧ�ܣ�" << endl;
	}
}

void Medicine::printMedicine()
{
	cout << "ҩ�����ƣ�" << name_ << endl
		<< "���������" << quantity_ << endl;
	if (type_ == 0) {
		cout << "ҩƷ���ࣺPlusHp" << endl;
	}
	else if (type_ == 1) {
		cout << "ҩƷ���ࣺPlusMp" << endl;
	}
	cout << "����۸�" << callPrice_ << endl
		<< "���ۼ۸�" << sellPrice_ << endl;
}
