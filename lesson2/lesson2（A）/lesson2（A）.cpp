#include <iostream>
// 运行该项目时一定要将它设为启动项！！！
// 运行该项目时一定要将它设为启动项！！！
// 运行该项目时一定要将它设为启动项！！！
using namespace std;

long long fact(int n);

int main() {
	// 递归函数
	// 什么是递归函数
	// 直接或间接调用自己的函数称为递归函数
	// 递归函数的要求：递归函数必须定义一个终止条件，否则，函数将永远递归下去
	// 见fact函数

	int num;
	cout << "请输入一个整数（不要超过44，否则程序可能崩溃）：";
	cin >> num;
	cout << num << "！（阶乘）为：" << fact(num) << endl;

	
	return 0;
}

long long fact(int n) {      // 由于后面的数会比较大，所以我们使用long long类型
	long long temp;    // 定义一个临时变量
	if (n == 0) {    // 这个就是停止条件，当n == 0时，就停止递归
		temp = 1;
	}
	else {
		temp = n * fact(n - 1);
	}
	return temp;
}
