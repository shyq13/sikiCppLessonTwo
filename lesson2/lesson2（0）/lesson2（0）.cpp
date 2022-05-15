#include <iostream>
// 运行该项目时一定要将它设为启动项！！！
// 运行该项目时一定要将它设为启动项！！！
// 运行该项目时一定要将它设为启动项！！！
using namespace std;

int main(){
	// 函数 —— 函数的定义
	// 什么是函数？
	// 函数是一段代码的集合，可以被调用的一段代码
	// 每个程序都至少有一个函数（主函数main()）
	// 如果想使用函数，必须完成以下几个步骤：
	// 1. 提供函数定义
	// 2. 提供函数原型
	// 3. 调用函数
	// 具体内容请看22行

	
	return 0;
}

// 函数如何定义？
// 结构如下：
// returnType（返回类型） functionName（函数名）(parameterList（参数列表）){
//     functionBody（函数体）
// }
// 例：
void/* 无返回值类型 */ welcome/* 函数名 */(/* 当前函数没有形参 */) {
	cout << "Hello world!";
	cout << "Hello C++!";
	/* 函数体 */
	// 由于当前函数是void类型，所以不需要return
	// 这是一个无返回值、无参数的函数
}

int sum(int a, int b) {
	int ans = a + b;
	return ans;
	// 这是一个有返回值、有参数的函数
}