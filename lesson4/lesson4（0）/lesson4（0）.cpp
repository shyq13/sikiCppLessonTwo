#include <iostream>
// 运行该项目时一定要将它设为启动项！！！
// 运行该项目时一定要将它设为启动项！！！
// 运行该项目时一定要将它设为启动项！！！
using namespace std;

struct WorkTime {
	int hours;
	int minutes;
};

const int intoTheRate = 60;    // 定义工作时间（时和分之间）的进率

WorkTime sumTime(WorkTime am, WorkTime pm);

int main() {
	// 函数与结构体
	// 见sumTime函数

	WorkTime am = {
		4,
		56
	};
	WorkTime pm = {
		5,
		6
	};
	WorkTime totalTime = sumTime(am, pm);    // 调用函数，算取总时长
	cout << "你每天共工作" << totalTime.hours << "小时" << totalTime.minutes << "分" << endl;

	
	return 0;
}

WorkTime sumTime(WorkTime am,WorkTime pm) {
	WorkTime totalTime;
	totalTime.minutes = (am.minutes + pm.minutes) % intoTheRate;
	totalTime.hours = (am.hours + pm.hours) + ((am.minutes + pm.minutes) / intoTheRate);
	return totalTime;
}