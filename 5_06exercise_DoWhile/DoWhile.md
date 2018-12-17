## Do while 문

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

		}while(selection <= 0 || selection >= -5);		// ;찍는것 주의!!
	
	cout << "your selection" << selection << endl;
	
	return 0;
	}
많이 쓰이지 않지만 반드시 필요할 때가 있다.