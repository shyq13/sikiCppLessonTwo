#include <iostream>
#include <string>
#include <sstream>
// ���и���Ŀʱһ��Ҫ������Ϊ���������
// ���и���Ŀʱһ��Ҫ������Ϊ���������
// ���и���Ŀʱһ��Ҫ������Ϊ���������
using namespace std;

int main() {
	// C++��һ����ϰ(1)

	// 1. ���
	std::cout << "Hello World!" << std::endl;    // û�����������ռ���std��д��
	cout << "Hello C++!" << endl;   // ���������ռ���std��д��

	cout << '\n';
	cout << "---------------------------------------------" << endl;
	cout << '\n';

	// 2. ����
	int a;   // ����һ��int���͵ı���a
	a = 10;  // ��ֵ
	cout << "a��ֵ��" << a << endl << endl;  // ���
	int b = 3;  // Ҳ����ֱ��������ֵ
	cout << "b��ֵ��" << b << endl << endl;
	// ����Ϊ���ͱ���
	char c = 'a';
	cout << "c��ֵ��" << c << endl << endl;
	// ����Ϊ�ַ�����
	bool d = true;
	cout << "d��ֵ��" << d << endl << endl;
	// ����Ϊ��������
	double e = 3.14;
	cout << "e��ֵ��" << e << endl << endl;
	float f = 9.42;
	cout << "f��ֵ��" << f << endl << endl;
	// ����Ϊ�����ͱ���
	string g = "Hello World!";
	cout << "g��ֵ��" << g << endl << endl;
	// ����Ϊ�ַ�������

	cout << '\n';
	cout << "---------------------------------------------" << endl;
	cout << '\n';

	// 3. ����
	int num;
	cout << "������һ��������";
	cin >> num;
	cout << "�������������" << num << endl << endl;

	cout << '\n';

	string name, temp;
	getline(cin, temp);    // �����cin����Ļس��ᵼ��getline��Ϊ�û������˻س���
	                       // ��Ҫʹ����ʱ�������س����������������û���������
	cout << "������������֣�";
	getline(cin, name);   // ʹ��getline����ֹ�û������пո��½������
	cout << "���������" << name << endl;
	

	return 0;
}