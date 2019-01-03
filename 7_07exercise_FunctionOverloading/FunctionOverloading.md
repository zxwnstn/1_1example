## 함수 오버로딩
같은 이름의 함수 여러개 사용하기

###
	#include<iostream>
	#include<string>
	using namespace std;

	int addInt(int x, int y)
	{
		return x + y;
	}

	double addDouble(double x, double y)
	{
		return x + y;
	}
	//이러한 형태를

	int add(int x, int y)
	{
		return x + y;
	}

	double add(double x, double y)
	{
		return x + y;
	}
	//이러한 형태로 바꿀수있다.
	//알아야 할점은 컴파일러가 찾아서 parameter 의 자료형에 부합하는 함수를
	//결정한다는 것이다. 즉 컴파일 타임이라는 소리다.

	int add(double x, double y)
	{
		return x + y;
	}

	double add(double x, double y)
	{
		return x + y;
	}
	//리턴 타입만 다른 경우에는 오버로딩이 안된다.

	int getRandomValue(){};
	double getRandomValue(){};
	// 파라미터가 없을땐 어떻게 할수있을까?
	// 쓰지않는 파라미터를 넣어준다.
	void getRandom(int &x){};
	void getRandom(double &x){};
	// 이런식으로 우회하는 방법이 있겟다.

	int main()
	{
		int x;
		getRandom(x);

		//int x = getRandom(int());
		//int x = getRandom(int_dummy);		//사용하지 않는 인풋 더미
	}

	typedef int my_int;

	void print(int x){};
	void print(my_int x){};	//	타입디파인 으로는 눈속임 할수 없다.

	//매칭이 제대로 되지않는 현실적인 경우1 - 매칭되는것이 없어서 억지로 넣는 경우

	void print(char *value){};
	void print(int value){};
	int main()
	{
		print(0);		//정확히 할수있음
		print('a');		//인티저로 인식
		print("a");		//매치 되는 것이 없음
		//함수 오버로딩을 할때는 데이터 타입의 심도깊은 주의가 필요하다.
	}
	void print(const char *value){};로 하면 됨

	//매칭이 제대로 되지않는 현실적인 경우2 - 매칭되는 것이 여러개 일때
	void print(unsigned int value){};
	void print(float value){};
	int main()
	{
		print('a');
		print(0);
		print(3.141592);

		//명확하게 해주어서 모호성을 제거하자.

		print((unsigned int)'a');
		print(0u);		// 0뒤에 u를 붙이면 unsigned 가 됨
		print(3.141592f);
	}
