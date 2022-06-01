#pragma once

#ifndef STUDENT_H_
#define STUDENT_H_

#include <iostream>
#include <string>
using namespace std;

class/* class关键字 */ Student/* 类名 */ {
private:/* 私有成员 */
	string name_;
	int chinese_;
	int math_;
	int english_;
	/* 数据成员定义 */
public:/* 公有接口 */
	void setStudent(string name, int chinese, int math, int english);
	int sum(const Student& s);
	int avery(const Student& s);
	bool pass(const Student& s);
};

#endif