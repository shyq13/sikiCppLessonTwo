#include <iostream>
// 运行该项目时一定要将它设为启动项！！！
// 运行该项目时一定要将它设为启动项！！！
// 运行该项目时一定要将它设为启动项！！！
using namespace std;

int rCube1(int& r);
int rCube2(const int& r);

int main(){
	// const形参与实参（三）

	// 先定义Cube函数
	int num1 = 10;
	const int num2 = 15;
	cout << "num1的立方（int变量） = " << rCube1(num1) << endl;
 // cout << "num2的立方（int变量） = " << rCube)(num2) << endl;
	// 由于形参是变量，所以不能使用num2常量

	cout << '\n'
		<< "---------------------------------------------------------------\n\n";

	cout << "num1的立方（常量） = " << rCube2(num1) << endl;
	cout << "num2的立方（常量） = " << rCube2(num2) << endl;
	// 由于形参是常量，所以都可以使用

	
    return 0;
}

int rCube1(int &r) {
	// r = r * r * r;
	// 由于r是引用参数，所以如上也可以
	// 但是这并不是我们想要的方法，所以注释以上内容
	return r * r * r;
	// 只能使用变量
}

int rCube2(const int& r) {
 // r = r * r * r;
	// 由于r是常量，所以不能修改它的值
	return r * r * r;
	// 可以使用变量或常量
}