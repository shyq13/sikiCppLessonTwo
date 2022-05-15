#include <iostream>
//运行该项目时一定要将它设为启动项！！！
//运行该项目时一定要将它设为启动项！！！
//运行该项目时一定要将它设为启动项！！！
using namespace std;

int main() {
	// C++第一季复习（4）
	// 1. if语句
	int a = 10, b = 20;
	if (a > b) {
		cout << "a > b" << endl;
	}
	else if (a == b) {
		cout << "a == b" << endl;
	}
	else {
		cout << "a < b" << endl;
	}

	cout << '\n'
		<< "------------------------------------"
		<< endl << '\n';

	// 2. switch语句
	int vip;
	cout << "请输入您的会员等级：";
	cin >> vip;
	switch (vip) {
	case 1:
		cout << "您的会员等级是：普通会员" << endl;
		break;
	case 2:
		cout << "您的会员等级是：银卡会员" << endl;
		break;
	case 3:
		cout << "您的会员等级是：金卡会员" << endl;
		break;
	case 4:
		cout << "您的会员等级是：白金会员" << endl;
		break;
	case 5:
		cout << "您的会员等级是：铂金会员" << endl;
		break;
	case 6:
		cout << "您的会员等级是：钻石会员" << endl;
		break;
	default:
		break;
	}

	cout << '\n'
		<< "------------------------------------"
		<< endl << '\n';

	// 3. for循环
	// 普通for循环
	for (int i = 0; i < 10; i++) {
		cout << "现在i的值是" << i << endl;
	}
	cout << endl;

	// 遍历
	int arr[5] = { 1,2,3,4,5 };
	cout << "遍历数组arr： { ";
	for (int j = 0; j < 5; j++) {
		if (j <= 4)
			cout << arr[j] << ",";
		else
			cout << arr[j] << " ";
	}
	cout << "}" << endl << endl;

	// 也可以这样遍历
	cout << "第二种方式遍历数组arr： { ";
	for (int k : arr) {
		if (k <= 4)
			cout << k << ",";
		else
			cout << k << " ";
	}
	cout << "}" << endl << endl;
	
	cout << '\n'
		<< "------------------------------------"
		<< endl << '\n';
	
	// 4. while循环
	int num1 = 30, num2 = 15;
	while (num1 > num2) {
		cout << "Hello world!" << endl;
		num1--;
	}

	cout << '\n'
		<< "------------------------------------"
		<< endl << '\n';

	// 5. do while循环
	int num3 = 30, num4 = 15;
	do{
		cout << "Hello C++!" << endl;
		num3--;
	} while (num3 > num4);
	
	
    return 0;
}