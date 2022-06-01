#include <iostream>
#include <string>
// 运行该项目时一定要将它设为启动项！！！
// 运行该项目时一定要将它设为启动项！！！
// 运行该项目时一定要将它设为启动项！！！
using namespace std;

bool lengthCompare(const string& s1, const string& s2);

int main() {
	// 函数指针
	
	// 什么是函数指针？
	// 与数据项类似，函数也有地址。函数的地址是存储其机器语言代码内存的开始地址
	// 可以将地址作为函数的参数，从而使第一个函数能够找到第二个函数，并运行它
	// 函数指针指向的是函数而非对象。
	// 想要声明一个可以指向函数的指针，只需要用指针替换数名即可
	// bool lengthCompare(const string& s1,const string& s2);    函数
	// bool(*pf)(const string&, const string&);                 函数指针
	// 注意：*pf两边的括号不能少，否则会被认为是一个指针，而非函数指针
	
	// 见lengthCompare和*pf（函数指针）函数

	string s1 = "Hello world";
	string s2 = "Hello world!";
	bool juege1 = lengthCompare(s1, s2);
	cout << "函数调用：s1的长度大于s2的值是" << juege1 << endl;
	
	bool(*pf)(const string&, const string&);// 定义函数指针时，只需要形参列表，而不需要形参名
	pf = lengthCompare;// 这样，就完成了函数指针的定义，以后就可以使用指针进行函数调用了
	// 函数指针调用方式如下：
	
	bool juege2 = pf(s1, s2);
	cout << "函数指针：s1的长度大于s2的值是" << juege2 << endl;

	
    return 0;
}

bool lengthCompare(const string& s1, const string& s2) {
	return size(s1) > size(s2);
}