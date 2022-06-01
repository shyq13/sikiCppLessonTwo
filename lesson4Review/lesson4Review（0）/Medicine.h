#pragma once

#ifndef MEDICINE_H_
#define MEDICINE_H_

#include <iostream>
#include <string>
using namespace std;

enum Type {
	PlusHp,
	PlusMp
};

struct Medicine {
	string name;
	Type type;
	int quantity;
	float callPrice;
	float sellPrice;
};

const float ratio = 0.75;

constexpr float sell_price(Medicine& d) { return d.callPrice * ratio; }
void buyMedicine(Medicine& d, float& money, int num);
void sellMedicine(Medicine& d, float& money, int num);
void printMedicine(const Medicine& d1, const Medicine& d2, const float& money);
string showType(const Medicine& d);

#endif