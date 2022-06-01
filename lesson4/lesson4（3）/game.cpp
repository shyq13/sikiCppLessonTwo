#include <iostream>
#include "Game.h"
using namespace std;

void inputGame(Game games[], const int size) {
	for (int i = 0; i < size; i++) {
		cout << "请输入你喜爱的游戏的名称：";
		cin >> games[i].gameName;
		cout << "请输入" << games[i].gameName << "的评分（10以内的小数）：";
		cin >> games[i].score;
	}
}
void sort(Game games[], const int size) {
	Game temp;
	for (int i = 0; i < size - 1; i++) {
		for (int j = i + 1; j < size; j++) {
			if(games[i].score < games[j].score) {
				temp = games[i];
				games[i] = games[j];
				games[j] = temp;
			}
		}
	}
}
void display(const Game games[], const int size) {
	for(int i = 0; i < size; i++) {
		cout << "第" << i + 1 << "名" << "：" << games[i].gameName
			<< "(" << games[i].score << "分)" << endl;
	}
}

// 函数定义完毕，接下来请到index文件查看剩下的代码