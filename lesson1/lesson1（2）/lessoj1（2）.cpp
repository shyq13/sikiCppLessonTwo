#include <iostream>
//���и���Ŀʱһ��Ҫ������Ϊ���������
//���и���ʱһ��Ҫ������Ϊ���������
//���и���Ŀʱһ��Ҫ������Ϊ���������
using namespace std;

int main() {
	// C++��һ����ϰ��3��
	// 1. ���������
	int num1 = 33, num2 = 10;
	int sum = num1 + num2;
	int sub = num1 - num2;
	int mul = num1 * num2;
	float div = float(num1) / num2;
	// ʹ�������������������
	int com = num1 % num2;
	
	cout << "33 + 10 = " << sum << endl
		<< "33 - 10 = " << sub << endl
		<< "33 * 10 = " << mul << endl
		<< "33 / 10 = " << div << endl
		<< "33 % 10 = " << com << endl;
	
	cout << '\n'
		<< "----------------------------------------"
		<< endl << '\n';

	// 2. ��ϵ�����
	bool juege1 = num1 == num2, juege2 = num1 < num2,
		juege3 = num1 > num2;
	cout << "num1 == num2 = " << juege1 << endl
		<< "num1 < num2 = " << juege2 << endl
		<< "num1 > num2 = " << juege3 << endl;
	
	cout << '\n'
		<< "----------------------------------------"
		<< endl << '\n';
	
	// 3. �߼������
	int num3 = 53, num4 = 45, num5 = 53, num6 = 98;
	bool juege4 = ((num4 == num6) && (num3 == num5)),
		juege5 = ((num4 > num6) || (num3 >= num4)),
		juege6 = !(num5 == num4);
	cout << "((num4 == num6) && (num3 == num5)) = " << juege4 << endl
		<< "((num4 > num6) || (num3 >= num4)) = " << juege5 << endl
		<< "!(num5 == num4) = " << juege6 << endl;

	cout << '\n'
		<< "----------------------------------------"
		<< endl << '\n';

	// 4. ���������
	double num7, num8;
	cout << "�������һ�����֣�";
	cin >> num7;
	cout << "������ڶ������֣�";
	cin >> num8;
	double max = num7 > num8 ? num7 : num8;
	double min = num7 < num8 ? num7 : num8;
	cout << num7 << "��" << num8 << "�нϴ������" << max << endl
		<< num7 << "��" << num8 << "�н�С������" << min << endl;

	
	return 0;
}