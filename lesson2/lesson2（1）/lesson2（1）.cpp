#include <iostream>
// 运行该项目时一定要将它设为启动项！！！
// 运行该项目时一定要将它设为启动项！！！
// 运行该项目时一定要将它设为启动项！！！
using namespace std;


// 函数的声明
// 函数原型描述了函数到编译器的接口，它将函数的信息告诉了编译器
// 函数的名字也必须在使用之前声明
// 函数声明的结构：
// returnType（返回类型） functionName（函数名）(parameterList（参数列表）);
// 例：
void welcome();
int sum(int a, int b);


int main(){
    // 函数 —— 函数的声明（原型）和调用
	// 见8行

	// 函数的调用
	// 1.用实参初始化函数对应的形参
	// 2.将控制权转移给被调函数。此时，主调函数的执行被暂时中断，被调函数开始执行
	// 函数调用的格式：
	// functionName（函数名）(parameterList（参数）【如没有则不加】);
	// 例：
	welcome();
	// 输出：Hello world!   Hello C++!

	cout << '\n'
		<< "----------------------------------------"
		<< '\n';
	
	int num3, num4;
	cout << "请输入第一个整数：";
	cin >> num3;
	cout << "请输入第二个整数：";
	cin >> num4;
	// 或者：
	int res = sum(num3, num4/* 此处为实参（实际参数） */);  // sum是带参函数，所以需要写上参数
	// 由于sum是有返回值的，运行sum是会把ans返回给res
	cout << num3 << " + " << num4 << " = " << res << endl;

    
    return 0;
}

void welcome() {
	cout << "Hello world!" << endl;
	cout << "Hello C++!" << endl;
}

int sum(int a, int b/* 此处为形参（形式参数） */) {
	int ans = a + b;
	return ans;
}

