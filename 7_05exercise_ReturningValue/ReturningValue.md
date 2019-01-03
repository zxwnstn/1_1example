##다양한 반환 값들
값, 참조, 주소, 구조체, 튜플

###
	#include<iostream>
	using namespace std;

	int GetValue(int x)
	{
		int value = x * 2;
		return value;
	}

	int main()
	{
		int value = GetValue(3);		// 단점 복사 생성이 여러번 일어난다.
										// 데이터가 많다면 (구조체나 클래스) 오래걸릴수 있다.

		return 0;
	}

	int* GetValue(int x)
	{
		int value = x * 2;
		return &value;
	}

	int main()
	{
		int value = *GetValue(3);		// 권장하지 않는다. 사라질 변수를 디레퍼런스 하기 때문이다.
		int *valude = GetValue(3);		// 더 위험하다. 변수는 사라졌는데 메모리 주소만 있다??
										// 굉장히 위험할수 있다.

		return 0;
	}

	//팩토리 패턴? 동적메모리 주소값 리턴
	int* allocateMemory(int size)
	{
		return new int=[size];
	}

	
	int main()
	{
		int *array = allocateMemory(1025);	// 일반적으로 힘든 부분이있다.

		delete[] array;						// delete 는 메인에 있고 new는 함수안에 있다?

		return 0;
	}

	//return by refernce
	int& GetValue(int x)
	{
		int value = x * 2;					
		return value;						//이부분에서 int &value는 일시적으로 남아있다.
	}

	int main()
	{
		int value = Getvalue(5);		//비교적 안전
		int &value = Getvalue(5);		//문제가 생길 요지가 크다

		cout << value << endl;
		cout << value << endl;			//남아있던 레퍼런스가 사라짐
										//그 주소값은 참조하고 있으므로 쓰레기 값이 나옴	
	}

	//return by refernce2
	#include<array>

	int& get(array<int,100>& my_array, int ix)
	{
		return my_array[ix];			//my_array[30]의 참조연산자를 리턴
	}

	int main()
	{
		std::array<int, 100> my_array;
		my_array[30] = 10;

		get(my_array, 30) = 1024;		//이런 패턴의 사용은 아주많다.
		cout << my_array[30] << endl;	//어레이의 요소에 대한 변수명처럼 접근 할수있다.

		//이를 테면
		get(my_array, 30) *= 10;		//이런식으로 사용이 가능해 진다.
										//이런타입을 많이 쓰자!
	}
	

	//여러개를 리턴을 받고 싶다면??
	//일반적인 방법으로는 스트럭처 이용

	 struct S{
	 	 int a, b, c, d;
	 };

	 S getStruct()
	 {
	 	 S my_s{1, 2, 3, 4};
	 };

	 int main()
	 {
	 	 S my_s = getStruct();		// 함수하나를 만들때마다 구조체 하나를 짜야된다??
									// 비 효율적..

		 return 0;
	 }

	 #include<tuple>

	 tuple<int, double> getTuple()
	 {
	 	 int a =10;
		 double d = 3.14
		 return make_tuple(a,d);
	 }

	 int main()
	 my_tp = getTuple()
	 cout << get<0>(my_tp) << endl;		// a
	 cout << get<1>(my_tp) << endl;		// d  아직도 불편...

	 c++17에서 추가된 기능

	 auto[a, d] = getTuple();
	 cout << a << d << endl;
