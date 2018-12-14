## 유징문과 모호성

namespace안의 함수,변수 이름이 겹치면 어떻게 해야 하는가?

<br>

### 함수명이 겹치는 경우

	#include<iostream>
	using namespace std;

	namespace a
	{
		int my_var(10);
		int count(123);
	}

	namespace b
	{
		int my_var(20);
	}

	int main()
	{
		using namespace std;
		//일반적으로 사용하는 cout은 iostream 헤더 안에있는 
		//std네임스페이스 안에 있는 함수 std다
		using namespace a
		using namespace b

		cout << my_var << endl; //my_var is ambigus 에러
								//이름이 같은 변수에 동시에 접근 가능하기 때문에 
								//생기는 오류

		cout << a::my_var << endl;
		cout << b::my_var << endl;
		//또는

		//영역 쪼개기
		using namespace b;
		{
			cout << my_var << endl;
		}
		using namespace a;
		{
			cout << my_var << endl;
		}
		//전역에서 사용하는것은 지양해라!
		
		//namespace std와 겹치는 경우
		using namespace a;	
		cout << count << endl; // std에도 count 함수가 있다.	
							   // 이런 경우에는 다른 방법이없다.
							   
		return 0;
	}