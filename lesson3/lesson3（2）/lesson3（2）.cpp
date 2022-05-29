#include <iostream>
#include <string>
// 运行该项目时一定要将它设为启动项！！！
// 运行该项目时一定要将它设为启动项！！！
// 运行该项目时一定要将它设为启动项！！！
using namespace std;

void print(const char* cp);
void print(const int* beg, const int* end);
void print(const int ia[], size_t size);


int main() {
	// 函数重载

	// 什么是重载函数？
	// 如果同一作用域内的几个函数名字相同但形参列表不同，我们称之为重载函数，如下：
	// void print(const char* cp);
	// void print(const int* beg, const int* end);
	// void print(const int ia[], size_t/*相当于unsigned*/ size);
	// 虽然这些函数都叫print，但是他们的形参列表不同，所以他们是重载函数
	// 这些函数接受的形参类型不一样，但是执行的操作非常类似
	// 当调用这些数时，编译器会根据传递的实参类型推断想要的是哪个函数

	// 见print函数

	char a = 'j';
	print(&a);
	// 由于实参使用的方式字符类型的指针，所以会使用第一个函数

	cout << '\n'
		<< "---------------------------------------------------------------\n\n";

	const size_t size = 5;
	int d[size] = { 4, 45, 78, 5, 51 };
	print(&d[0], &d[size - 1]);
	// 实参使用两个整型变量的指针，所以会使用第二个函数

	cout << '\n'
		<< "---------------------------------------------------------------\n\n";

	print(d, size);
	// 实参使用一个常量整型列表和一个无符号整型，所以会调用第三个函数

	// 以上三个print函数就是重载函数，编译器会根据我们给它的实参来判断要运行哪个函数

 // print("Hello world");
	// 由于我们没定义过这个函数（没找到对应的形参列表），所以编译器会报错：
	// 没有与参数列表相匹配的重载函数XXX实例

	
	return 0;
}

void print(const char* cp) {
	cout << "a变量的值是" << *cp << endl;
}

void print(const int* beg, const int* end) {
	int length = end - beg;
	for (int i = 0; i <= length; i++) {
		cout << "print（2）：第" << i + 1 << "个元素的值是" << *(beg + i) << endl;
	}
} 
	
void print(const int ia[], size_t size) {
	for (int i = 0; i < size; i++) {
		cout << "print（3）：第" << i + 1 << "个元素的值是" << ia[i] << endl;
	}
}