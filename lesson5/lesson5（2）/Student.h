#pragma once

#ifndef STUDENT_H_
#define STUDENT_H_

#include <iostream>
#include <string>
using namespace std;

class/* class�ؼ��� */ Student/* ���� */ {
private:/* ˽�г�Ա */
	string name_;
	int chinese_;
	int math_;
	int english_;
	/* ���ݳ�Ա���� */
public:/* ���нӿ� */
	void setStudent(string name, int chinese, int math, int english);
	int sum(const Student& s);
	int avery(const Student& s);
	bool pass(const Student& s);
};

#endif