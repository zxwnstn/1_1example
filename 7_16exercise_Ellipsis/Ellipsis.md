## 생략부호
함수의 매개변수 갯수를 지정하고 싶지 않다면??

###
	#include<iostream>
	#include<cstdarg> // for ellipsis
	using namespace std;

	double findAverage(int count, ...)		// 파라메터로 들어올 아규먼트 개수를 먼저 받는다.
	{
		double sum = 0;

		va_list list;
		
		va_start(list, count);

		for(int arg = 0; arg < count; ++arg)
			sum += va_arg(list, int);
		va_end(list);
		
		return sum / count;
	}

	int main()
	{
		cout << findAverage(1, 1, 2, 3, "Hello", 'c') << endl;	// 아규먼트 숫자 1이 들어갔으므로 뒤는 싹 무시
		cout << findAverage(3, 1, 2, 3) << endl;				// 2
		cout << findAverage(5, 1, 2, 3, 4, 5) << endl;			// 3
		cout << findAverage(10, 1, 2, 3, 4, 5) << endl;			// 오류 발생

		return 0;
	}
	//위험성과 불편한점
	개수를 아무렇게 넣는것은 좋은데 들어가는 자료형을 다르게 한다면 문제가 될수있다.
	사용하기 어렵고 디버깅도 힘들어서, 초보자가 이용하기 좋지는 않다.
	마지못해서 템플릿과 같이 쓰는것은 고려해 볼수 있다.