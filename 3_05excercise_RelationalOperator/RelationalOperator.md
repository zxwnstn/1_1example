## 3-5�� ���� ������

### ����

	#include<iostream>

	int main()
	{
		using namespace std;

		int x, y;
		cin x >> y;
		cout << "Your input values are : " << x <<
			" " << y << endl;

		if ( x == y )
			cout << "equal" << endl;
		if ( x != y )
			cout << "Not equal" << endl;
		if ( x > y )
			cout << "x is greater than y" << endl;
		if ( x < y )
			cout << "x is less than y" << endl;
		if ( x >= y )
			cout << "x is greater than y or equal to y" << endl;
		if ( x <= y )
			cout << "x is less than y or equal to y" << endl;

	}

	<br>

### �ε��Ҽ��� ������ ���迬����

	#include<iostream>
	#include<cmath>

	int main()
	{
		using namespace std;
		double d1 (100 -  99.99);	// 0.01
		double d2 (10 - 9.99 );		// 0.01

		if (d1 == d2)
			cout << "equal" << endl;
		else
		{
			cout << "Not equal" << endl;
			
			if (d1 > d2) 
				cout << "d1 > d2" << endl;
			else
				cout << "d1 < d2" << endl;		// ��°�� d1 > d2
		
		//Ȯ��
		cout << d1 << endl;
		cout << d2 << endl;						// 2���� 0.01�� ����. ?? 
		
		//�󸶳� �ٸ����� Ȯ��
		cout << std::abs( d1 - d2 ) << endl;	//abs�� ���밪�� �ǹ�
												// 5.32907e-15�� �������� ����
		return 0;
		}

 �ΰ��� ������ ������ �����϶� �뷫 ���ٰ� �ϰ� �ʹٸ�

	#include<iosteam>
	#include<cmath>

	int main()
	{
	
		using namespace std;
		double d1 (100 -  99.99);	// 0.01
		double d2 (10 - 9.99 );		// 0.01

		const double epsilon = 1e-10;			// epsilon �� �� �۰� �Ѵٸ�, not equal�� �ɰ��̴�.

		if (std::abs( d1 - d2 ) < epsilon)
			cout << "approximately equal" << endl;
		else 
			cout << "Not equal" << endl;

		return 0;
	}

1.epsilon�� �����ϴ°��� �� �о��� ��Ȳ�� ���� �ٸ���.
2.�ε��Ҽ������� �����̳�. non�� ����� ���迬���ڰ� �ƿ� ������ �����ʴ´�.
