#include "Student.h"
using namespace std;

Student::Student(string name, int chinese, int math, int english) {
	// ���캯������Ҫд�Ϸ������ͣ���Ϊ���캯���������һ���޷���ֵ����
	name_ = name;
	chinese_ = chinese;
	math_ = math;
	english_ = english;
	// ����Student�����������setStudent���������Դ������ֱ�Ӹ���
}

Student::Student() {   // ����Ĭ�Ϲ��캯��
	// �����β��б�û���κβ��������Բ���Ҫ�κδ���
}

Student::~Student()
{
	// ��������������ʵ���б�û���κβ���������Ҳ�������
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
