#include<iostream>
using namespace std;

int getNumber()
{
	while (1)
	{
		int in;
		cin >> in;
		
		if (cin.fail())
		{
			cin.clear();
			cin.ignore(32767, '\n');
			cout << "�߸� �Է��ϼ˽��ϴ�." << endl;
		}
		else
		{
			cin.ignore(32767, '\n');
			return in;
		}

	}
}

char getOperator()
{
	while (1)
	{
		char op;
		cin >> op;
		cin.ignore(32767, '\n');

		if (op == '+')
			return '+';
		else if (op == '-')
			return '-';
		else if (cin.fail())
		{
			cout << "�߸� �Է� �ϼ˽��ϴ�." << endl;
			cin.clear();
			cin.ignore(32767, '\n');
		}
		else
			continue;
	}
}

int main()
{
	int my_number = getNumber();
	cout << my_number << endl;
	char my_operator = getOperator();
	cout << my_operator << endl;
	return 0;
}