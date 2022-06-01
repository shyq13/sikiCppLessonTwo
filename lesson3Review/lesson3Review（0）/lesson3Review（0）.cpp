#include <iostream>
// 运行该项目时一定要将它设为启动项！！！
// 运行该项目时一定要将它设为启动项！！！
// 运行该项目时一定要将它设为启动项！！！
using namespace std;

void inputScore(int arr[], int n, int& times);
void printScore(int score[], int times);
float countAverage(int score[], float times);

int main() {
	// 任务：设计分数显示
	// 要求如下：
	// 1.要求用户输入最多10个射击分数，并将他们存储在一个数组中
	// 2.输入负数提前完成输入
	// 3.使用3个数组处理函数分别进行输入、显示和计算平均分数的操作
	// 4.显示所有分数和平均分数

	const size_t size = 10;
	int score[size]{};
	int times = 0;
	inputScore(score, size, times);   // 接收用户的分数

	cout << '\n'
		<< "---------------------------------------------------------------\n\n";

	cout << "你的所有射击分数如下显示：" << endl;
	printScore(score, times);

	cout << '\n'
		<< "---------------------------------------------------------------\n\n";

	float average = countAverage(score, float(times));
	cout << "你的平均分数是：" << average << endl;
	
	
    return 0;
}

void inputScore(int arr[], int n,int& times) {
	for (int i = 0; i < n; i++) {
		cout << "请输入第" << i + 1 << "次的射击分数（还能输入" 
			<< 10 - i << "次，输入负数提前结束输入）：";
		int temp;
		cin >> temp;
		
		if(temp < 0) {
			break;
		}
		else {
			arr[i] = temp;
			times++;
		}
		// 接收用户输入的射击分数
	}
}

void printScore(int score[], int times) {
	for(int i = 0; i < times; i++) {
		cout << "第" << i + 1 << "次射击分数为：" << score[i] << endl;
	}
	// 用于输出列表中的所有元素
}

float countAverage(int score[], float times) {
	float sum = 0;
	for (int i = 0; i < times; i++) {
		sum += score[i];
	}
	return sum / times;
	// 用于计算平均数
}