## �Ű������� ������ ����

###
	
	#include<iostream>
	using namespace std;

	int foo(int x, int y);

	int foo(int x, int y)	// ������ ���� ��������
	{
		return x+y;
	}

	int main()
	{
		int x = 1, y = 2;
		foo(6,7);			// ���� �ʿ��Ѱ��̱� ������ �̷����ص� ���۵��ȴ�
							// ���⼭ 6�� 7�� argument �Ǵ� ������(actual parameters)��� �Ѵ�.
		
		foo(x, y + 1)		//x�� ���� 1�� argument�� �ǰ� x�� �� 1�� ���� ���ִ� ��Ȱ�� �Ѵ�.
							//�׷��ٸ� x�� argument 1���� �����ϴ� ���ϱ�?
		return 0;

	}