#include "Cuboid.h"
using namespace std;

int main() {
	double length1, width1, height1;
	cout << "请输入第一个长方体的长：";
	cin >> length1;
	cout << "请输入第一个长方体的宽：";
	cin >> width1;
	cout << "请输入第一个长方体的高：";
	cin >> height1;

	cout << '\n'
		<< "------------------------------------------------------------"
		<< endl << '\n';

	double length2, width2, height2;
	cout << "请输入第二个长方体的长：";
	cin >> length2;
	cout << "请输入第二个长方体的宽：";
	cin >> width2;
	cout << "请输入第二个长方体的高：";
	cin >> height2;

	Cuboid cuboid1(length1, width1, height1);
	Cuboid cuboid2(length2, width2, height2);

	Cuboid cs[2]{};     // 定义对象数组
	cs[0] = Cuboid(length1, width1, height1);    // | 初始化对象数组
	cs[1] = Cuboid(length2, width2, height2);    // |

	cout << '\n'
		<< "------------------------------------------------------------"
		<< endl << '\n';

	cout << "第一个长方体的体积是" << cuboid1.volume() << endl;
	cout << "第二个长方体的体积是" << cuboid2.volume() << endl;

	cout << '\n'
		<< "------------------------------------------------------------"
		<< endl << '\n';

	int res = cs[0].compare(cs[1]);    // 由于已经定义了对象数组cs，

	if (res == 0) {
		cout << "第一个长方体的体积比第二个长方体的体积大" << endl;
	}
	else if (res == 1) {
		cout << "第一个长方体的体积比第二个长方体的体积小" << endl;
	}
	else {
		cout << "两个长方体的体积相等" << endl;
	}
}