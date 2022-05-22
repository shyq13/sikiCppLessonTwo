#include <iostream>
// 运行该项目时一定要将它设为启动项！！！
// 运行该项目时一定要将它设为启动项！！！
// 运行该项目时一定要将它设为启动项！！！
using namespace std;

int main() {
	// const形参与实参（一）
	// 项层const:表示任意的对象是常量。
	// 底层const:与指针和引用等复合类型有关
	// 对指针而言，项层const表示指针本身是个常量，
	// 而底层const表示指针所指的对象是一个常量
	// 如：
	int i = 20;   // 定义一个变量
	const int j = 30; // 定义一个常量
	const int ci = 20;   // 这是顶层const，不能修改ci的值
	const int* pi = &ci;   // 这是底层const，允许修改pi的值，但不允许通过*pi修改ci的值
	// 底层const既可以使用int也可以使用const int来初始化数据
	int* const p2 = &i;    // 这是顶层const，不允许修改p2的值，但是允许通过*p2修改i的值
	// 顶层const只能使用int初始化数据，而不能使用const int
	// 由于j是一个常量，所以不能把他的地址赋值给指针，如下：
 // int* p3 = &j;
	// 以上代码会报错

	
    return 0;
}