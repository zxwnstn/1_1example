## �ּҿ� ���� �μ� ����

###

	#include<iostream>
	using namespace std;

	void foo(int *ptr)									//�����͵� �ռ����ǿ� ���������� �������·� �����ִ�.
	{
		cout << *ptr << " " << ptr << &ptr << endl;		// �����ʹ� �Լ������� ������ ���� �ۿ� ������ ��ģ��.
	}

	void foo(const int *ptr, int *arr, int lenth)
	{
		int x =1;
		ptr = &x;				// const�� �ɾ������ ������ ptr�� �Ҵ�� �ּҰ��� �ٲܼ��ִ�??
								// ������ �հ��� ����, �̸� �������� const int* const ptr �̷��� ����Ѵ�.
	}							// ������ ���� �Ⱦ��� ������ ptr �ּҰ� ����Ű�� ���� �̿��ϱ� ���� ����̱� �����̴�.

	int main()
	{
		int value =5;
		cout << value << " " << &value << endl;

		int *ptr = &value;

		cout << &ptr << endl;		// ����� �Լ����� �ٸ���

		foo(&value);				// ������ ���� ��ü�� ����Ǳ� �����̴�.
		foo(ptr);					// �����͵� ������
		foo(5);						// �Ұ���

 	}