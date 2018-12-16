## switch case
Ư���� ��쿡 if�� ���� �ξ� �����Ҽ� �ִ�.
<br>
### �ʿ��� ���
	#include<iostream>
	using namespace std;

	enum class Colors
	{
		BLACK,
		WHITE,
		RED,
		GREEN,
		BLUE
	};

	 void printcolorName(Colors color)
	 {
		if(color == Colors::BLACK)
			cout << "Black" << endl;
		if(color == Colors::WHITE)
			cout << "White" << endl;
		...	// Ÿ���� �ϱ� �ſ� ����...
		...
	 }

	 int main()
	 {

	 	 return 0;
	 }


### switch case�� �̿�
	int x;
	cin >> x;

	switch(x)
	{
		case 0:				// case �ڿ��� ;�� �ƴ϶� �ݵ�� : �� �ٴ´�.
		cout << "Zero";
		case 1:
		cout << "One";
		case 2:
		cout << "Two";		// 0�Է½� Zero,One,Two �� ��µ�
							// ������ �� �ٺ��� �ؿ��� �� ����ȴ�.
							// �ǵ������� �̷������� �� ���� �ִ�.
	}		
	cout << endl;

	switch(x)
	{
		case 0:
			cout << "Zero";
			break;
		case 1:
			cout << "One";
			break;
		case 2:
			cout << "Two";		
			break;			// ���� break�� �־��־�� �ؿ����� ������ �ȵȴ�.	
	}

### switch case ����
	void printcolorName(Colors color)
	{
	switch(color)
	case Colors::BLACK:
		cout << "Black";
		break;
	case Colors::WHITE:
		cout << "White";
		break;
		...
		...
	 }
<br>
	void printcolorName(Colors color))
	{
		switch (static_cast<int>(color))
		{
			case 0:				//
				cout << "Black";
				break;
			case 1:
				cout << "White";
				break;
			case 2:
				cout << "Red";
			...
			...
		}
		cout << endl;
	}

### switch�� ���ǻ��� case������ �����̿�� defalt
	#include<iostream>
	using namespace std;

	int main()
	{
		int x;
		cin >> x;

		switch(x)
		{	
		//----------------------------------------------------------
			int a:
			int b =5;		// ����ġ�� case�� �տ��� ���� ������ �����ϳ�, �ʱ�ȭ�� �ȵȴ�.
			case 0:	
				a = 1		// �� ������ ���̽��� �ȿ����� �����ϴ�.
		//----------------------------------------------------------
			case 1:
				int y;
				break;
			case 2:
				y = 2;
				break;
			case 3:
				cout << y << endl; // �̰��� ������
				break;
		//-----------------------------------------------------------
			case 4:
				int z;
				z = 5;
				break;
			case 5:
				cout << y << endl;	// �̰����� �����Ⱚ�� ��
				break;	// �̷��� ���� �ڵ����ٴ� {}�� �ι����°� �ְ��!!
		//------------------------------------------------------------
			defalt:		// case������ �ȵ� ��� ��쿡 ����
				cout << "Undifined input" << endl;
				//defalt�ؿ� break�� ���°��� �Ϲ����̴�.
				//break�� ���� �ִ� ������ �Ǽ��� ���̱� ���ؼ���.
		}
	}
