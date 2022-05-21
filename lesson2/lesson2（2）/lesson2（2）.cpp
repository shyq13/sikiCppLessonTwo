#include <iostream>
// 运行该项目时一定要将它设为启动项！！！
// 运行该项目时一定要将它设为启动项！！！
// 运行该项目时一定要将它设为启动项！！！
using namespace std;

int min(int a, int b, int c);
void welcome();

int globalVariable = 3;     // 在函数体外定义的变量被称为全局变量，可以再所有函数体内部使用
                            // 见welcome函数

int main(){
	// 局部对象
	// 什么是局部对象？
	// 形参和函数体内部定义的变量统称为局部变量，仅在函数的作用域内可见
	// 详见  行
	int res = min(18, 83, 98);
	cout << "18，83，98之间" << res << "最小" << endl;
	// 函数内使用了res，在main函数里再一次定义了一个res，但是他们不起冲突，为什么呢？
	// 因为res是局部变量，在函数内部定义的变量，只在该函数内起作用，其他地方就不起作用了
 // cout << a << endl;
	// 输出这句的时候会报错，但是下面已经定义过了，为什么呢？
	// 因为a，b，c是形参，并没有实际意义，在main函数内使用时会换为实参
	
	cout << '\n'
		<< "------------------------------------------------------------"
		<< endl << '\n';
	
	// 全局变量
	welcome();
	cout << "全局变量globalVariable的值是" << globalVariable << "（main函数体）" << endl;

	cout << '\n'
		<< "------------------------------------------------------------"
		<< endl << '\n';

	// 自动对象
	// 我们把只存在于块执行期间的对象称为自动对象。
	// 普通的局部变量对应的对象，是自动对象，在每次调用数时创建和销毁
	// 形参也是一种自动对象。函数开始时为形参申请存储空间
	// 因为形参定义在函数体作用域内，所以一旦函数终止，形参也就被销毁

	// 局部静态对象
	// 局部静态对象在程序的执行路径第一次经过对象定义语句时初始化，并且直到程序终止才被销毁，所以局部静态对
	// 象不是自动对象
	// 可以用static关键字来修饰局邹变量，从而获得局部静态对象
	// 见min函数体内
	
	res = min(1, 2, 3);
	res = min(1, 2, 3);
	res = min(1, 2, 3);
	// 多调用几次函数，使用局部静态变量
	
	
    return 0;
}

int min(int a, int b, int c) {    // 定义函数
	int res;
	static int count = 0;
 // int count = 0;
	// 如果像这样写，程序只会输出"min函数调用了1次"，因为函数调用完后，函数内定义的变量都会销毁
	res = a < b ? a : b;
	res = res < c ? res : c;
	count++;   // 记录函数调用了多少次
	cout << "min函数调用了" << count << "次" << endl;
	return res;
}

void welcome() {
	cout << "Hello world!" << endl;
	cout << "Hello C++!" << endl;
	cout << "全局变量globalVariable的值是" << globalVariable << "（welcome函数体）" << endl;
}