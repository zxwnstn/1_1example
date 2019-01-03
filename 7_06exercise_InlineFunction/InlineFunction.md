## 인라인 함수

###
	#include<iostream>
	using namespace std;

	inline int min(int x, int y)		//인라인으로 함수를 지정하면
	{									//함수가 아닌것처럼 작동된다.
		return x > y ? y : x;
	}

	int main()
	{
		cout << min(5, 6) << endl;
		cout << min(3, 2) << endl;

		cout << (5 > 6 ? 6 : 5) << endl;
		cout << (3 > 2 ? 3 : 2) << endl;	//즉 이러한 형태로 메인이 바뀌게(컴파일) 되는 것이다.
	}
	//따라서 동작속도는 빨라진다.
	inline 키워드는 권장의 의미이다.
	즉 컴파일러가 보고, 판별한다.
	따라서 모든 함수를 inline으로 선언해도 속도가 빨라지지 않을 수 있으며
	요즘 나오는 스마트 컴파일러의 경우
	인라인 선언이 안되있어도 자신의 판단하에 인라인으로 바꾸는 경우도 있다.
	따라서 요즘에는 인라인을 쓸필요는 굳이 없다고 본다.

	