#include <iostream>
#include <string>
// 运行该项目时一定要将它设为启动项！！！
// 运行该项目时一定要将它设为启动项！！！
// 运行该项目时一定要将它设为启动项！！！
using namespace std;

void compare(int num1, int num2 = 100);    // 默认值可以在函数原型的时候赋值
void greet(string name = "User");
// void compare(int num1 = 100, int num2);    // 这行代码会报错，因为默认值赋值只能从右往左赋值
// 意思就是从最右边的变量开始赋默认值，然后依次往左边

int main() {
	// 默认实参
	// 概念
	
	// 某些函数有这样一种形参，在函数的很多次调用中它们都被赋予一个相同的值，
	// 我们把这个反复出现的值称为函数的默认实参
	// 调用含有默认实参的函数时，可以包含该实参，也可以省略该实参
	// 对于有多个形参的函数，必须从右向左添加默认值

	// 使用如下：
	int num1 = 56;
	int num2 = 35;
	compare(num1);   // 由于compare函数有默认值了，所以我们可以只给它一个参数
	compare(num2);   // 与上同理
	compare(num1, num2);    // 同样，我们也可以给它两个参数，这样实参num2会覆盖掉形参num2

	// 字符串也可以使用：
	greet();   // 使用默认值
	greet("Jane");   // 覆盖默认值

	
    return 0;
}

void compare(int num1, int num2) {
	if (num1 > num2) {
		cout << num1 << " > " << num2 << endl;
	} else if (num1 < num2) {
		cout << num1 << " < " << num2 << endl;
	} else {
		cout << num1 << " = " << num2 << endl;
	}
}

void greet(string name) {
	cout << "Hello," << name << endl;
}