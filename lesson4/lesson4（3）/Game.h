#pragma once

#ifndef GAME_H_    // һ��ʹ�� �ļ���_H_ ����ʽ���ж���
#define GAME_H_
// ���¾���дC++����ĵط���

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

#endif // �����ж�һ�����Ƿ��ѱ�����
