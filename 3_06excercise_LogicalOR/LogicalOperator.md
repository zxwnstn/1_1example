## 3-6�� �� ������

### �Ϲ��� ���

	#include<iostream>

	int main()
	{
		using namespace stdl;
		
		bool = x , y;
		
		//Logical Not operator !
		// �ݴ��
		x = true;
		cout << !x << endl;

		//Logical AND operator &&
		// �ΰ��� true���� true
		x = true;
		y = false;
		cout << ( x && y ) << endl;

		bool hit = true;
		int health = 10;

		if (hit == true && health < 20)	// �� ���� �����ڴ� bool ������ ��ȯ
		{
			cout << "die" << endl;
		}
		else
			health -= 20;

		//Logical OR ||
		// �Ѵ� false�϶��� false
		x = false;
		y = false;
		cout << x || y << endl;

		

		return 0;
	}

### Ʋ�� �����

	
	#include
	using namespace std;

	int main ()
	{
		
		int x = 5;
		int y = 7;
		
		if ( !x == y )								// x != y �� ���� ���
		{
			cout << "x does not equal y" << endl;
		}
		else
			cout << "x equals y " << endl;			// �̰��� ��µǴ� ������?

		return 0;
	}
������ ��Ȯ�ϰ�, �ܼ��ϰ� ǥ���Ѵ�.
������ �������ڸ� �̿��� ��� ���� �ּ��� ������ ()����� �ʿ��ϴ�.

### ���ǻ���
	#include
	using namespace std;

	int main ()
	{
		int x = 1;
		int y = 2;

		if ( x == 1 && y++ == 2 )
		{
			//do something
		}

		cout << y << endl;		//x�� 1�϶��� y�� 3
								//x�� 2�϶��� y�� 2 (why?)

&&�������� ��� **��ǻ�� ��꿡���� �������� false�� �ǹ����� ������ ������ ����**
������ ���ʰ��� false�̹Ƿ� ���ʰ��� ��� ����� false�� �ǹ����� ����

### Ư���� ���

	#include
	using namespace std;

	int main ()
	{
		bool x = ture;
		bool y = false;

		//�� �𸣰��� ��Ģ

		!(x && y) == !x && !y (x)
				  == !x || !y (o)

		// XOR operator

		// false false =  false
		// false ture = true
		// true false = true
		// true ture = false
		// c�� cpp���� XOR operator�� ����.

		if (x != y)
		{
			//���·� �̿��Ѵ�.
		}

### ||�� &&�� ���δٸ�?
	
	#include
	using namespace std;

	int main ()
	{
		bool v1 = true;
		bool v2 = false;
		bool v3 = false;

		bool r1 = v1 || v2 && v3;
		bool r2 = (v1 || v2) && v3;

		cout << r1 << r2 << endl; // 1 0
		
		return 0;

����Ե� || �� &&�� �켱������ �ٸ��� **&&�������� �켱������ �� ����!!**
���� �̳����� �̿��ϴ� �� ����, �׳� ()�� �ļ� ��Ȯ�ϰ� �ڵ��ϴ°� �� ���� �ڵ�����̴�.
	
### ����
(true && true) || false
(false && ture) || ture
(false && true) || false || true
(14 > 13 || 2 > 1) && (9 > 1)
!(2314123 > 2) || 123123 > 2387
