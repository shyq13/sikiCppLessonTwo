// 该文件为讲解文件，请到Cuboid.h文件查看详细代码

// this指针

// this指针是什么？
// · this指针：每一个对象都能通过this指针来访问自己的地址
// · 在成员函数内部，它可以用来指向调用对象
// 有时候方法可能涉及到两个对象，在这种情况下就需要使用this指针

// 如何使用this指针？
// 先定义一个类，然后进行类方法定义：
/*
int Box::compare(Box& box){
	if (this -> volume && box.volume) {   // this指针使用 -> 来访问成员函数
		return 0;
	}
	......
}

int res = box1.compare(box2);     // 使用方法
*/