## std::cin 더 잘쓰기

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

			if(std::cin.fail())					// cin.fail은 bool값으로 리턴
			{
				std::cin.clear();				// cin.clear은 입력 초기화
				std::cin.ignore(32767, '\n');	// cin.ignore는 입력의 버퍼를 없애는 함수
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
	}		//숙제 case문으로 바꾸기

	int main()
	{
		int x = getInt();
		char op = getOperator();
		int y = getInt();
		
		printResult(x, op, y);

		return 0;
	}