#include <iostream>
// 运行该项目时一定要将它设为启动项！！！
// 运行该项目时一定要将它设为启动项！！！
// 运行该项目时一定要将它设为启动项！！！
using namespace std;

float harmonicMean(float x, float y);

int main() {
	// 第二课习题（1）
	// 要求：
	// 1.不断要求用户输入2个数，直到其中一个数的值为0
	// 2.对于每两个数，程序将使用一个函数来计算它门的调和平均数
	//		tips: 调和平均数是指倒数平均值的倒数
	//			例：
	//				现有xy两数，要求他们的调和平均数，求法如下：
	//				1/[ ( 1/x + 1/y ) ÷ 2 ] == 2xy÷(x+y)
	// 3.函数将计算结果返回给主函数，在主函数中输出输入的数字和它们的调和平均数
	// 见harmonicMean函数

	float x, y;
	while (true) {
		cout << "请输入一个整数：";
		cin >> x;
		cout << "请输入另一个整数（输入0终止程序）：";
		cin >> y;
		if (x == 0 || y == 0) {
			break;
		}
		cout << x << "和" << y << "的调和平均数是" << harmonicMean(x, y) << endl;

		cout << '\n'
			<< "-----------------------------------------------------------------\n\n";
	}
	
		
    return 0;
}

float harmonicMean(float x, float y) {
	return 2 * x * y / (x + y);
}