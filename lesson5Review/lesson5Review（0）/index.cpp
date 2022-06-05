#include "Medicine.h"
using namespace std;

int main() {
	const int listSize = 2;
	float money = 1000;
	int input;
	int tempNum;
	Medicine med[listSize];
	med[0] = Medicine("回血药水", plusHp, 0, 150);
	med[1] = Medicine("回魔药水", plusMp, 0, 100);

	cout << "1. 购买回血药水   2. 购买回魔药水   3. 出售回血药水   4. 出售回魔药水  "
		"5. 显示目前拥有的药水与金钱的数量   6. 退出" << endl;
	cout << "请输入操作：";

	while (cin >> input) {

		cout << '\n';
		
		switch (input) {
		case 1:
			cout << "请输入要购买的数量：";
			cin >> tempNum;
			med[0].buyMedicine(money, tempNum);
			break;
		case 2:
			cout << "请输入要购买的数量：";
			cin >> tempNum;
			med[1].buyMedicine(money, tempNum);
			break;
		case 3:
			cout << "请输入要出售的数量：";
			cin >> tempNum;
			med[0].sellMedicine(money, tempNum);
			break;
		case 4:
			cout << "请输入要出售的数量：";
			cin >> tempNum;
			med[1].sellMedicine(money, tempNum);
			break;
		case 5:
			cout << "各项药品信息如下：" << endl;

			cout << "1. ";
			med[0].printMedicine();

			cout << '\n'
				<< "-------------------------------------------------------------\n\n";

			cout << "2. ";
			med[1].printMedicine();
			break;
		default:
			break;
		}
		
		if (input == 6) {
			break;
		}

		cout << '\n'
			<< "-------------------------------------------------------------\n\n";
		
		cout << "请输入操作：";
	}
	
	cout << "你已退出程序" << endl;


	return 0;
}