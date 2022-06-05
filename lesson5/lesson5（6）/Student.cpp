#include "Student.h"
using namespace std;

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

void printScore(Student& s)
{
	cout << "���ĳɼ���" << s.chinese_ << endl;
	cout << "��ѧ�ɼ���" << s.math_ << endl;
	cout << "Ӣ��ɼ���" << s.english_ << endl;
}
