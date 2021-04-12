#include <iostream>
#include <string>

using namespace std;

class A {
public:
	virtual string toString() { // 继承链上同名函数都虚化
		return "A";
	}
};

class B : public A {
public:
	string toString() override { // 加入override强制将其转换为虚函数，以便函数名写错，编译器可以报错
		return "B";
	}
};

class C : public B {
public:
	string toString() {
		return "C";
	}
};
/*
void print(A o) {
	cout << o.toString() << endl;
}

void print(B o) {
	cout << o.toString() << endl;
}

void print(C o) {
	cout << o.toString() << endl;
}
*/
void print(A* o) {
	cout << o->toString() << endl;
}

void print(A& o) { // 当传入B、C类时会发生隐式自动转换（上转可以，下转必须显式声明）
	cout << o.toString() << endl;
}
int main()
{
	A a;
	B b;
	C c;
	cout << "基类指针" << endl;
	print(&a);
	print(&b);
	print(&c);
	cout << "基类引用" << endl;
	print(a);
	print(b);
	print(c);
	cin.get();
	return 0;
}