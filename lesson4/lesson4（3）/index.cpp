#include <iostream>
#include "Game.h"
using namespace std;

int main() {
	cout << "��������������5����ϲ������Ϸ�����ƣ�������������" << endl;
	Game games[Size] = {};
	inputGame(games, Size);
	sort(games, Size);
	display(games, Size);

	
	return 0;
}