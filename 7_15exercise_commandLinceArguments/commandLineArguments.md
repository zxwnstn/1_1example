## ����� �μ�

	#include<iostream>
	#include<string>
	using namespace std;

	int main(int argc, char *argv[])
	{
		for (int count = 0; cout < argc; count++)
		{
			string argv_single = argv[count];
			
			
			if(count == 1)
			{
				int input_number = stoi(argv_single);
				cout << input_number + 1 << endl;
			}
			else
				cout << argv_single << endl;
			cout << argv[count] << endl;		//�������� �ּҿ� �̸��� �� ��
		}
	}