#include <iostream>
#include <string>
// 运行该项目时一定要将它设为启动项！！！
// 运行该项目时一定要将它设为启动项！！！
// 运行该项目时一定要将它设为启动项！！！
using namespace std;

void swap(int& a, int& b);
int max(int a, int b);
int& sum(int num1, int num2, int& ans);

int main(){
	// 返回类型
	// 返回类型的类别：
	// 1. 无返回值函数：没有返回值的return语句只能用在返回类型是void的函数中
	// 2. 有返回值函数：return语句的第二种形式提供了函数的结果
	// 只要函数的返回类型不是void, 则该函数内的每条return语句必须返回一个值
	// 见swap和max函数

	int num1 = 78;
	int num2 = 83;
	swap(num1, num2);
	cout << "使用swap语句后，num1是" << num1 << "，num2是" << num2 << endl;

	cout << '\n'
		<< "---------------------------------------------------------------\n\n";

	int maxNum = max(num1, num2);
	cout << num1 << "和" << num2 << "中" << maxNum << "最大" << endl;

	cout << '\n'
		<< "---------------------------------------------------------------\n\n";

	int res = sum(num1, num2, res);   // 由于函数也是引用类型，所以也需要定义一个变量接收
	cout << "num1和num2的和是" << res << endl;

	sum(num1, num2, res)++;    // 由于sum是引用类型，所以也可以进行自增运算
	cout << "num1 + num2 + 1 = " << res << endl;

	
    return 0;
}

void swap(int &a, int &b) {// 由于函数类型是void，所以不能用int类型的变量，只能用引用类型
	// 函数的作用：
	// 判断a和b的大小，如果a > b，则保持原来的值；如果a < b，则交换a和b的值
	if (a >= b) {
		return;      // 在void语句里，不返回任何值，所以可以直接写"return"
	}                // 也可以选择不写return语句
	else {
		int temp = a;
		a = b;
		b = temp;
		return;      // 同上
	}
	// 无返回值的函数，可以使用retrun;
}

int max(int a, int b) {// 由于max函数是int类型，所以可以直接使用int类型的变量
	if (a > b) {
		return a;  // 由于max函数是int类型，所以可以有返回值，这时候就可以返回任意值了
	}
	else {
		return b;
	}
	// 有返回值的函数，每个return语句必须带有结果
}

int& sum(int num1, int num2, int& ans) {    // 函数也有引用类型
	ans = num1 + num2;
	return ans;
}