## Do while ��

###
	#include <iostream>
	using namespace std;

	int main()
	{
		int selection; // must be declared outside do/while loop

		do
		{
			cout << "1, add" << endl;
			cout << "2, sub" << endl;
			cout << "3, mult" << endl;
			cout << "4, div" << endl;
			cin >> selection;

		}while(selection <= 0 || selection >= -5);		// ;��°� ����!!
	
	cout << "your selection" << selection << endl;
	
	return 0;
	}
���� ������ ������ �ݵ�� �ʿ��� ���� �ִ�.