//변수의 범위
#include<iostream>
using namespace std;

//함수 내부에 변수 주소 확인
void dosomething(int x)
{
	x = 123;

		cout << x << " " << &x << endl;

}

int main()
{
	//메인함수안의 변수 x의 주소
	//변수의 범위는 {}의 범위이다. {}를 빠져나오게 되면 사용할수 없게되며
	//{}안에 있는 {}안에도 동시에 적용이된다.
	int x = 0;
	cout << x << " " << &x << endl;

	{ 
		cout << x << " " << &x << endl;
		
		//하지만 {}안에서 같은 이름의 변수를 선언하게 되면 또다른 주소값을 갖는,
		//다른 주소값을 같는 변수로 사용할수 있다.
		int x = 1;
		cout << x << " " << &x << endl;
	}
	dosomething(x);
	cout << x << " " << &x << endl;

	return 0;
}
/*실행결과
0 0113FB18
0 0113FB18
1 0113FB0C
123 0113FA38
0 0113FB18*/