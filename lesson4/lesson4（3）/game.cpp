#include <iostream>
#include "Game.h"
using namespace std;

void inputGame(Game games[], const int size) {
	for (int i = 0; i < size; i++) {
		cout << "��������ϲ������Ϸ�����ƣ�";
		cin >> games[i].gameName;
		cout << "������" << games[i].gameName << "�����֣�10���ڵ�С������";
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
		cout << "��" << i + 1 << "��" << "��" << games[i].gameName
			<< "(" << games[i].score << "��)" << endl;
	}
}

// ����������ϣ��������뵽index�ļ��鿴ʣ�µĴ���