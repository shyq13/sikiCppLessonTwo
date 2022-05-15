#include <iostream>
#include <string>
// 运行该项目时一定要将它设为启动项！！！
// 运行该项目时一定要将它设为启动项！！！
// 运行该项目时一定要将它设为启动项！！！
using namespace std;

enum Gender {           // 定义了枚举类型Gender
	Male,
	Female = 2        // 可以自定义枚举类型对应的值
};

struct Student {       // 定义了结构体Student
	string name;
	Gender gender;
	int age;
	int studentID;
	float height;
	float weight;
	long long cellPhoneNum;
	long long IDNum;
	int score;
};

int main() {
	// C++第一季复习（2）
	
	// 1. 数组
	// 数组的定义
	int a[]{ 1,2,3,4,5,6,7,8,9,10 };   // 定义一个整型数组
	string b[]{ "a","b","Hello","world","!" };  // 定义一个字符串数组
	float c[5]{ 1,2,3,4 };  // 如果我们没有定义完所有的值，int数组会把没有定义
	                        // 的部分自动定义为0
	
	// 数组的访问
	cout << "数组a的第一个元素是" << a[0] << endl;
	// 输出数组a的第一个元素
	cout << "数组b的第二个元素是" << b[1] << endl;
	// 输出数组b的第二个元素
	cout << "数组c是 { " << c[0] << "," << c[1] << "," << c[2] << ","
		<< c[3] << "," << c[4] << " }" << endl;

	cout << '\n'
		<< "----------------------------------------------"
		<< endl << '\n';

	// 2. 结构体 & 枚举类型
	// 结构体的定义（详见13 - 23行）
	// 枚举类型的定义（详见8 - 11行）
	// 结构体 & 枚举类型的使用
	Student student1{
		"张三",
		Male,    // 结构体内也可以使用枚举类型
		11,
		22,
		1.55,
		30.9,
		12345678901,
		123456789012345678,
		95
	};
	// 定义了student1的基本参数
	// 结构体数据的访问
	cout << "第一个学生的名字是" << student1.name   // 输出student1的name
		<< endl
		<< "第一个学生的性别是（0是男性，2是女性）" << student1.gender
		<< endl
		<< "第一个学生的年龄是" << student1.age << "岁"
		<< endl
		<< "第一个学生的学号是" << student1.studentID
		<< endl
		<< "第一个学生的身高是" << student1.height << "米"
		<< endl
		<< "第一个学生的体重是" << student1.weight << "公斤"
		<< endl
		<< "第一个学生的手机号是" << student1.cellPhoneNum
		<< endl
		<< "第一个学生的身份证号是" << student1.IDNum
		<< endl
		<< "第一个学生的成绩是" << student1.score << "分"
		<< endl;

	cout << '\n'
		<< "----------------------------------------------"
		<< endl << '\n';

	// 3. 指针
	// 指针的定义
	int d = 10;
	int* p = &d;  // 定义了一个指向整型变量d的指针
	// 指针的访问
	cout << "变量d所在的内存地址是" << p << endl;
	cout << "变量d的值是" << *p << endl;

	
	return 0;
}