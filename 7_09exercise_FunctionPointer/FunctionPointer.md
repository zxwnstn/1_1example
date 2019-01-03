## 함수 포인터

	#include<iostream>
	#include<array>
	using namespace std;

	int func()
	{
		return 5;
	}

	int goo()
	{
		return 10;
	}

	int goo2(int x)
	{
		return 6;
	}

	int main()
	{
		int(*fcnptr)(); = func;		//함수 포인터 만들기, 함수도 포인터다!
		cout << fcnptr() << endl;

		fcnptr = goo;				//포인터 대상 바꾸기
		cout << fcnptr() << endl;
									
		int(*fcnptr2)(int) = goo2;  //리턴되는 자료형과, 매개변수의 자료형도 맞춰야 한다.

	}

	int main()
	{
		array<int, 10> my_array = {1,2,3,4,5,6,7,8,9,0};

		for(auto element : my_array)
		{
			if(element%2 == 0)
				cout << element;
			cout << endl;
		}
	}

### 프린트 함수에 불타입을 넣어서 출력하기
	void PrintNumbers(const array<int, 10> &my_array, bool print_even)
	{
		for(auto element : my_array)
		{
			if(print_even && element%2 == 0)
				cout << element;
			if(!print_even && element%2 == 1)
				cout << element;
		}
	}

	int main()
	{
		array<int, 10> my_array = {1,2,3,4,5,6,7,8,9,0};
		PrintNumbers(my_array, true);	// 짝수 출력
		PrintNumbers(my_array, flase);	// 홀수 출력

	}
### 프린트 함수에 함수를 파라미터로 받아서 출력하기
	bool isEven(const int& number)
	{
		if (number % 2 == 0) return true;
		else return false;
	}

	bool isOdd(const int& number)
	{
		if (number % 2 !== 0) return true;
		else return false;
	}

	void PrintNumbers(const array<int, 10> &my_array, bool(*check_fcn)(const int&))
	//void PrintNumbers(const array<int, 10> &my_array, bool(*check_fcn)(const int&) = isEvne)
	{
		for(auto element : my_array)
		{
			if(check_fcn(element) == true)
				cout << element;
		}
	}

	int main()
	{
		array<int, 10> my_array = {1,2,3,4,5,6,7,8,9,0};

		PrintNumbers(my_array, isEven);	// 짝수 출력
		PrintNumbers(my_array, isOven);	// 홀수 출력

		//Printnumber(my_array);		// 디폴트인 isEven함수가 호출된다.
	}


### 긴 파라미터 자료형을 단순하게 바꿔주기 (type def or using)
		bool isEven(const int& number)
	{
		if (number % 2 == 0) return true;
		else return false;
	}

	bool isOdd(const int& number)
	{
		if (number % 2 !== 0) return true;
		else return false;
	}

	typedef bool(*check_fcn_t)(const int&);
	using check_fcn_t = bool(*)(const int&);

	void PrintNumbers(const array<int, 10> &my_array, bool(*check_fcn_t)(const int&) = isEvne)
	void PrintNumbers(const array<int, 10> &my_array, check_fcn_t check_fcn_t = isEven)			//타입디프 도는 using을 쓴 형태
	{
		for(auto element : my_array)
		{
			if(check_fcn(element) == true)
				cout << element;
		}
	}

	int main()
	{
		array<int, 10> my_array = {1,2,3,4,5,6,7,8,9,0};

		PrintNumbers(my_array, isEven);	// 짝수 출력
		PrintNumbers(my_array, isOven);	// 홀수 출력

		//Printnumber(my_array);		// 디폴트인 isEven함수가 호출된다.
	}


###	functional 이용하기
	#include<functional>							functional 사용법

		bool isEven(const int& number)
	{
		if (number % 2 == 0) return true;
		else return false;
	}

	bool isOdd(const int& number)
	{
		if (number % 2 !== 0) return true;
		else return false;
	}

	void PrintNumbers(const array<int, 10> &my_array, function<bool(const int&)> chek_fcn = isEvne)
	{
		for(auto element : my_array)
		{
			if(check_fcn(element) == true)
				cout << element;
		}
	}

	int main()
	{
		array<int, 10> my_array = {1,2,3,4,5,6,7,8,9,0};

		function<bool(const int&)> fcnptr = isEven;
		PrintNumbers(my_array, fcnptr);	// 짝수 출력

		fcnptr = isOdd;
		PrintNumbers(my_array, fcnptr);	// 홀수 출력

		Printnumber(my_array);		// 디폴트인 isEven함수가 호출된다.
	}