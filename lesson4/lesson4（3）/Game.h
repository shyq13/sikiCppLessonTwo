#pragma once

#ifndef GAME_H_    // 一般使用 文件名_H_ 的形式进行定义
#define GAME_H_
// 以下就是写C++代码的地方了

#include <string>
using namespace std;

struct Game {
	string gameName;
	float score;
};

void inputGame(Game games[], const int size);
void sort(Game games[], const int size);
void display(const Game games[], const int size);

const int Size = 5;

#endif // 用于判断一个宏是否已被定义
