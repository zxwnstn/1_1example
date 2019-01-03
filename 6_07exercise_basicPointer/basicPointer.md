## �⺻���� ������ ����

###
	#include<iostream>
	using namespace std;

	int main()
	{
		int x =5;			//������ �޸��ּҸ� �����ִ�.

		cout << x << endl;
		cout << &x << endl; // & : address-of operator
		cout << (int)&x << endl;
		//�޸� �ּҸ� ��� ������ �����Ͷ�� �Ѵ�.

		// de-reference operator (*)
		//�����ʹ� ���۷����� �Ϻ��̴�.
		//c��� ������ ���۷����� �����Ͱ� �����־� ȥ���Ǳ� ����.

		cout << *(&x) << endl; // 5 , ������ ������ ����ִ� �ּҿ� ����ִ� �� 
							   // ���� ���ο����� �̷������� ���� �Ͼ

		//�����͵� �ᱹ �ּҸ� ��� '����'��!

		typedef int* pint
		int *ptr_x;
		/*int* ptr_x; // pint ������ Ÿ���ΰ� ó�� �����ִ�.
		ptr_x = &x;
		pint ptr_x = &x, ptr_y = &y;*/

		�޸� �ּҴ� ������ Ÿ�԰��� ������� �߸����� ���̴�.
		�������� Ÿ���� �����ؾ� �ϴ� ������ 
		�� ���۷����Ҷ� �������� �ڷ����� �����ؾ� �ϱ⶧���̴�.

		cout << ptr_x << endl;
		cout << *ptr_x << endl;

		�� �����͸� ��� �ϴ°�?
		�⺻���� ������ �迭�� �̿��̴�.
		100������ �ڷᰡ ��� �迭�� �ִٰ� �غ���.
		�Լ��� �迭�� ���� �Ǹ� 100������ �ڷḦ �����ϰ� �Ǵ°��̴�.
		�̷��� ��츦 �����ϱ� ���ؼ� ������ ��, �������� �ּҸ� �ٷ�� ���̴�.

		double d = 1.0;
		int *ptr_x = &x;
		double *ptr_d = &d;		// ���� �޸� �ּҸ� �������� ����. ���Ƴ��� �ִ�
								// ������ �ٸ� ����� �̿��ؼ� �Ҽ��� �ִ�.

		cout << ptr_d << endl;
		cout << *ptr_d << endl;
		����� ���� �ڷ������� �����͸� �̿��Ҽ� �ִ�.

		������ ��ü�� ũ��� ����������, ���� ���ּ��� �ڷ��� ũ��� �ٸ����ִ�.
		
		cout << sizeof(x) << endl;
		cout << sizeof(d) << endl;
		cout << sizeof(&x) << " " << sizeof(ptr_x) << endl;
		cout << sizeof(&d) << " " << sizeof(ptr_d) << endl;
		���� ������ �ּҸ� ����Ѵ�. 64��Ʈ ����̶�� 8����Ʈ�� �ȴ�.

		struct Something
		{
			int a, b, c, d; // struct something�� ��ü ũ��� 16����Ʈ��
		};

		int main()
		{
			Somthing ss;
			Somthing *ptr_s;
			cout << sizeof(Something) << endl;	// 16
			cout << sizeof(ptr_s) << endl;		// 4
		}
	}