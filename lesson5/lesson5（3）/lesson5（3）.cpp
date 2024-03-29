﻿// 该文件为讲解文件，请到Student.h文件查看源代码

// 类的构造函数与析构函数


// 构造函数

// 什么是构造函数？
// · 每个类都分别定义了它的对象被初始化的方式，类通过一个或几个特殊的成员函数来控制对象的初始化过程，
// 这些函数叫做构造函数
// · 构造函数的任务是初始化对象的数据成员，无论何时只要类的对象被创建，就会执行构造函数

// · 构造函数的名称与类名相同，并且没有返回值。
// 声明：Student(string name, int chinese, int math, int english);
// 定义：Student:Student(string name, int chinese, int math, int english) {
//			name_ = n;
//			chinese_ = c;
//			math_ = m;
//			english_ = e;
//      }
// · 注意：上述代码和函数setStudent()相同，但是，程序声明对象时，会自动调用构造函数

// 构造函数的调用
// 构造函数在C++中有两种调用方式，分别是：
// 1. 显式调用
// Student stu1 = Student("Jane",100,90,80);
// 2. 隐式调用
// Student stu1("Jane",100,90,80);

// 定义默认构造函数
// 定义默认构造函数在C++中也有两种方式：
// 1.  给已有的构造函数的所有参数提供默认值
// Student stu1(string name = "", int chinese = 0, int math = 0, int english = 0);
// 2. 通过函数重载来定义一个没有参数的构造函数
// Student();


// 析构函数

// 什么是析构函数？
// 用构造函数创建对象后，程序负责跟踪该对象，直到其过期为止
// 对象过期时，程序将自动调用一个特殊的成员函数：析构函数，来完成清理工作

// 定义和声明析构函数
// 析构函数的名称是在类名前加上~，并且析构函数没有参数、返回值和声明类型
// 声明：~Student();
// 定义：Student::~Student() {
//
//		}

// 调用析构函数
// · 在类对象过期时，析构数将自动被调用
// · 注意：如果没有提供析构数，编译器将隐式地声明一个默认析构函数，
// 并在发现导致对象被删除的代码后，提供默认析构函数的定义