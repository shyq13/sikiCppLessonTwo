#pragma once

#ifndef STUDENT_H_
#define STUDENT_H_

#include <iostream>
#include <string>
using namespace std;

class Student {
	friend void printScore(Student& s);  // ����Student�����Ԫ����printScore
	// ����printScore���������������ĺ�����Ա
private:
	string name_;
	int chinese_;
	int math_;
	int english_;
	static const int passScore = 60;
public:
	void setStudent(string name, int chinese, int math, int english);
	int sum(const Student& s);
	float avery(const Student& s);
	bool pass(const Student& s);
};

#endif