## �ݺ��� For
<br>
### while���� For��
�ݺ�Ƚ���� ������ �ִٸ� �ַ� for��������.

<br>

### ����
	#include<iostream>
	using nmaespace std;

	int main()
	{	
		// 0���� 9���� ����ϴ� for��
		for (int count = 0; count < 10; count++ )// iteration �ݺ�
		{
			cout << count << endl;
		}
		cout << count << endl; // count�� ���������μ� {}�� ���¼��� �������.
		return 0;
	}
<br>
	

### for������ ���ѷ��� ������
for(;true;count++)
for(;;count++)

<br>

### for������ power�����ϱ�
	
	int pow(int base, int exponent)
	{
		int result = 1;
		for(int i=0 ; i < exponent ; 1++)
		{
			result *= base;
		}
	}

<br>

### �������� for ��

	int main()
	{
		for (int i = 9 ; i >=0; i--)
		{
			cout << i << endl;
		}
	}

<br>

### for�� �ȿ��� ���� �ݺ����� ����ϱ�

	for(int i = 0, j = 0; (i+j) < 10; i++, j += 2)
	{
		cout << i << " " << j << endl;
	}

<br>

### 2�� ����
	for(int i = 0; i < 9; i++)
	{
		for(int j = 0; j < 9; j++ )
		{
			cout << i << " " << j << endl;
		}
	}