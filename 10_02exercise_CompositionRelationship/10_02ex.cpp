#include"monster.h"
using namespace std;

int main()
{
	Monster mon1("sanson", Position2D(0, 0));

	cout << mon1 << endl;
	//while (1)	// game loof
	{
		//event
		mon1.moveTo(Position2D(1,1));
		cout << mon1 << endl;
	}


	//mon1의 멤버 location은 mon1사라지면 같이 사라지게 된다.
	//즉 속해 있다는것이다. location은 location에 기능만 하면 될뿐
	//Monster클래스의 다른 기능에 관여할 필요는 없다.
	//이러한 관계를 '구성' 이라고 한다.
	return 0;
}