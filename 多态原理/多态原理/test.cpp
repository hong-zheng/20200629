#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

class A {
public:
	// thisָ��B���󣬵���B�ĺ���
	// ȱʡֵ���ʼ��ʱ���ȷ�Ϻõģ�������д�������ı䣬��д�������¶��壬������¶���ͻᷢ���ı�
	// ��д���ᷢ���ı䣬ȱʡֵ��ȱʡֵ���ǵ�һ���������߸���ֵ
	virtual void func(int val = 1){ std::cout << "A->" << val << std::endl; }
	virtual void test(){ this->func(); }
};
class B : public A {
public:
	void func(int val = 0){ std::cout << "B->" << val << std::endl; }
};
int main(int argc, char* argv[])
{
	B*p = new B;
	p->test(); // B->1
	while (1);
	return 0;
}




//class Base1 { public: int _b1; };
//class Base2 { public: int _b2; };
//class Derive : public Base1, public Base2 { public: int _d; };
//int main(){
//	Derive d;
//
//	// ��Ƭ�������е����Լ�����һ����Դ������
//	// ���ڸ��������Լ�����һ����
//	// ��֤��Ƭ��������ȷ��
//	Base1* p1 = &d;
//	Base2* p2 = &d;
//	Derive* p3 = &d;
//	cout << p1 << endl;
//	cout << p2 << endl;
//	cout << p3 << endl;
//	while (1);
//	return 0;
//}

//class A{
//public:
//	A(char *s) { cout << s << endl; }
//	~A(){}
//};
//class B :virtual public A {
//public:
//	B(char *s1, char*s2) :A(s1) { cout << s2 << endl; }
//};
//class C :virtual public A {
//public:
//	C(char *s1, char*s2) :A(s1) { cout << s2 << endl; }
//};
//// ��ʼ��˳��ͼ̳й�ϵ�йأ��ͳ�ʼ���б��޹�
//class D :public B, public C {
//public:
//	// �������ֳ�ʼ��һ�Σ�����������̳У����г�Աֻ�ܳ�ʼ��һ�Σ������ظ���ֱ������
//	D(char *s1, char *s2, char *s3, char *s4) :B(s1, s2), C(s1, s3), A(s1)
//	{
//		cout << s4 << endl;
//	}
//};
//int main() {
//	// ABCD
//	D *p = new D("class A", "class B", "class C", "class D");
//	delete p;
//	while (1);
//	return 0;
//}

//typedef void(*vfPtr)();
//
//void PVFTable(vfPtr* vftable){
//	//����ȡ����е��麯��ָ���ӡ�����ã����þͿ��Կ�������һ������
//	cout << "����ַ:" << vftable << endl;
//	for (int i = 0; vftable[i]; ++i){
//		printf("��%d���麯����ַ��0x%x,->", i, vftable[i]);
//		vfPtr fun = vftable[i];
//		fun();
//	}
//	cout << endl;
//}
//
//class Base1{
//public:
//	virtual void fun1() {
//		cout << "Base1::fun1()" << endl;
//	}
//	virtual void fun2(){
//		cout << "Base1::fun2()" << endl;
//	}
//private:
//	int _b1;
//};
//class Base2{
//public:
//	virtual void fun1(){
//		cout << "Base2::fun1()" << endl;
//	}
//	virtual void fun2(){
//		cout << "Base2::fun2()" << endl;
//	}
//private:
//	int _b2;
//};
//class Derive :public Base1, public Base2{
//public:
//	virtual void fun1(){
//		cout << "Derive::fun1()" << endl;
//	}
//	virtual void fun3(){
//		cout << "Derive::fun3()" << endl;
//	}
//private:
//	int _d1;
//};
//void test(){
//	Base1 b1;
//	Base2 b2;
//	Derive d;
//
//	vfPtr* vft = (vfPtr*)(*((int*)&b1));
//
//	PVFTable(vft);
//	cout << endl;
//
//	vft = (vfPtr*)(*((int*)&b2));
//
//	PVFTable(vft);
//	cout << endl;
//
//	vft = (vfPtr*)(*((int*)&d));
//
//	PVFTable(vft);
//	cout << endl;
//	vft = (vfPtr*)(*((int*)((char*)&d + sizeof(Base1))));
//	PVFTable(vft);
//}
//int main(){
//
//	test();
//	system("pause");
//	return 0;
//}

