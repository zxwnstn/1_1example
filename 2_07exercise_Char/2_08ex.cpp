#include<iostream>
using namespace std;

int Ascii(char a)
{
	return int(a);
}

int main()
{          ///��⼷ �޴�������.
	cout << "�����������������������������������������" << endl;
	cout << "��                                                                            ��" << endl;
	cout << "�� ���ڸ� �Է¹޾� Ascii ���ڷ� ��ȯ�մϴ�.   0��  �����ٸ�   ���� �˴ϴ�.^^  ��\n";
	cout << "��                                                                            ��" << endl;
	cout << "�����������������������������������������" << endl;
	while (1)
	{
		char ascii;
		cout << "���ڸ� �Է��Ͻÿ� : ";
		cin >> ascii;
		cout << endl;
		cout << "�ءء�" << endl;
		if (ascii == '0')
		{
			cout << "��" << '\a' << "��" << endl;
			break;
		}

		else
			cout << Ascii(ascii) << endl;

		cout << "�ءء�" << endl;
	}
	return 0;
}