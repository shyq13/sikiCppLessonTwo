#include <iostream>
//运行该项目时一定要将它设为启动项！！！
//运行该项时一定要将它设为启动项！！！
//运行该项目时一定要将它设为启动项！！！
using namespace std;

int main() {
	// C++第一季复习（3）
	// 1. 算数运算符
	int num1 = 33, num2 = 10;
	int sum = num1 + num2;
	int sub = num1 - num2;
	int mul = num1 * num2;
	float div = float(num1) / num2;
	// 使用运算符进行四则运算
	int com = num1 % num2;
	
	cout << "33 + 10 = " << sum << endl
		<< "33 - 10 = " << sub << endl
		<< "33 * 10 = " << mul << endl
		<< "33 / 10 = " << div << endl
		<< "33 % 10 = " << com << endl;
	
	cout << '\n'
		<< "----------------------------------------"
		<< endl << '\n';

	// 2. 关系运算符
	bool juege1 = num1 == num2, juege2 = num1 < num2,
		juege3 = num1 > num2;
	cout << "num1 == num2 = " << juege1 << endl
		<< "num1 < num2 = " << juege2 << endl
		<< "num1 > num2 = " << juege3 << endl;
	
	cout << '\n'
		<< "----------------------------------------"
		<< endl << '\n';
	
	// 3. 逻辑运算符
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

	// 4. 条件运算符
	double num7, num8;
	cout << "请输入第一个数字：";
	cin >> num7;
	cout << "请输入第二个数字：";
	cin >> num8;
	double max = num7 > num8 ? num7 : num8;
	double min = num7 < num8 ? num7 : num8;
	cout << num7 << "和" << num8 << "中较大的数是" << max << endl
		<< num7 << "和" << num8 << "中较小的数是" << min << endl;

	
	return 0;
}