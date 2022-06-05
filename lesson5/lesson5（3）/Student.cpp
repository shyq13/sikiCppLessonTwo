#include "Student.h"
using namespace std;

Student::Student(string name, int chinese, int math, int english) {
	// 构造函数不需要写上返回类型，因为构造函数本身就是一个无返回值函数
	name_ = name;
	chinese_ = chinese;
	math_ = math;
	english_ = english;
	// 由于Student函数构造的是setStudent函数，所以代码可以直接复制
}

Student::Student() {   // 定义默认构造函数
	// 由于形参列表没有任何参数，所以不需要任何代码
}

Student::~Student()
{
	// 由于析构函数的实参列表没有任何参数，所以也无需代码
}

void Student::setStudent(string name, int chinese, int math, int english) {
	name_ = name;
	chinese_ = chinese;
	math_ = math;
	english_ = english;
}

int Student::sum(const Student& s)
{
	return (s.chinese_ + s.math_ + s.english_);
}

float Student::avery(const Student& s)
{
	return ((float(s.chinese_) + float(s.math_) + float(s.english_)) / 3);
}

bool Student::pass(const Student& s) {
	if (s.chinese_ >= passScore && s.math_ >= passScore && s.english_ >= passScore) {
		return true;
	}
	else {
		return false;
	}
}
