#include<iostream>
using namespace std;

int Ascii(char a)
{
	return int(a);
}

int main()
{          ///김기섭 메뉴수정함.
	cout << "■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■" << endl;
	cout << "■                                                                            ■" << endl;
	cout << "■ 문자를 입력받아 Ascii 숫자로 반환합니다.   0을  누른다면   종료 됩니다.^^  ■\n";
	cout << "■                                                                            ■" << endl;
	cout << "■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■" << endl;
	while (1)
	{
		char ascii;
		cout << "문자를 입력하시오 : ";
		cin >> ascii;
		cout << endl;
		cout << "※※※" << endl;
		if (ascii == '0')
		{
			cout << "※" << '\a' << "※" << endl;
			break;
		}

		else
			cout << Ascii(ascii) << endl;

		cout << "※※※" << endl;
	}
	return 0;
}