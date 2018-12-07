#include<iostream>
using namespace std;

//네임스페이스 만들기
namespace my_space
{
	//네임스페이 안의 네임스페이스 Innerspace 만들기
	namespace Innerspace
	{
		int My_function()
		{
			return 0;
		}
	}

int dosomething(int a, int b,int c)
	{
		return a + b;
	}
}

int dosomething(int a, int b)
{
	return a * b;
}

int main()
{
	cout << dosomething(1, 3) << endl;
	cout << my_space::dosomething(1,3,2) << endl;
	cout << my_space::Innerspace::My_function() << endl;

	
	{
using namespace my_space;
		cout << dosomething(1, 3, 2) << endl;
		cout << Innerspace::My_function() << endl;
	}

}