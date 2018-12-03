#include<iostream>

int main()
{
	int x = 1;
	x = x + 2;

	std::cout << x << std::endl;

	int y = x;
	std::cout << y << std::endl;

	//is (x+y)is l-value or R-value? 
	std::cout << x + y << std::endl;
	//x+y 는 r밸류이다 왜냐하면 변수로 지정과 초기화가 안되있기 때문이다.
	std::cout << x << std::endl;

	int z;
	std::cout << z << std::endl;
	//여기서 변수 z는 초기화가 안되어 있다 따라서 빌드시 오류가 나고, 릴리즈 모드로 빌드 했을경우 
	//실행파일에서 z변수에는 0이 지정 된다.
	//MSDN 읽어보니까 경고수준 에러는 맞는데 에러로 나오네
	return 0;

}