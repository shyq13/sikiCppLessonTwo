#pragma once

#ifndef STUDENT_H_
#define STUDENT_H_

#include <iostream>
#include <string>
using namespace std;

const int passScore = 60;

class Student {
private:
	string name_;
	int chinese_;
	int math_;
	int english_;
public:
	Student(string name, int chinese, int math, int english);// 声明构造函数
	Student();   // 声明默认构造函数
	~Student();  // 声明析构函数
	void setStudent(string name, int chinese, int math, int english);
	int sum(const Student& s);
	float avery(const Student& s);
	bool pass(const Student& s);
};

#endif