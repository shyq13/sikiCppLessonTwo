#include <iostream>
// 运行该项目时一定要将它设为启动项！！！
// 运行该项目时一定要将它设为启动项！！！
// 运行该项目时一定要将它设为启动项！！！
using namespace std;

void fill_arr(int arr[], int n);
void ratio(int arr[], int n, int sum);
void print_arr(int arr[], int n);
int sum_arr(const int arr[], int n);

int main() {
	// 函数与数组（2）
	
	// 1. 填充与修改数组
	// 由于接收数组名参数的函数访问的是原始数组（使用指针访问），而不是其副本，
	// 因此可以通过调用该函数将值赋给数组元素，或是修改数组元索的值
	
	// 见fill_arr、ratio和print_arr函数

	const int num = 6;
	int fraction2[num]{};
	fill_arr(fraction2, num);    // 使用函数进行填充
	
	cout << '\n'
		<< "---------------------------------------------------------------\n\n";
	
	print_arr(fraction2, num);   // 访问数组
	
	cout << '\n'
		<< "---------------------------------------------------------------\n\n";
	
	ratio(fraction2, num, sum_arr(fraction2,num));  // 修改数组元素
	for (int i = 0; i < num; i++) {
		if (i == 0) {
			cout << "该学生的语文成绩占总分的" << fraction2[0] << "%" << endl;
		}
		else if (i == 1) {
			cout << "该学生的数学成绩占总分的" << fraction2[1] << "%" << endl;
		}												  
		else if (i == 2) {								  
			cout << "该学生的英语成绩占总分的" << fraction2[2] << "%" << endl;
		}												  
		else if (i == 3) {								  
			cout << "该学生的物理成绩占总分的" << fraction2[3] << "%" << endl;
		}												  
		else if (i == 4) {								  
			cout << "该学生的化学成绩占总分的" << fraction2[4] << "%" << endl;
		}												  
		else if (i == 5) {								  
			cout << "该学生的生物成绩占总分的" << fraction2[5] << "%" << endl;
		}
	}

	
    return 0;
}

void fill_arr(int arr[], int n) {
	int temp;
	cout << "请输入该学生的语文成绩：";
	cin >> temp;
	arr[0] = temp;
	cout << "请输入该学生的数学成绩：";
	cin >> temp;
	arr[1] = temp;
	cout << "请输入该学生的英语成绩：";
	cin >> temp;
	arr[2] = temp;
	cout << "请输入该学生的物理成绩：";
	cin >> temp;
	arr[3] = temp;
	cout << "请输入该学生的化学成绩：";
	cin >> temp;
	arr[4] = temp;
	cout << "请输入该学生的生物成绩：";
	cin >> temp;
	arr[5] = temp;
	// 运行该程序后，实参数组就会修改为该学生的各科成绩
}

void ratio(int arr[], int n, int sum) {
	for (int i = 0; i < n; i++) {
		arr[i] = arr[i] * 100 / sum ;
	}
	// 运行该函数后，实参数组会变成该学生各科成绩与总分的占比
}

void print_arr(int arr[], int n) {
	for (int i = 0; i < n; i++) {
		if (i == 0) {
			cout << "该学生的语文成绩是" << arr[0] << "分" << endl;
		}
		else if (i == 1) {
			cout << "该学生的数学成绩是" << arr[1] << "分" << endl;
		}
		else if (i == 2) {
			cout << "该学生的英语成绩是" << arr[2] << "分" << endl;
		}
		else if (i == 3) {
			cout << "该学生的物理成绩是" << arr[3] << "分" << endl;
		}
		else if (i == 4) {
			cout << "该学生的化学成绩是" << arr[4] << "分" << endl;
		}
		else if (i == 5) {
			cout << "该学生的生物成绩是" << arr[5] << "分" << endl;
		}
	}
	// 运行该函数后，将会输出该学生的各科成绩
}

int sum_arr(const int arr[], int n) {
	int sum = 0;
	for (int i = 0; i < n; i++) {
		sum += arr[i];
	}
	return sum;
}