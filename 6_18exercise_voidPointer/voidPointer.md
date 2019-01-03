## void 포인터
generic pointer

###
	#include<iostream>
	using namespace std;

	int main()
	{
		int i =5;
		float f =3.0;
		char c ='a';

		void *ptr = nullptr;

		ptr = &i;
		ptr = &f;
		ptr = &c;

		int *ptr_i = &i;			//일반적인 포인터라면..
		cout << ptr_i << endl;
		cout << ptr_i+1 << endl;	//주소연산 가능

		//보이드 포인터는 불가능하다.
		//+n를 할때 몇 바이트를 더해주어야 하는지 모르기 때문이다.

		//cout << &c << " " << ptr << endl; //cf 이건 왜안될까?
		cout << &f << " " << ptr << endl; 

		cout << *ptr << endl;		// 자료형이 무엇인지 몰라서 디레퍼런싱역시 되지 않는다.
		cout << *static_cast<float*>(ptr) << endl;	//강제로 형변환을 통해 디레퍼런싱은 가능하다.

		//그렇다면 이러한 보이드 포인터는 왜 쓰는걸까??
 	}

