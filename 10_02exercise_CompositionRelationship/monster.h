#pragma once
#include<string>
#include"Position2D.h"
using namespace std;

class Monster
{
private:
	string m_name;
	//int m_x;		// 좌표
	//int m_y;		// 게임엔진상 이 좌표개념은 아주 중요할수 있다.
					// 이러한 중요한 좌표를 다른 클래스로 만들어 버리는건 어떨까?
	Position2D m_location;
					// 이렇게 기능상 분리될것들이 보인다면 가급적 
					// 빨리 쪼개는 것이좋다.
					

public:
	/*Monster(const string& name_in, const int & x_in, const int & y_in)
		: m_name(name_in), m_x(x_in), m_y(y_in)
	{}*/
	Monster(const string& name_in, const Position2D & pos_in)
		: m_name(name_in), m_location(pos_in)
	{}

	void moveTo(const Position2D & pos_target)
	{
		m_location.set(pos_target);
		// 상위클래스 입장에서는 class location의 함수 set에 관해
		// 어떤구현인지 어떤 작동이지를 별로 알필요가 없다.
		// 그저 뭘 수행하는지만 알면될뿐이다.
		// 게다가 어떤일이 벌어지는지 안보여 지면 더더욱 좋다.
	}

	friend ostream& operator << (ostream &out, const Monster &monster)
	{
		out << monster.m_name << " " << monster.m_location;
		return out;
	}
};