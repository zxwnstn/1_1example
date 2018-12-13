#include<iostream>
#include<bitset>
using namespace std;

void main()
{
	
	unsigned int my_pixel_color;
	cout << "rgb�÷��� 16������ �Է��� �ּ��� ex. 0xFFFFFF" << endl;
	cin >> my_pixel_color;											// 16������ �޴°��� �Ұ�
	cout << bitset<24>(my_pixel_color) << endl;

	/*������ rgb ���� ����
	unsigned int my_pixel_color = 0xDAA520;
	cout << "my_pixel_color is " << bitset<24>(my_pixel_color) << ", " << (int)my_pixel_color << endl; //2������ 10������ ����
	cout << endl;*/

	//����ũ ����
	cout << "�� ������ ����ũ�� ����մϴ�" << endl;
	unsigned int blue_mask = 0x0000FF;
	cout << "��縶��ũ "  << bitset<24>(blue_mask) <<endl;
	unsigned int green_mask = 0x00FF00;
	cout << "�׸�����ũ " << bitset<24>(green_mask) << endl;
	unsigned int red_mask = 0xFF0000;
	cout << "���帶��ũ " << bitset<24>(red_mask) << endl;
	cout << endl;

	// &����� >>������ ���� ���ϴ� �� �����ϱ�
	cout << "����ũ�� ������ �÷� ���ڸ� �ɷ����ϴ�." << endl;
	unsigned int blue = my_pixel_color & blue_mask;
	cout << "������� " << bitset<24>(blue) << endl;
	unsigned int green = (my_pixel_color & green_mask);
	cout << "�׸����� " << bitset<24>(green) << endl;
	unsigned int red = (my_pixel_color & red_mask);
	cout << "�������� " << bitset<24>(red) << endl;

	//10 ������ ��ȯ
	cout << "10������ ��ȯ�մϴ�!" << endl;
	cout << bitset<8>(blue) << "\t ����" <<blue << endl;
	cout << bitset<8>(green >> 8) << "\t �׸���" << (green >> 8) << endl;
	cout << bitset<8>(red >> 16) << "\t �����" << (red >> 16) << endl;

}	