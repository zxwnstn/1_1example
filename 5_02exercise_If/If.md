## ���ǹ� if

### ����

	#include<iostream>
	using namespace

	int main()
	{
		if(bool type����)		// true�� ����, false�� ������� ����
		{
			���๮
		}
		else					// ���� false�� ��� �����
		{
			���๮
		}
		return 0;
	}

### �⺻ ����

	#include<iostream>
	using namespace

	int main()
	{
		int x;
		cin >> x;

		if(x > 10)		
			cout << x << "is greater than 10" << endl;
			//���๮�� 1���϶��� �߰�ȣ�� �ʿ����.
		
		else
		{
			cout << x << "is not greater than 10" << endl;
			cout << "Test 1" << endl;
		}	//���๮�� 2�� �̻��϶��� �߰�ȣ�� �ݵ�� �ʿ�

		return 0;
	}
	
<br>

���๮ ������ ����� ������ ���� 

	int main()
	{
		int x;
		cin >> x;
		
		if (1)			//�׻� ���� ��Ų�ٴ� �ǹ�
			int x = 5;	//�ߺ����� ������ ���� �ʴ´�. �ٸ�
						//���� ���� x�μ� if���� ����� ���� �������.
		else 
			int x = 6;

	}

<br>
	int main()
	int x;
	cin >> x;

	if (x>10)
		cout << "X is greater than 10" << endl;
	else if (x<10)		// ���� ������ �����ѻ��¿��� ����
		cout << "X is less than 10" << endl;
	else
		cout << "x is exactly 10" << endl;

	//������ if�� else���ȿ� if���� (����)������� �ʴ´�.

<br>
	int main()
	int x;
	cin >> x;

	if (x >= 10)
		if (x <= 20)
			cout << "x is between 10 and 20" << endl;
		else 
	else				//	else�� ��ġ???

	//�߰�ȣ�� ��Ȯ�ϰ� ������
	if (x >= 10)
	{
		if (x <= 20)
			cout << "x is between 10 and 20" << endl;
		else 
			cout << "..." << endl;
	}

	//�Ǵ�
	if (x >= 10)
	{
		if (x <= 20)
			cout << "x is between 10 and 20" << endl;
	}
	else 
		cout << "..." << endl;

### ���������� �̿�

	int main()
	int x, y;
	cin >> x >> y;

	if (x > 0 && y > 0)
		cout << "both numbers are positive" << endl;
	else if (x > 0 || y > 0)
		cout << "one of the numbers is positive" << endl;
	else
		cout << "Neither number is positive" << endl;

### ���α׷� ���Ό��

	int main()
	int x;
	cin >> x;

	if ( x > 10)
		cout << "A" << endl;
	else if ( x == -1 )
		return 0;			// main�� return�� �������Ƿ�, ���α׷� ����
	else if ( x < 0 )
		cout << "B " << endl;
	cout << "Hello " << endl;

### ���Կ������� ����
	int main()
	{
		int x;
		cin >> x;

		if(x=o)				// �� ������ x=0; if(x)�� ����.
			cout << x << endl;

		cout << x << endl;	// ���� ��µ� 0�̵� ���̴�.

		return 0;
	}
