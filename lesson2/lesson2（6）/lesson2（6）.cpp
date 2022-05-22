#include <iostream>
// 运行该项目时一定要将它设为启动项！！！
// 运行该项目时一定要将它设为启动项！！！
// 运行该项目时一定要将它设为启动项！！！
using namespace std;

int cube1(int num);
int cube2(const int num);
int pCube1(int* p);
int pCube2(const int* p);
int pCube3(int* const p);

int main(){
	// const形参和实参（二）

	// 先定义一个cube函数，用于求某数立方
	// 如：
	int num1 = 5;
	const int num2 = 6;
	cout << "5的立方是（修改成0）" << cube1(num1) << endl
		<< "6的立方是（修改成0）" << cube1(num2) << endl;
	// 由于形参是变量，所以输出结果都是0（变量可以被修改）

	cout << '\n'
		<< "---------------------------------------------------------------"
		<< endl << '\n';

	cout << "5的立方是（不可修改）" << cube2(num1) << endl
		<< "6的立方是（不可修改）" << cube2(num2) << endl;
	// 这回输出正确，因为cube2的形参是常量，不能给常量重新赋值

	cout << '\n'
		<< "---------------------------------------------------------------"
		<< endl << '\n';

	cout << "5的立方是（指针）" << pCube1(&num1) << endl;
 // cout << "6的立方是（指针）" << pCube1(&num2) << endl;
	// 以上注释代码会报错，因为num2是常量，无法与int类型的指针相兼容

	cout << '\n'
		<< "---------------------------------------------------------------"
		<< endl << '\n';
	
	cout << "5的立方是（顶层常量指针）" << pCube2(&num1) << endl;
	cout << "6的立方是（顶层常量指针）" << pCube2(&num2) << endl;
	// 这回输出正确，因为这次定义了一个顶层const指针，变量和常量都可以使用

	cout << '\n'
		<< "---------------------------------------------------------------"
		<< endl << '\n';

	cout << "5的立方是（底层常量指针）" << pCube3(&num1) << endl;
 // cout << "6的立方是（常量指针）" << pCube3(&num2) << endl;
	// 以上注释代码会报错，因为num2是常量，无法与底层const的指针相兼容
	
	
    return 0;
}

int cube1(int num) {
	num = 0;
	return num * num * num;
	
}

int cube2(const int num) {
 // num = 0;    报错
	return num * num * num;
	
	// 由于num是一个常量，所以不能修改num的值
}

int pCube1(int* p) {
	static int count = 0;
	return (*p) * (*p) * (*p);
	// 使用指针进行立方计算
	// 由于我们定义了int类型的指针，所以常量使用不了这个函数
	// 所以实参只能为int类型的《变量》
}

int pCube2(const int* p/* 顶层const */) {
	return (*p) * (*p) * (*p);
}

int pCube3(int* const p/* 底层const */) {
	return (*p) * (*p) * (*p);
}