## ���Ǻ� ������

<br>

### sizeof

� ���������� ũ�� �˱�

	include<iostream>

	int main()
	{
		using namespace std;
		float a;
		sizeof(float);	// ������ Ÿ���� �־ �ȴ�. Ŭ������ ��밡��
		sizeof(a);		// 4byte , 32bit

		return 0;
	}

sizeof �� �Լ��ϱ�?
1. sizeof�� Operator��! ǥ�ؿ��� �׷��� ����
2. �������� ������ ()�� �Ƚᵵ �ȴ�.

<br>

###  comma operator

	include<iostream>

	int main()
	{
		using namespace std;
		
		int x = 3;
		int y = 10;
		int z = (++x, ++z);		// �տ��� ����� �ڿ����� ������ ����
								// �ݺ��� �ȿ����� ���� ����Ѵ�.

		int a = 1 , b = 10;		// ���⼭ , �� �ܼ� ���б�ȣ�� �̿�Ǵ°�
		int z;

		z = a, b ;				// 10�� ��� 
		cout << z << endl;		// 1??
								// = �����ڰ� , ������ ���� �켱������ ���� ����!
		z = ( a++ , a + b);
		cout << z << endl;		//

		cout << x << " " << y << " " << z << endl;
		return 0;
	}

���� �־� ���� �ؾߵ������� �ִ�. ��쿡 ���� �׳� Ǯ��°� �� �������� �ִ�.

<br>

### conditional operator (arithmetic if)

c�� cpp������ 3�׿����ڰ� �ִ�.

	include<iostream>

	int main()
	{
		using namespace std;

		bool onsale = true;

		inf price;

		if (onsale)
			price 10;
		else
			price 100;		

		cout << price << endl;
		// �̶� price�� const�� ���� �ʹٸ�??
		const int price (onsale == true) ? 10 : 100 ;
		// �̷��� 3�� �����ڰ� ���� �����ϰ� ���ϼ� �ִ�.
		// if�� ���δ� price�� const �����Ҽ� ���� �����̴�.

		return 0;
	}
������ �����ϰų� ���� �����ϴٸ� ���� �ʴ°� ����.

>����

	int main()
	{
	int x = 5;
	cout << ( x % 2 == 0 ) ? "even" : "odd" << endl;
	return0;
	}
�� �ڵ尡 ������ ���� ������ �ذ����� �˾ƺ���!