#include<iostream>
using namespace std;

int main()
{
	//&& 연산자의 처리방법 확인
	int x, y;
	bool z;
	x = 1;
	y = 2;

	if (x == 2 && ++y == 3)
		cout << "true" << endl;
	else
		cout << "false" << endl;

	cout << y << endl;
	
	x = 2;
	if (x == 2 && ++y == 3)
		cout << "true" << endl;
	else
		cout << "false" << endl;	//++y 와 , y++일때의 결과 차이를 생각해보자!

	cout << y << endl;

	// && 와 || 연산자 우선순위
	bool v1 = true;
	bool v2 = false;
	bool v3 = false;

	bool r1 = v1 || v2 && v3;
	bool r2 = (v1 || v2) && v3;

	cout << r1 << r2 << endl;

	return 0;

}