## �Ͻ��� ����ȯ�� ����� ����ȯ

### typeinfo
	
	#intclude<iostream>
	#include<typeinfo>

	int main()
	{
		using namespace

		int a = 123;
		cout << typeid(a).name() <<endl;		// �ڷ��� Ÿ���� Ȯ�ΰ���!
		
		return 0;
	}

### �Ͻ��� ����ȯ
�����Ϸ��� �˾Ƽ� ����ȯ �ع���

	#intclude<iostream>
	#include<typeinfo>
	#include<iomanip>
	int main()
	{
		using namespace

		int a = 123.0;
		cout << typeid(a).name() << endl;		//��� ��
		//��ǻ�Ͱ� ����ȯ�� �Ҷ��� ���� ���������� ��ȭ�� �Ͼ
		//��� ��Ģ�� ����

		float a = 0.1f;
		double d = a;
		//��ū �ڷ������� ����ȯ �ϴ� ���
		//a�� ���忡�� ���� ���� ����
		//numeric promotion

		double b = 3
		short s = 2;
		//�ڷ����� ���������� ���ϰų� ������ �޶�����.
		int i = 30000;
		char c = i; // char�� 1����Ʈ�̹Ƿ� 30000�� ������ ����.
					// �������� �Ͼ��?
		
		cout << static_cast<int>(c) << endl;	// 48
		//charŸ���� ǥ�������� �ִ��� ���� 128�� �ƴϴ�.

		int i = 2;
		short s = i;		// short�� 2�� ������ �����Ƿ� �� ������ ����.

		doulbe d = 0.123456789;
		float f = d;

		cout << set::setprecision(12) << f << endl;		// 0.123456791043
														// ���е��� �����ؼ� ������ ǥ������ ����.
		
		float f = 3.14f;
		int i = f;
		cout << i << endl;		// 3�� ���� (����)
								// �ݿø�, �ø� ,������ ���� �ϴ� �Լ��� �����ִ�.
		
		//unsigned�� ����ȯ
		cout << 5u - 10; << endl; // 4283721797, unsigned�� �켱������ �� ���� unsined �� ������� �Ϸ��Ѵ�.

		//�켱����
		1. int ���峷��
		2. unsigned int
		3. unsigned long
		4. unsigned long long
		5. float
		6. double
		7. long double
					
		return 0;

### ����� ����ȯ

	#include<iostream>
	#include

	int i = 4.0;
	int i = int(4.0); // cpp��Ÿ��
	int i = (int)4.0  // c ��Ÿ��
	int i = static_cast<int>(4.0)

### ����

numeric promotion�� numeric conversion�� ����?