#include <iostream>
#include <string>
#include <sstream>
// 运行该项目时一定要将它设为启动项！！！
// 运行该项目时一定要将它设为启动项！！！
// 运行该项目时一定要将它设为启动项！！！
using namespace std;

int main() {
	// C++第一季复习(1)

	// 1. 输出
	std::cout << "Hello World!" << std::endl;    // 没有引入命名空间域std的写法
	cout << "Hello C++!" << endl;   // 引入命名空间域std的写法

	cout << '\n';
	cout << "---------------------------------------------" << endl;
	cout << '\n';

	// 2. 变量
	int a;   // 定义一个int类型的变量a
	a = 10;  // 赋值
	cout << "a的值是" << a << endl << endl;  // 输出
	int b = 3;  // 也可以直接这样赋值
	cout << "b的值是" << b << endl << endl;
	// 以上为整型变量
	char c = 'a';
	cout << "c的值是" << c << endl << endl;
	// 以上为字符变量
	bool d = true;
	cout << "d的值是" << d << endl << endl;
	// 以上为布尔变量
	double e = 3.14;
	cout << "e的值是" << e << endl << endl;
	float f = 9.42;
	cout << "f的值是" << f << endl << endl;
	// 以上为浮点型变量
	string g = "Hello World!";
	cout << "g的值是" << g << endl << endl;
	// 以上为字符串变量

	cout << '\n';
	cout << "---------------------------------------------" << endl;
	cout << '\n';

	// 3. 输入
	int num;
	cout << "请输入一个整数：";
	cin >> num;
	cout << "您输入的数字是" << num << endl << endl;

	cout << '\n';

	string name, temp;
	getline(cin, temp);    // 上面的cin输入的回车会导致getline认为用户输入了回车，
	                       // 需要使用临时变量将回车接收下来，再让用户输入名字
	cout << "请输入你的名字：";
	getline(cin, name);   // 使用getline，防止用户输入有空格导致结果错误
	cout << "你的名字是" << name << endl;
	

	return 0;
}