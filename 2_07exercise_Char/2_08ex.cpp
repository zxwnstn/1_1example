#include<iostream>
using namespace std;

int Ascii(char a)
{
	return int(a);
}

int main()
{
	cout << " 문자를 입력받아 Ascii 숫자로 반환합니다.\n 0을 누른다면 \n\t 종료 됩니다.^^\n";
	while (1)
	{
		char a;
		cout << "문자를 입력하시오" << endl;
		cin >> a;

		if (a == '0')
		{
			cout << '\a' << endl;
			break;
		}
		
		else
			cout << Ascii(a) << endl;

		
	}
	return 0;
}