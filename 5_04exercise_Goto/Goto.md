## goto

������ ������ ����

<br>

### ���� 
	#incldue<iostream>
	#include<cmath>
	using namespace std;

	int main()
	{
		double x;

	tryAgain : // label
		cout << "Enter a non-negative number" << endl;
		cin >> x;

		if ( x < 0.0 )
			goto tryAgain;

		cout << sqrt(x) << endl;
	}

<br>

	#incldue<iostream>
	#include<cmath>
	using namespace std;

	int main()
	{
		goto skip;	//�������� ���� �ȵǴ� �κ�
					
		int x = 5;	
	skip:
		
		x += 3;		//x�� goto�� ���� ������ �ȵǾ� �ִ� �����̴�.

		return 0;
