## 3-9�� ��Ʈ����ũ, ��Ʈ�÷���

<br>

### ������ bool������ ���� �÷��� : ���� �������� ���
	
	#include<iostream>
	using namespace std;

	int main()
	{

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

<br>

### ��Ʈ�÷��� �̿�� : ���� �������� ���

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

		cout << bitset<8>(opt0) << endl;							// 0000 0001
		cout << bitset<8>(opt1) << endl;							// 0000 0010
		cout << bitset<8>(opt2) << endl;							// 0000 0100
		cout << bitset<8>(opt3) << endl;							// 0000 1000

		//������ �÷��׸� ��Ʈ ����ũ�� �̿��Ѵٸ�
		unsigend char items_flag = 0;								//��â�� ������ �÷���
		cout << "no item " << bitset<8>(items_flag) << endl;		//no item �����̹Ƿ� item_flag�� 0000 0000�̴�. 


		// item0 get! �������� ��
		items_flag |= opt0											//items_flag = items_flag | opt0; �� ���� �ǹ� 
		cout << "item0 obtained " << bitset<8>(items_flag) << endl;	//item0�� ������Ƿ� item_flag�� 0000 0001�̴�.
		// item3 get!
		items_flag |= opt3
		cout << "item3 obtained " << bitset<8>(items_flag) << endl;	//item3�� ������Ƿ� item_flag�� 0000 0101�̴�.
		// item3 los �������� ��
		items_falg &= ~opt3											//������ �ǹ��ϴ��� �� �����غ���!!
		cout << "item3 lost " << bitset<8>(items_flag) << endl;		//item3�� �ٽ� �Ҿ����Ƿ� item_flag�� 0000 0001�̴�.


		// has item1?? �������� ���� ���� �Ǵ�						// ������1 �� ���� �ϰ� �ִ°�??
		if (items_flag & opt1)										
			cout << "has item1" << endl;							// 0000 0001 $ 0000 0010 �� ���̶��
		else														// �̰��� ������ �ǹ��ϴ��� �� ������ ����!
			cout << "Not have item1" << endl;						
		// has item0??
		if (items_flag & opt1)
			cout << "has item0 " << endl;
		else 
			cout << "Not have item0" << endl;

		

		// ���ÿ� �������� �������� ������
		items_falg |= (opt2 | opt3);								// 2, 3 �������� | ���� �ϰ�, �ٽ� �� items_flag�� | ��Ų��!
		cout << bitset<8>(opt2 | opt3) << endl;
		cout << "item2, 3 obtained" << bitset<8>(items_flag) <<endl;// 0000 1101

		
		//������2�� �����ְ�, ������1�� �������� �������			
		if ((items_flag & opt2) && !(items_flag & opt1))			// ������ �ǹ��ϴ��� �����غ���! &&�� ����������
		{
			items_flag ^= opt2;										// ^ �����ڰ� ������ �ǹ��ϴ����� �� �ڵ尡 ���ǹ� �ϴ��� �� �����غ���!
			items_flag ^= opt1;										// 0000 1101 ^ 0000 0100
			//���� ���ٷ� �ٲ㺸��!									// 0000 1101 ^ 0000 0010
			itmes_flag ^= (opt2 | opt1);

			cout << bitset<8>(items_flag) << endl;					// ������2�� ���ְ�, ������ 1�� �ְ� �Ѵ�!
																	// ���� items flag�� 1011
		}
		return 0;
	}

<br>

### ��Ʈ ����ũ : color table�� ��

16���� 3���� �������� ǥ���Ѵ�. #RRGGBB ������ ����, �׸�, ��� 
16^1*15 + 16^0*15 = 255 
������ ����Ʈ���� 0���� 255 �� 256������, �׷��� �̴� 2^8�̰�(���ʿ� 16�� 2�� 4���̴�.) 2������ ȣȯ�� �����ϴ�.

	#include<iostream>
	#include<bitset>
	using namespace std;
	
	int main()
	{
		unsigned int pixel_color = 0xDAAA520;
		cout << std::bitset<32>(pixel_color) << endl;
		
		const unsigned int red_mask = 0xFF0000;
		const unsigned int green_mask = 0x00FF00;
		const unsigned int blue_mask = 0x0000FF;
		cout << std::bitset<32>(red_mask) << endl;
		cout << std::bitset<32>(green_mask) << endl;
		cout << std::bitset<32>(blue_mask) << endl;

		unsigned char bule = pixel_color & blue_mask;
		cout << "blue " << bitset<8>(blue) << " " << int(blue) << endl;
		
		unsigned char green = pixel_color & green_mask;
		cout << "green " << bitset<8>(green) << " " << int(green) << endl;		
		//���ڵ�� �� ���ϴ� ��� ���� ������?
		//������ char���� 1����Ʈ�� ������ ����8�ڸ��� �̻��� ���� ���Ѵ�.
		//�׷��ٸ�
		unsigned int green = pixel_color & green_mask; 
		cout << "green " << bitset<16>(green) << " " << int(green) << endl;
		//��� �����ϸ� ���ϴ� ����� ����� ���ñ�??
		//�ƴϴ� 10101010 00000000 �̷������� ������ �ɰ��̴�. ���� >> �����ڸ� �־���� �Ѵ�.

		cout << "green " << bitset<8>(green >> 8) << " " << int(green) << endl;

		���� red �غ���!
		
		return 0;
	}

<br>

### ��Ʈ�÷��� �ǿ뿹��

	#include <iostream>
	#include <bitset>
	using namespace std;

	int main()
	{
		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
		return 0;
	}

glclear �Լ����� �Ķ���Ͱ� ��û������쿡 ��Ʈ������ ���°��� ȿ�����̴�.
