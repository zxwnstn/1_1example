## ���� ���� ������(������ Ŭ����)

enum�� ���� ����

### enum�� ����

	#include<iostream>
	using namespace std;

	int main()
	{
		enum Color
		{
			RED,
			BLUE,
		};

		enum Fruit
		{
			BANANA,
			APPLE
		};

		Color color = RED;
		Fruit fruit = BANANA;
		if ( color == fruit)
			cout << "Color is fruit?" << endl;	// ���� ����? ��ȯ�� ���� ���ٰ� �Ҽ��ֵ� 

	}
<br>

### enum class

	#include<iostream>
	using namespace std;

	int main()
	{
		enum class Color				// ��� ������ ������ ����
		{
			RED,
			BLUE,
		};

		enum class Fruit
		{
			BANANA,
			APPLE
		};

		Color color = Color::RED;
		Fruit fruit = Fruit::BANANA;

		if ( color == fruit )			// �����ϵ��� ����
			cout << "Color is fruit" << endl; 
		if ( static_cast<int>(color) == static_cast<int>(fuit) )
		//�� ���·� �Ҽ��� ������, �츮�� ���ϴ� �ٴ� �ƴϴ�.

		//���� enum�̶�� �񱳰� �����Ѱ�?
		Color color1 = Color::RED;
		Color color2 = Color::BLUE;
		
		if( color1 == color2 )
			cout << "Same color" << endl;
		else
			cout << "Is not same color" << endl;	//	�� ����
		
		return 0;
	}	