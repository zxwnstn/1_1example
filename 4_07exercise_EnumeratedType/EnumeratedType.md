## ������
�پ��� ���ڸ� ��ȣ������ ǥ���ϱ� ���� �ڷ���

<br>

### 

	#include <iostream>
	#include
	using namespace std;

	int computeDamage(int weapon_id)
	{
		if (weapon_id == 0; )	// sword
		return 1;

		if (weapon_id == 1; )	// hammer
		return 2;
		//�̷��� ���̵�� �ɼ��� ����� ������ �ܿ�� �����.
	}

	enum Color			// ������ ����� ���� �ڷ����̶�� �����ִ�.
	{
		COLOR_BLACK = -3,
		COLOR_RED,
		COLOR_BLUE = 5,
		COLOR_GREEN = 5,
		COLOR_SKYBLUE,
		BLUE			// ù��° ������ �ʱ�ȭ�� �ȵǾ��ٸ�, 0���� ������� ���ڰ� �����ȴ�.
						// ������ ���� ���� ������ �� �ִ�.
						// ������ �⺻�Ҵ��� �������.
						// ���ӽ��� ��ũ�ο� ����
	};					// **����!! ;�� �� �پ�� �Ѵ�, ����!!**

	enum Feeling
	{
		HAPPY,
		JOY,
		TIRED,
		BLUE,			// ���� ���� �޶��̴� �׷��� enum�� ����ó�� �۵��Ѵ�.
						// ���� �̰�� ������ �ϴ� ���� �Ǿ�, ������ ���� �ʴ´�.
						// �ذ����� ���߿�
	};
	

	int main()
	{
		using namespace std;

		Color paint = COLOR_BLACK;
		Color house(COLOR_BLUE);
		Color appe{COLOR_RED}; // cf) {}�� ����ϴ� ������ �̴ϼȶ������̼��� ���ӽ��� ���� �ٸ���.

		cout << paint << endl;
		cout << house << endl;
		cout << appe << endl;

		//enum �ڷḦ int �ڷ������� ���� �ִ°�?
		int color_id = COLOR_RED;
		cout << colo_id << endl;	// �ߵ�
		Color my_color = 3;			// �� �ȵ�
		Color my_color = static_cast<Color>(3); // ĳ������ ��
		
		
		//cin���� ������ �ֳ�?
		cin >> my_color �ȵ�
		
		
		//��ȸ�� ����
		int in_number;
		cin >> in_number;

		if (in_number == 0 ) 
			my_color = COLOR_BLACK;
		//
		if (in_number == static_cast<Color>(0))
			my_color = static_cast<Color>(0);		// �̷������� �� ���� �ִ�.

		// string���� �Է¹ޱ�
		#include<string>  ��� �߰�

		string str_input;
		std::getline(cin, str_input);

		if (str_input == "COLOR_BLACK")			// ��Ÿ�� ���ɼ��� �ʹ� ���Ƽ� ��õ���� �ʴ´�.
			my_color = static_cast<Color>(0);
	}
