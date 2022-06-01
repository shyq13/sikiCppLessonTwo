#include <iostream>
// 运行该项目时一定要将它设为启动项！！！
// 运行该项目时一定要将它设为启动项！！！
// 运行该项目时一定要将它设为启动项！！！
using namespace std;

int sum_arr(const int arr[], int n);

int main() {
	// 函数与列表（1）

	// 1. 数组作为参数
	// 定义方式：返回类型 函数名(int arr[], 参数列表) { 函数体 }
	// ①. arr是数组名，但arr实际上并不是数组，而是一个指针，指向数组的第一个元素
	// 但是在编写函数的其余部分时，可以将arr看作是数组
	// ②.当且仅当用于函数头或函数原型中，int* arr和int arr[]的含义才是相同的
	// 它们都意味着arr是一个int指针
	// 然而，数组表示法提醒用户，arr不仅指向int数组, 还指向int数组的第一个元素
	
	// 见sum_arr函数

	const int num = 6;
	int fraction1[num] = { 120,100,99,50,70,69 };
	int totalScore = sum_arr(fraction1, num);
	cout << "第一名学生的总分是" << totalScore << "分" << endl;

	
    return 0;
}

       // 形参数组如下定义↓↓↓      此处*arr和arr[]的意义其实一致（可以相互替换）
int sum_arr(const int arr[], int n) {
	int sum = 0;
	for (int i = 0; i < n; i++) {
		sum += arr[i];
	}
	return sum;
}