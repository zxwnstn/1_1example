## 4-1�� ���������� ������ ���ӱⰣ

<br>

### ������ ������ ���ӱⰣ

1. ������ ������ ���� �ִ� ������� ������ ����
2. ���ӱⰣ�� �޸��� ���ӱⰣ�� �ǹ�
3. ������ ���ӱⰣ�� ���� ���� ���̳�, ���ӽ� ���̰� ����

	#include<iostream>
	using namespace std;

	int main()
	{
		apple = 5;			// �ٷ� �ؿ� apple������ ����Ǿ� ��������
							// ����Ҽ� ����.

		int apple = 5;		// �̽��� ���� ���� apple�� ����Ҽ� ����
		cout << apple << endl;
		
		if(ture)
		{
			apple = 1;		// ��ū �������� ����� apple�� ����ϴ� ���� �����ϴ�.
			cout << apple << endl;
			int apple = 2;	// �������� �̸��� ���� �Ȱ��� apple�� �����ϴ°��� �����ϴ�.
							// ������ ������ {}���� �����̴�.
							// ������ �̷����� naming�� ���ϴ°��� ����.
		}

		cout << apple << endl; // 1

		return 0;
	}
	
	apple = 5;				// {}��� �������� apple������ �̿��Ҽ� ����

>������ �ڵ��� ������ ������ �ּ�ȭ �ϴ� ������ �����Ѵ�.

<br>

### namespace

	namespace work1
	{	 
		int a = 1;
		void doSomthing(int a)
		{
	 		 a += 3 ;
		}
	}

	namespace work2
	{
		int a = 2; 
		void doSomething(int b)
		{
	 		 b += 5;
		}
	}
	//cf) �̸��� ������ �Ķ���Ͱ� �ٸ� ��� �ٸ� �Լ��� ó���Ѵ�. 
	
	//cpp17������ �̷��� ���ӽ����̽� ���� ������ ������
	namepace work1::work11::work111
	{
		int a = 3;
		void doSomething(int c)
			c += 5;
	}
	
	int main()
	{
		using namespace std;

		work1::a;				// ::�� �������� ������
		work1::doSomething();

		work2::a;
		work2::doSomething();

		work1::work11::work111::doSomething();
		//�Ϲ������� depth�� ����ϴ����� ���ϴ� ���� ����.

		return 0;
	}



	 






