## ���� ����
������ ����

###
	#include <iostream>
	using namespace std;

	int main()
	{
		int value = 5;
		int *ptr = nullptr;
		ptr = &value;			//�Ϲ����� ������ �̿�

		int &ref = value;
		cout << ref << endl;

		ref = 10;	// *ptr = 10; �� ���ذͰ� ����.

		cout << value << " " << ref << endl;
		// ������ ����ó�� ��� �Ҽ� �ִ�.

		cout << &value << endl;	//FF864
		cout << &ref << endl;	//FF864 ���� �޸𸮸� ����Ѵ�???
		cout << ptr << endl;	//FF864
		cout << &ptr << endl;	//FF858 ������ ��ü�� ���� �̹Ƿ�
		// �ڱ� �ڽ��� ������ ó�� �ּҸ� ���� ���� �ƴϴ�!!

		int value = 5;
		int &ref;			// ������ �ݵ�� �ʱ�ȭ�� �Ǿ�� �Ѵ�.
		int &ref = &value;	// �´� ����
		int &ref = value;
		int &ref = 123;		// �Ұ�����

		//const
		int x = 5;
		int &ref = x;

		const int y = 8;
		int &ref = y;		// �Ұ���
		const int &ref = y;

		//���Ҵ��� �Ǵ°�?
		int value1 = 5;
		int value2 = 10;
		int &ref1 = value1;

		cout << ref1 << endl;	// 5

		ref1 = value2;

		cout << ref1 << endl;	// 10, ���� ����.


	}
	
	void doSomething(int n)
	{
		n = 10;
		cout << "in doSomething " << n << endl;
		
	}

	int main()
	{
		int n =5;
		cout << n << endl;

		doSomething(n);

		cout << n << endl;		//5 �Լ��� n�� ������ n�� �ٸ���(�Լ����� ��������)
	}

	void doSomething(int &n)
	{
		cout << &n << endl;		//FFB64
		n = 10;
		cout << "in doSomething " << n << endl;		//10
		
	}

	int main()
	{
		int n =5;
		cout << n << endl;		//5
		cout << &n << endl;		//FFB64 �ּҰ� �ƿ� ����.

		doSomething(n);			//�ƿ� �׺��� ��ü�� �Ѿ�ٰ� �����Ѵ�.

		cout << n << endl;		//10
		// �����ϴ°� �ƿ� ���� ������ �����ս� ��ü�� �ٿ��ش�.

		// �׷��ٸ� n�� �Լ��� �ٲٰ� ���� �ʴٸ�?
		// �Լ��� �Է¿� const�� �߰����ش�.
	}

	//�迭 �����ϱ�
	void printElements(int (&arr)[5])	// ������Ʈ�� ���ڰ� �ʿ��ϴ�
	{
		for(int i=0; i<5; i++)
		{
			cout << arr[1] << " ";
		}
		cout << endl;
	}

	int main()
	{
		const int length = 5;
		int arr[length]{1, 2, 3, 4, 5};

		printElements(arr);
		return 0;
	}

	#include<iostream>
	using namespace std;

	struct Something
	{
		int v1;
		float v2;
	};

	struct Other
	{
		Somthing st;
	};

	int main()
	{
		other ot;
		ot.st.v1 = 1.0;		// ��Ʈ��ó ���� ��Ʈ��ó���� v1�� �����ϱ�

		int &v1 = ot.st.v1;	// v1�� �����ϴ� ��������v1�� ����� �ش�.
		v1 = 1;				// ���� ����
	}
	
	int main()
	{
		int value = 5;
		int *const ptr = &value;
		int &ref = value;
		//��ɻ� ����
		//ref�� ���������δ� �����ͷ� �Ǿ��ִ�.
	}