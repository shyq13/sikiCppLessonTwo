#include "Student.h"
using namespace std;

int main() {
	string name1 = "Bobby";
	int chinese1 = 51;
	int math1 = 79;
	int english1 = 61;

	string name2 = "Tina";
	int chinese2 = 91;
	int math2 = 88;
	int english2 = 74;
	
	Student stu1 = Student(name1, chinese1, math1, english1); // | ����Ĭ�Ϲ��캯������ʽ��
	Student stu2(name2, chinese2, math2, english2);			  // | ����Ĭ�Ϲ��캯������ʽ��
	
	int sum1 = stu1.sum(stu1);
	float avery1 = stu1.avery(stu1);
	bool pass1 = stu1.pass(stu1);

	int sum2 = stu2.sum(stu2);
	float avery2 = stu2.avery(stu2);
	bool pass2 = stu2.pass(stu2);
	// �����Ѿ������˹��캯��������setStudent()�������Բ����ٴε���

	cout << "ѧ��" << name1 << "�ĸ��������£�" << endl
		<< "�ܳɼ���" << sum1 << endl
		<< "ƽ���ɼ���" << avery1 << endl;

	if (pass1) {
		cout << "��ѧ�����Լ���" << endl;
	}
	else {
		cout << "��ѧ�����Բ�����" << endl;
	}

	cout << '\n'
		<< "------------------------------------------------------------"
		<< endl << '\n';

	cout << "ѧ��" << name2 << "�ĸ��������£�" << endl
		<< "�ܳɼ���" << sum2 << endl
		<< "ƽ���ɼ���" << avery2 << endl;

	if (pass2) {
		cout << "��ѧ�����Լ���" << endl;
	}
	else {
		cout << "��ѧ�����Բ�����" << endl;
	}

	// ������������������ã�ϵͳ���Զ�����


	return 0;
}