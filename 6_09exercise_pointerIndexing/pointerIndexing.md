## ������ ����� �迭 �ε���

###������ ����

	#include<iostream>
	using namespace std;

	int main()
	{
		int value = 7;
		int *ptr = &value;

		cout << uintptr_t(ptr) << endl;		//1999212032
		cout << uintptr_t(ptr - 1) << endl;	//1999212028
		cout << uintptr_t(ptr + 1) << endl;	//1999212036

		double value = 7;
		double *ptr = &value;

		cout << uintptr_t(ptr) << endl;		//1999212032
		cout << uintptr_t(ptr - 1) << endl;	//1999212024
		cout << uintptr_t(ptr + 1) << endl;	//1999212040
		//������ ������ �Ҷ� ������ Ÿ�Կ� ���� ����Ǵ� ũ�Ⱑ �޶�����. (�� ������ Ÿ���� ũ�⸦ ������.)
		//������ ���� ��������(�����μ��� ������) ũ��� 4����Ʈ(32��Ʈ ����)���� ���� ���ƾ� �Ѵ�.

	}

	#include<iostream>
	using namespace std;

	int main()
	{
		int array[]{9, 7, 5, 3, 1};

		cout << array[0] << " " << (uintptr_t)&array[0] << endl;	//9212032
		cout << array[1] << " " << (uintptr_t)&array[1] << endl;	//9212036
		cout << array[2] << " " << (uintptr_t)&array[2] << endl;	//9212040
		cout << array[3] << " " << (uintptr_t)&array[3] << endl;	//9212044	4������
		for(int i=0; i<5; i++)
		{
			cout << array[i] << " " << (uintptr_t)&array[i] << endl;
		}

		int *ptr = array;
		for(int i=0; i<5; i++)
		{
			cout << *(ptr+i) << endl;								//�Ȱ��� 4���þ
		}
	}

### ���ڿ�

	int main()
	{
		char name[] = "Jack jack";
		char *ptr = name;
		const int n_name = sizeof(name) / sizeof(char);

		for(int i= 0; i<n_name; ++i)
		{
						 
			cout << (pty + i);		//������ ��ĭ null char ���� ��µ�
			cout << *(name + i);	//���� name��ü�� �̹� ������
		}
}