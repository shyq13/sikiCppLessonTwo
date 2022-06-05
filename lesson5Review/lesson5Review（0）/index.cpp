#include "Medicine.h"
using namespace std;

int main() {
	const int listSize = 2;
	float money = 1000;
	int input;
	int tempNum;
	Medicine med[listSize];
	med[0] = Medicine("��Ѫҩˮ", plusHp, 0, 150);
	med[1] = Medicine("��ħҩˮ", plusMp, 0, 100);

	cout << "1. �����Ѫҩˮ   2. �����ħҩˮ   3. ���ۻ�Ѫҩˮ   4. ���ۻ�ħҩˮ  "
		"5. ��ʾĿǰӵ�е�ҩˮ���Ǯ������   6. �˳�" << endl;
	cout << "�����������";

	while (cin >> input) {

		cout << '\n';
		
		switch (input) {
		case 1:
			cout << "������Ҫ�����������";
			cin >> tempNum;
			med[0].buyMedicine(money, tempNum);
			break;
		case 2:
			cout << "������Ҫ�����������";
			cin >> tempNum;
			med[1].buyMedicine(money, tempNum);
			break;
		case 3:
			cout << "������Ҫ���۵�������";
			cin >> tempNum;
			med[0].sellMedicine(money, tempNum);
			break;
		case 4:
			cout << "������Ҫ���۵�������";
			cin >> tempNum;
			med[1].sellMedicine(money, tempNum);
			break;
		case 5:
			cout << "����ҩƷ��Ϣ���£�" << endl;

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
		
		cout << "�����������";
	}
	
	cout << "�����˳�����" << endl;


	return 0;
}