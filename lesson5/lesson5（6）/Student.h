#pragma once

#ifndef STUDENT_H_
#define STUDENT_H_

#include <iostream>
#include <string>
using namespace std;

class Student {
	friend void printScore(Student& s);  // 声明Student类的友元函数printScore
	// 但是printScore函数并不是这个类的函数成员
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