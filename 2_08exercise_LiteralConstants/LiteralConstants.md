## 2-8�� ���ͷ� ���

<br>

###Literal�� ĳ����
�����ȿ� ����Ǵ� ����, ����� literal�̶�� �Ѵ�.

	#include<iostream>
	int main()
	{
		using namespace std;

		float pi = 3.14f;	// f�� ������ double�� ĳ�����εȴ�. f�ֿ��� l(long double)�� �ֵ�.
		int i = -12345u;	//  u�� ������ unsigned�� ĳ���� �ȴ�.
							// int�� ��� u �ܿ� uL , UL, LL ���� �ִ�.
							// ��κ��� ��� �ε��Ҽ��� ���� f�� l, int�� u�� �ִ� ��찡 ��κ��̴�.
							// �׷��� �̷��� ǥ���ϴ°� ���ٴ�, ĳ�������� ��Ȯ�ϰ� �����ִ°��� ����.
		
		return 0;
	}

<br>

### 8������ 16����
Decimal	: 0 1 2 3 4 5 6 7 8 9 10
Octal	: 0 1 2 3 4 5 6 7 8 10
Hexa	: 0 1 2 3 4 5 6 7 8 9 A B C D E F 10
1. ���ھտ� 0�� ���̸� 8������ �ȴ�. 
2. 0x�� ���̸� 16������ �ȴ�.
3. 16������ ����ϴ� ��찡 �� ����.
4. 0b�� ���̸� 2������ �ȴ�.

	#include<iostream>
	int main()
	{
		using namespace std;

		int x = 012;	// 8���� ǥ�� 11
		int y = 0xF		// 16���� ǥ�� 15
		cout << x << y << endl; // ����� �⺻������ 10������ �ȴ�.
		x = 1011'1111'1010; ���ڻ��̿� '�� �־ �����Ϸ��� �����Ѵ�.
	
		return 0;
	}

<br>

### �ɺ��� ���	
	#include<iostream>
	int main()
	{
		using namespace std;

		//���������� �ݺ��Ǵ� ������ ���

		//1. �����ѹ� �̿�
		int items = 123
		int price = num_items * 10 // ���⼭ 10�� �����ѹ���� �θ���.
								   // �Ϲ������� �� ������� �ʴ´�(�����ʴ�).

		//2. �ɺ��� ����� �̿�
		const int price_per_item = 10; // const�� �پ� 10�̶�� literal�� ���� ���� �� ����.
		int num_items = 123;
		int price = num_items * price_per_item;

		return 0;
	}
