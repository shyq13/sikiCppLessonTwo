#include <iostream>
#include "Game.h"
using namespace std;

int main() {
	cout << "接下来，请输入5个你喜爱的游戏的名称，并给它们评分" << endl;
	Game games[Size] = {};
	inputGame(games, Size);
	sort(games, Size);
	display(games, Size);

	
	return 0;
}