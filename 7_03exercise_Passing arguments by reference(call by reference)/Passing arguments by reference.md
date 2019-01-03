## 참조에 의한 인수 전달
아주 자수 쓰임

###
	#include<cmath>
	#include<iostream>
	#include<vector>
	using namespace std;

	void addOne(int &y)
	{
		y = y + 1;
	}

	void GetSinCos(const double &degrees, double &sin_out, double &cos_out)	//입력으로 들어오는것을 앞에두고
													//출력으로 콜바이레퍼런스 할것을 뒤에두는 것이 일반적이다.
	{
		static const double pi = 3.141592;				//스택틱 선언을 하면 재선언을 하지 않음
		const double radians = degrees * pi / 180.0;

		sin_out = std::sin(radians);
		cos_out = std::cos(radians);

	}

	//레퍼런스의 문제점?
	void foo(int &x)						//const int &x 를 하면 쓸수 있다. 매개변수는 이렇게 쓰는 것이 일반적이다.
	{
		cout << x << endl;
	}

	void foo (int *&ptr)					// 이렇게 하면 쓸수있다.
	{										// 어떻게 해석하는것이 좋을까?
		cout << ptr << " " << &ptr >> endl; // typedef int* pint라고 정의 해보자
											// 그렇다면 pint &ptr 
											// 즉 포인터 변수를을 참조 변수로 가저오겟다는 것이다.
	}

	void Print_element(int (&arr)[4])		// 정적배열의 참조호출을 할때는 반드시 원소수를 써주어야 한다.
	//void Print_element(vector<int>& arr)
	{
	
	}


	int main()
	{
		int x = 5;
		cout << x << " " << &x << endl;		// 5

		addOne(x);							// x라는 변수 자체를 넘겼다.
											// &y == &x라는 뜻

		cout << x << " " << &x << endl;		// 6


		double sin(0.0);
		double cos(0.0);

		GetSinCos(30.0, sin, cos);

		cout << sin << " " << cos << endl;


		foo(6);								// 넘기는 것이 주소가 없어서 참조할수가 없다


		//포인터에 대한 레퍼런스 보내기
		int x = 5;
		int *ptr_x = &x;
		foo(ptr);							//포인터 변수를 레퍼런스로 받으려면??
		cout << ptr << " " << &ptr >> endl; 


		//배열을 파라미터로 전달하기
		int arr[]{1, 2, 3, 4, };
		vector<int> v{1, 2, 3, 4, 5}
		PrintElements(arr);
		PrintElements(v);
		return 0;
	}