## Nested types
Ŭ���� �ȿ� ���Ե� �ڷ���

	#include<iostream>

	/*enum FruitType
	{
		APPLE, BANANA, CHERRY,
	};	//�̶� FruitType�� class Fruit�ȿ����� ���� ���ɼ��� �����ϴ�.
		// �̷� ��� �� enum�� ������ ������ �ִ�.
	class Fruit
	{
	private:
		FruitType m_type;

	public
		Fruit(FruitType type) 
			: m_type(type)
		{}

		FruitType getType() { return m_type; }
	};*/


	class Fruit
	{
	public:
		enum FruitType
		{
			APPLE, BANANA, CHERRY,
		};

	private:
		FruitType m_type;

	public
		Fruit(FruitType type) 
			: m_type(type)
		{}

		FruitType getType() { return m_type; }
	};

	/*int main()
	{
		Fruit apple(APPLE);

		if(apple.getType == APPLE)
		{
			cout << "Apple" << endl;
		}
		return 0;
	}*/

	int main()
	{
		Fruit apple(Fruit::APPLE);

		if(apple.getType == Fruit::APPLE)
		{
			cout << "Apple" << endl;
		}
		return 0;
	}

	//enumclass�� �����
	class Fruit
	{
	public:
		enum class FruitType
		{
			APPLE, BANANA, CHERRY,
		};

	private:
		FruitType m_type;

	public
		Fruit(FruitType type) 
			: m_type(type)
		{}

		FruitType getType() { return m_type; }
	};


	int main()
	{
		Fruit apple(Fruit::FruitType::APPLE);

		if(apple.getType == Fruit::FruitType::APPLE)
		{
			cout << "Apple" << endl;
		}
		return 0;
	}

	Ŭ���� �ȿ��� Ư��Ŭ���� �ȿ�
	Innerclass , struct, enum�� ���°��� nested type�̶�� �Ѵ�.