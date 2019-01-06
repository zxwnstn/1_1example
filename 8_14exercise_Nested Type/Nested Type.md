## Nested types
클래스 안에 포함된 자료형

	#include<iostream>

	/*enum FruitType
	{
		APPLE, BANANA, CHERRY,
	};	//이때 FruitType은 class Fruit안에서만 쓰일 가능성이 농후하다.
		// 이럴 경우 이 enum을 안으로 넣을수 있다.
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

	//enumclass로 만들기
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

	클래스 안에는 특정클래스 안에
	Innerclass , struct, enum을 쓰는것이 nested type이라고 한다.