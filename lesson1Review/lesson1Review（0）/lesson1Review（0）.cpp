#include <iostream>
#include <string>
// 运行该项目时一定要将它设为启动项！！！
// 运行该项目时一定要将它设为启动项！！！
// 运行该项目时一定要将它设为启动项！！！
using namespace std;

struct GameData {
	string name;
	double score;
};

int main(){
	// 任务：让用户输入5个游戏的数据，并根据游戏评分高低进行排序，如果评分相等
	// 则按录入顺序进行排序。最后，将数据按从高到低（评分）的顺序输出
	// 输出格式： 游戏排名：游戏名称（评分）
	const int size = 5;
	GameData gameData[size] = {};
	cout << "请输入5个你喜欢的游戏的名称及评分（0-10之间的小数）" << endl;
	for (int i = 0; i < 5; i++) {
		cout << "请输入第" << i + 1 << "个游戏的名称：";
		cin >> gameData[i].name;
		cout << "请输入第" << i + 1 << "个游戏的评分：";
		cin >> gameData[i].score;
		cout << '\n'
			<< "---------------------------------------------"
			<< endl << '\n';
	}
	int max = 0;
	string maxName= "";
	for (int i = 0; i < size - 1; i++) {
		for (int j = i + 1; j < size; j++) {
			if (gameData[i].score < gameData[j].score) {
				max = gameData[i].score;
				gameData[i].score = gameData[j].score;
				gameData[j].score = max;
				max = 0;
				maxName = gameData[i].name;
				gameData[i].name = gameData[j].name;
				gameData[j].name = maxName;
				maxName = "";
			}
		}
	}
	for (int i = 0; i < size; i++) {
		cout << "第" << i + 1 << "名" << " " << gameData[i].name 
			<< "(" << gameData[i].score << "分)" << endl;
	}

	
    return 0;
}