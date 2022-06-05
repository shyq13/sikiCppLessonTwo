// 详细代码在student.cpp

// 类定义、类方法定义和类对象的声明和使用

// 类定义在lesson5（1）项目
// 类方法定义：
// 定义方法如下（以Student类为例）：
/*
void Student（类名称）::（作用域解析符）setStudent(string name, int chinese, int math, int english【形参列表】) {
	name_ = name;
	chinese_ = chinese;
	math_ = math;
	english_ = english;
}
int Student::sum(const Student& s) {
	return (s.chinese_ + s.math_ + s.english_);
}
(...)
（以下的类方法定义与上同理）
（放在Student.cpp文件里）
*/

// 类的声明和使用
// 方法（在main函数内）：
/*
	Student stu1;                    |
	string name_;					 |（创建Student类对象）
	int chinese_, math_, english_;	 |

	cout << "请输入学生的姓名：";       |
	getline(cin, name_);			 |
	cout << "请输入学生的语文成绩：";	 |
	cin >> chinese_;				 |（使用类）
	cout << "请输入学生的数学成绩：";	 |（在.cpp文件中使用）
	cin >> math_;					 |
	cout << "请输入学生的英语成绩：";	 |
	cin >> english_;				 |

	stu1.setStudent(name, chinese_, math_, english_);	  |
	cout << "该学生的总分是" << stu1.sum(stu1) << endl;	  |（使用Student类的成员函数）
	cout << "该学生的平均分是 " << stu1.avery(stu1)<< endl;  |
*/