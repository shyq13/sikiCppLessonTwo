#include <iostream>
#include <string>
// 运行该项目时一定要将它设为启动项！！！
// 运行该项目时一定要将它设为启动项！！！
// 运行该项目时一定要将它设为启动项！！！
using namespace std;

void fillGames(string name[], int size);
void printGames(const string name[], int size);

int main() {
	// 函数与字符串
	
	// 见fillGames、printGames函数

	const int size = 5;
	string gameNames[size]{};
	fillGames(gameNames, size);
	
	cout << '\n'
		<< "---------------------------------------------------------------\n\n";

	printGames(gameNames, size);

	
    return 0;
}

void fillGames(string name[], int size) {
	for (int i = 0; i < size; i++) {
		cout << "请输入第" << i + 1 << "个游戏名称：";
		getline(cin, name[i]);
	}
}

void printGames(const string name[], int size) {
	for (int i = 0; i < size; i++) {
		cout << "第" << i + 1 << "个游戏是：" << name[i] << endl;
	}
}