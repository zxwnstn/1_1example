#include<iostream>
using namespace std;

enum Color
{
	COLOR_BLACK,
	COLOR_WHITE,
	COLOR_RED,
	COLOR_BLUE,
	COLOR_GREEN,
};

int main()
{
	//eunm �ڷ��� ����
	Color paint = COLOR_RED;
	cout << paint << endl;

	//enum�� ������ ó�� ����
	int a = paint;
	cout << a << endl;

	//cin �޾ƺ���
	/* Color paint_2;
	   cin >> paint_2; */	//�ȵ�
	
	//��ȸ�� cin �޾ƺ���
	Color paint_2;
	int input_num;
	int i;

	cout << "paint_2�� ������ ���Ϸ� �մϴ�. ��ȣ�� �Է��� �ּ���" << endl;
	cout << "Clor�� ��ȣ ���̺� �Դϴ�." << endl;
	cout << "Black 0" << endl;
	cout << "White 1" << endl;
	cout << "Red 2" << endl;
	cout << "Blue 3" << endl;
	cout << "Green 4" << endl;
	cin >> input_num;
	
	for (i = 0; i <= 4; i++)
	{
		if (input_num == i)
			paint_2 = static_cast<Color>(i);
	}
	
	cout << paint_2 << endl;

	return 0;

}
