#include "Cuboid.h"
using namespace std;

int main() {
	double length1, width1, height1;
	cout << "�������һ��������ĳ���";
	cin >> length1;
	cout << "�������һ��������Ŀ�";
	cin >> width1;
	cout << "�������һ��������ĸߣ�";
	cin >> height1;

	cout << '\n'
		<< "------------------------------------------------------------"
		<< endl << '\n';

	double length2, width2, height2;
	cout << "������ڶ���������ĳ���";
	cin >> length2;
	cout << "������ڶ���������Ŀ�";
	cin >> width2;
	cout << "������ڶ���������ĸߣ�";
	cin >> height2;

	Cuboid cuboid1(length1, width1, height1);
	Cuboid cuboid2(length2, width2, height2);

	Cuboid cs[2]{};     // �����������
	cs[0] = Cuboid(length1, width1, height1);    // | ��ʼ����������
	cs[1] = Cuboid(length2, width2, height2);    // |

	cout << '\n'
		<< "------------------------------------------------------------"
		<< endl << '\n';

	cout << "��һ��������������" << cuboid1.volume() << endl;
	cout << "�ڶ���������������" << cuboid2.volume() << endl;

	cout << '\n'
		<< "------------------------------------------------------------"
		<< endl << '\n';

	int res = cs[0].compare(cs[1]);    // �����Ѿ������˶�������cs��

	if (res == 0) {
		cout << "��һ�������������ȵڶ���������������" << endl;
	}
	else if (res == 1) {
		cout << "��һ�������������ȵڶ�������������С" << endl;
	}
	else {
		cout << "�����������������" << endl;
	}
}