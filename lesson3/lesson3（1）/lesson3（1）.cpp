#include <iostream>
// 运行该项目时一定要将它设为启动项！！！
// 运行该项目时一定要将它设为启动项！！！
// 运行该项目时一定要将它设为启动项！！！
using namespace std;

constexpr long long fact(int x);

int main() {
	// constexpr（常量表达式）函数
	// 
	// constexpr函数的用处
	// constexpr函数是指能用于 常量表达式① 的函数，即可以在编译时计算其返回值的函数
	// ①常量表达式：常量表达式是指值不会变并且在编译过程就能得到计算结果的表达式

	// 注意事项：
	// 1. 函数中只能有一个return语句
	// 2. 返回值必须是字面值类型（算术类型、引用、指针属于字面值类型)
	// 3. 参数必须是字面值类型（自定义类、IO库、string类型不属于字面值类型)
	// 4. constexpr数被隐式地指定为内联函数。
	// 5. 允许递归
	
	// 见fact函数

	constexpr int x = 5;   // 由于fact函数是常量表达式函数，所以既可以命名一个常量，也可以命名一个变量
	cout << "x的阶乘是" << fact(x) << endl;
	// 由于实参是常量，所以结果在编译期间计算
	int y = 7;
	cout << "y的阶乘是" << fact(y) << endl;
	// 由于实参是变量，所以结果在运行期间计算

	
    return 0;
}

constexpr long long fact(int x) {
	return x == 1 ? 1 : x * fact(x - 1);
}