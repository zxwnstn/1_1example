## 참조와 const

	#include<iostream>
	using namespace std;

	int main()
	{
		int x = 5;
		int &ref_x = x;

		const int x = 5;
		int &ref_x = x;			// 역시 불가능
		const int &ref_x = x;	// 역시 가능

		const int &ref_2 = ref_x;

		int x= 5;
		int &ref_x = x;
		const int &ref_2 = ref_x;	//이렇게 사용하는 것은 가능

	}

	특이점??
	int main()
	{
		const int &ref_x = 3;	//쌉가능
		cout << ref_x << endl;
		cout << &ref_x << endl;

		//도대체 왜쓰는것이며 const int ref_x와 다른점이 무엇인가...
	}

	void doSomething(const &int x)
	{
		cout << x << endl;
	}

	int main()
	{
		int a = 1;
		doSomething(a);
		doSomething(1);		//요런것들이 가능해짐
		doSomething(2);
		doSomething(a+3);
		doSomething(3 * 4);
	}