## ������ const

	#include<iostream>
	using namespace std;

	int main()
	{
		int x = 5;
		int &ref_x = x;

		const int x = 5;
		int &ref_x = x;			// ���� �Ұ���
		const int &ref_x = x;	// ���� ����

		const int &ref_2 = ref_x;

		int x= 5;
		int &ref_x = x;
		const int &ref_2 = ref_x;	//�̷��� ����ϴ� ���� ����

	}

	Ư����??
	int main()
	{
		const int &ref_x = 3;	//�԰���
		cout << ref_x << endl;
		cout << &ref_x << endl;

		//����ü �־��°��̸� const int ref_x�� �ٸ����� �����ΰ�...
	}

	void doSomething(const &int x)
	{
		cout << x << endl;
	}

	int main()
	{
		int a = 1;
		doSomething(a);
		doSomething(1);		//�䷱�͵��� ��������
		doSomething(2);
		doSomething(a+3);
		doSomething(3 * 4);
	}