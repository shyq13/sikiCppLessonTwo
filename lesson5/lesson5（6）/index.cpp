#include "Student.h"
using namespace std;

int main() {
	Student stu1;
	Student stu2;

	string name1 = "Sam";
	int chinese1 = 96;
	int math1 = 99;
	int english1 = 97;

	string name2 = "Tom";
	int chinese2 = 54;
	int math2 = 75;
	int english2 = 63;

	stu1.setStudent(name1, chinese1, math1, english1);
	int sum1 = stu1.sum(stu1);
	float avery1 = stu1.avery(stu1);
	bool pass1 = stu1.pass(stu1);

	stu2.setStudent(name2, chinese2, math2, english2);
	int sum2 = stu2.sum(stu2);
	float avery2 = stu2.avery(stu2);
	bool pass2 = stu2.pass(stu2);

	cout << "学生" << name1 << "的各项结果如下：" << endl;
	printScore(stu1);
	cout << "总成绩：" << sum1 << endl                  
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

	cout << "学生" << name2 << "的各项结果如下：" << endl;
	printScore(stu2);
	cout << "总成绩：" << sum2 << endl
		<< "平均成绩：" << avery2 << endl;

	if (pass2) {
		cout << "该学生考试及格" << endl;
	}
	else {
		cout << "该学生考试不及格" << endl;
	}


	return 0;
}