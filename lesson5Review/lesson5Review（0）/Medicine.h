#pragma once

#ifndef MEDICINE_H_
#define MEDICINE_H_

#include <iostream>
#include <string>
using namespace std;

enum Type {
	plusHp,
	plusMp
};

class Medicine {
private:
	string name_;
	Type type_;
	int quantity_;
	float callPrice_;
	float sellPrice_;
	static constexpr float ratio = 0.75;
public:
	Medicine();
	Medicine(string name, Type type, int quantity, float callPrice);
	void buyMedicine(float& money, int quantity);
	void sellMedicine(float& money, int quantity);
	void printMedicine();
};

#endif