## void ������
generic pointer

###
	#include<iostream>
	using namespace std;

	int main()
	{
		int i =5;
		float f =3.0;
		char c ='a';

		void *ptr = nullptr;

		ptr = &i;
		ptr = &f;
		ptr = &c;

		int *ptr_i = &i;			//�Ϲ����� �����Ͷ��..
		cout << ptr_i << endl;
		cout << ptr_i+1 << endl;	//�ּҿ��� ����

		//���̵� �����ʹ� �Ұ����ϴ�.
		//+n�� �Ҷ� �� ����Ʈ�� �����־�� �ϴ��� �𸣱� �����̴�.

		//cout << &c << " " << ptr << endl; //cf �̰� �־ȵɱ�?
		cout << &f << " " << ptr << endl; 

		cout << *ptr << endl;		// �ڷ����� �������� ���� ���۷��̿��� ���� �ʴ´�.
		cout << *static_cast<float*>(ptr) << endl;	//������ ����ȯ�� ���� ���۷����� �����ϴ�.

		//�׷��ٸ� �̷��� ���̵� �����ʹ� �� ���°ɱ�??
 	}

