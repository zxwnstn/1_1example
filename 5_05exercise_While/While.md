## �ݺ��� while

### ���

	#include<iostream>
	using namespace std;

	int main()
	{	
		// 1~10���� ����Ѵٸ�
		cout << 1 << endl;
		cout << 2 << endl;
		...
		...
		//���ŷο�

		cout << "While-loop test" << endl;
		int count = 0;

		while(true)		// ()�� ���ǹ����� ���϶� ����, �����̸� �������� ����.
		{
			cout << count <<endl;
			count++;
		}

		while(count < 10)		// count�� 10���� ������ ������
		{
			cout << count <<endl;
			count++;
		}
	}

### ���� ������ Ż��

	int count = 0;

	while(1)		
	{
		cout << count <<endl;
		count++;
		if (count == 10) break;		// break�� �ɾ��ش�.
	}//�� ������ goto ������ �ٲ㺸��


### ���ǻ���

	unsigned int count = 10;

	while (count >=0)
	{
		if ( count == 0 )
			cout << "zero";
		else
			cout << count << " ";	//count�� zero���� �پ�� ����
									//unsigned�� �ִ밪���� �����÷ο찡 �߻��ȴ�.
									//�׷��� �� �ִ밪�� ����� �ƴϹǷ� ���ѷ����� �ȴ�.
		count--;
	}