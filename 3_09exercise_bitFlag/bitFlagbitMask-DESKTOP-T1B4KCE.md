## 3-9�� ��Ʈ����ũ, ��Ʈ�÷���

### ������ bool������ ���� �÷���
	
	#include<iostream>
	using namespace std;

	int main()
	{
		// ������ ������, �� ���ӿ��� ������ �÷��׸� ������.

		bool item1_flag = false;
		bool item2_flag = false;
		bool item3_flag = false;
		bool item4_flag = false;

		//event �������� ����
		item1_flag = true;

		//die �׾ �������� ����
		item1_falg = false;

		//Ư���� ������ ���
		if (item3_flag == true && item4_falg = false)
		{
			item3_flag = false;
			item4_flag = true;
		}
		
		return 0;
	}
�̷������� �ڵ��Ѵٸ� �������� 32���� �ִٸ� 32���� �÷��׸� ���� ������ �Ұ��̰�,
���⵵ �����ϴ�.
�׷��� �������� �ִ� ���ٸ� �����ٸ� ������ ������ 1�� 0���� ǥ���Ҽ� ���� ������??�� �߻��� �Ҽ��ִ�.
-> ��Ʈ�÷��׸� �̿�!

### ��Ʈ�÷��׸� �̿��

	#include<iostream>
	#include<bitset>
	using namespace std;

	int main()
	{
		const usigned char opt0 = 1 << 0;
		const usigned char opt1 = 1 << 1;
		const usigned char opt2 = 1 << 2;
		const usigned char opt3 = 1 << 3;
		// opt 4, 5, 6, 7...

		cout << bitset<8>(opt0) << endl;	// 0000 0001
		cout << bitset<8>(opt1) << endl;	// 0000 0010
		cout << bitset<8>(opt2) << endl;	// 0000 0100
		cout << bitset<8>(opt3) << endl;	// 0000 1000

		//������ �÷��׸� ��Ʈ ����ũ�� �̿��Ѵٸ�
		unsigend char items_flag = 0;			//���� �� ������ �÷��׸� ����
		cout << "no item " << bitset<8>(items_flag) << endl;

		// item0 get!
		items_flag |= opt0
		cout << "item0 obtained " << bitset<8>(items_flag) << endl;

		// item3 get!
		items_flag |= opt3
		cout << "item3 obtained " << bitset<8>(items_flag) << endl;

		// item3 los
		items_falg &= ~opt3
		cout << "item3 lost " << bitset<8>(items_flag) << endl;

		// has item1??
		if (items_flag & opt1)
			cout << "has item1" << endl;
		else 
			cout << "Not have item1" << endl;

		// has item0??
		if (items_flag & opt1)
			cout << "has item0 " << endl;
		else 
			cout << "Not have item0" << endl;
		
		// ���ÿ� �������� �������� ������
		items_falg |= (opt2 | opt3);

		cout << bitset<8>(opt2 | opt3) << endl;
		cout << "item2, 3 obtained" << bitset<8>(items_flag) <<endl;

		//������ 2�� �����ְ�, 1�� �������� �������
		if ((items_flag $ opt2) && !(items_flag & opt1))
		{
			items_flag ^= opt2;
			items_flag ^= opt1;			// ���ٷ� �ٲ㺸��!

			cout << bitset<8>(items_flag) << endl;
		}

	}

### ��Ʈ�÷��� �ǿ뿹��

	#include <iostream>
	#include <bitset>
	using namespace std;

	int main()
	{
	
	}



