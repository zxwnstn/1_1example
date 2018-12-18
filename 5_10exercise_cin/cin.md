## std::cin �� �߾���

### cin.fail(), cin.clear();, cin.ignore(32767, "\n")

	#include<iostream>
	using namespace std;

	int getInt()
	{
		while(1)
		{
			cout << "Enter an integer number : ";
			int x;
			cin >> x;

			if(std::cin.fail())					// cin.fail�� bool������ ����
			{
				std::cin.clear();				// cin.clear�� �Է� �ʱ�ȭ
				std::cin.ignore(32767, '\n');	// cin.ignore�� �Է��� ���۸� ���ִ� �Լ�
				cout << "Invalid number, please try again" << endl;
			}
			
			else
			{
				std::cin.ignore(32767, '\n');
				return x;
			}
		}

	}

	char getOperator()
	{
		while(1)
		{
			cout << "Enter an operator (+, -) : ";
			char op;
			cin >> op;
			if (op == '+' || op == '-')
				return op;
			else
				cout << "Invalid operator, please try again" << endl;
		}	

		return op;
	}

	void printResult(int x, char op, int y)
	{
		if (op == '+') cout << x + y << endl;
		else if (op == '-') cout << x - y << endl;
		else
		{
			cout << "invalid operator" << endl;
		}
	}		//���� case������ �ٲٱ�

	int main()
	{
		int x = getInt();
		char op = getOperator();
		int y = getInt();
		
		printResult(x, op, y);

		return 0;
	}