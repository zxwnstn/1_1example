## 4-04 AutoŰ����� �ڷ��� �߷�

<br>

### auto�� ���

	#include<iostream>
	using namespace std;

	int Add(int a, int b)	// ������ �Լ��� ���� �ڷ������� auto ��밡��
	auto Add (int a, int b)	// parameter�� auto�� �ȵ�
	{						// templete�� ��밡�� - ���� �����
		return a+b;
	}
	//Ʈ���ϸ� ����Ÿ��
	auto add_1(int x, int y) -> int;
	auto add_2(int x, int y) -> doube;	//���������� �б� ������

	int main()
	{
	int a = 123;		// a�� 123�̹Ƿ� interger���� ���� ����, �����Ϸ��� �߷��Ҽ� ����
	auto a = 123;		// auto�ڷ��� ���� ��ü����
						// �ʱ�ȭ ���������� auto�ڷ����� ��������.(�翬)
	
	auto a = 123;		// ������ �ڷ���
	auto b = 123.0;		// �Ǽ��� �ڷ���
	auto c = a + b;		// �Ǽ��� �ڷ����� ��
	auto d = add(1, 2)	// �Լ��� ���ϰ��� auto�� ���������� 
	
	return 0;
	}