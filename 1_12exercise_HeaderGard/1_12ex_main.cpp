#include<iostream>
#include"add.h"
#include"My_work.h"
//#include 의 의미는 이 cpp파일에 다른 cpp 파일의 내용을 포함 시키겟다 라는 것이다.
//헤더 가드를 사용하지 않는 경우 위 같은 경우에 오류가 발생된다.
//왜냐하면 My_work에서 내에서도 add.h 를 포함하기 때문에 이 메인함수가 있는 cpp파일에 add함수가 두번 정의 되게 된다. 
using namespace std;

int main()
{
	cout << dosomething() << endl;

	return 0;
}