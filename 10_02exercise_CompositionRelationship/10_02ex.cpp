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


	//mon1�� ��� location�� mon1������� ���� ������� �ȴ�.
	//�� ���� �ִٴ°��̴�. location�� location�� ��ɸ� �ϸ� �ɻ�
	//MonsterŬ������ �ٸ� ��ɿ� ������ �ʿ�� ����.
	//�̷��� ���踦 '����' �̶�� �Ѵ�.
	return 0;
}