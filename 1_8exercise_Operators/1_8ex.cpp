#include<iostream>
using namespace std;

//연산자(operator)의 종류
int main()
{	
	//변수의 값들을 의미하는 literal
	//연산자의 대상이 되어지는 피연산자(operand)
	//+,-,*,/ 등의 이항연산자(binary)
	int x = 2;
	cout << 1 + 2 << endl;
	cout << x + 2 << endl;

	//true,false를 통한 3항연산자(ternary)
	int y = (x > 0) ? 1 : 2;
	cout << y << endl;

	x = -2;
	y = (x > 0) ? 1 : 2;
	cout << y << endl;
	
	x = 2;
	x = -x; //-x, 가 과연 literal 처럼 작동하는지 시험, 결과는 작동함
	y = (x > 0) ? 1 : 2;
	cout << y << endl;

	return 0;

}