//����ǥ

#include<iostream>
using namespace std;

class Base
{
public:
	virtual void fun1() {};
	virtual void fun2() {};
};
//Ŭ������ virtual�� �Լ��� �����ϸ� �������ε��� �ƴ϶� �������ε��� �Ѵ�.

class Der : public Base
{
public:
	virtual void fun1() {};
};

//class�� �����Ǹ�..
//
//class Base
//	*_vptr �̶�� ��� �����Ͱ� ������ ���� �������·� �ִ�
//virtual fun1()
//virtual fun2()
//
//�׸��� virtual��� ���̺��� ã�´�.
//fun1()
//fun2() ���̺� ��� �Լ���
//
//class Der : public Base
//	*vptr
//virtual fun1()�� ������ ������
//fun2()�� �θ��� ���̺��� �Լ��� ����Ű�� �ȴ�.

int main()
{
	cout << sizeof(Base) << endl;	// 1
	cout << sizeof(Der) << endl;	// 1

	//vitual�� �ٲٸ�??				// 4
	//�����Ͱ� ���ܼ�				// 4
	//32��Ʈ �ý����� �ּҰ� ����� ���� 4����Ʈ�� �þ�Եȴ�!

}
