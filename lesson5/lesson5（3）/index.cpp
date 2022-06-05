#include "Student.h"
using namespace std;

int main() {
	string name1 = "Bobby";
	int chinese1 = 51;
	int math1 = 79;
	int english1 = 61;

	string name2 = "Tina";
	int chinese2 = 91;
	int math2 = 88;
	int english2 = 74;
	
	Student stu1 = Student(name1, chinese1, math1, english1); // | 设置默认构造函数（显式）
	Student stu2(name2, chinese2, math2, english2);			  // | 设置默认构造函数（隐式）
	
	int sum1 = stu1.sum(stu1);
	float avery1 = stu1.avery(stu1);
	bool pass1 = stu1.pass(stu1);

	int sum2 = stu2.sum(stu2);
	float avery2 = stu2.avery(stu2);
	bool pass2 = stu2.pass(stu2);
	// 由于已经调用了构造函数，所以setStudent()函数可以不用再次调用

	cout << "学生" << name1 << "的各项结果如下：" << endl
		<< "总成绩：" << sum1 << endl
		<< "平均成绩：" << avery1 << endl;

	if (pass1) {
		cout << "该学生考试及格" << endl;
	}
	else {
		cout << "该学生考试不及格" << endl;
	}

	cout << '\n'
		<< "------------------------------------------------------------"
		<< endl << '\n';

	cout << "学生" << name2 << "的各项结果如下：" << endl
		<< "总成绩：" << sum2 << endl
		<< "平均成绩：" << avery2 << endl;

	if (pass2) {
		cout << "该学生考试及格" << endl;
	}
	else {
		cout << "该学生考试不及格" << endl;
	}

	// 析构函数无需特意调用，系统会自动调用


	return 0;
}