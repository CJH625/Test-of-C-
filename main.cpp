#include <iostream>
#include <string>

using namespace std;

class A {
public:
	virtual string toString() { // �̳�����ͬ���������黯
		return "A";
	}
};

class B : public A {
public:
	string toString() override { // ����overrideǿ�ƽ���ת��Ϊ�麯�����Ա㺯����д�����������Ա���
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

void print(A& o) { // ������B��C��ʱ�ᷢ����ʽ�Զ�ת������ת���ԣ���ת������ʽ������
	cout << o.toString() << endl;
}
int main()
{
	A a;
	B b;
	C c;
	cout << "����ָ��" << endl;
	print(&a);
	print(&b);
	print(&c);
	cout << "��������" << endl;
	print(a);
	print(b);
	print(c);
	cin.get();
	return 0;
}