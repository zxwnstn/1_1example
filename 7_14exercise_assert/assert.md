## 단언하기

###
	#include<cassert>
	#include<iostream>
	using namespace std;

	void PrintValue(const array<int, 5> &my_array, const int& ix)
	{
		assert(ix >= 0);
		assert(ix <= my_array.size()-1);			//assert 장치해주기
		//assert(ix >= 0 && ix <= my_array.size()-1)// 두개로 나눠서 쓰는것이 좀더 정확

		cout << my_array[ix] << endl;
	}

	int main()
	{
		const int number = 5;

		//넘버 변수의 값은 5여야만 함.
		//디버그시 주석처리보다 효율적이고 바로바로 발생되는 오류의 지점을 알수있다
		assert(number == 5);			// release mode에서는 작동하지 않음

		array<int, 5> my_array{1,2,3,4,5}
		cout << my_array[5] << endl;
		printValue(my_array, 100)		// 친구가 와서 100을 넣는다면?

		return 0;
	}

### 스태틱 assert (컴파일 타임에서 오류 발생)

	#include<iostream>
	#include<array>
	#include<assert>
	using namespace std;

	int main()
	{
		const int x =5;

		assert(x == 5);

		static_assert(x == 5, " 문구 남기기");	//컴파일 타임에 오류 발생시키기


	}