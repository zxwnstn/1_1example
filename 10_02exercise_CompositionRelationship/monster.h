#pragma once
#include<string>
#include"Position2D.h"
using namespace std;

class Monster
{
private:
	string m_name;
	//int m_x;		// ��ǥ
	//int m_y;		// ���ӿ����� �� ��ǥ������ ���� �߿��Ҽ� �ִ�.
					// �̷��� �߿��� ��ǥ�� �ٸ� Ŭ������ ����� �����°� ���?
	Position2D m_location;
					// �̷��� ��ɻ� �и��ɰ͵��� ���δٸ� ������ 
					// ���� �ɰ��� ��������.
					

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
		// ����Ŭ���� ���忡���� class location�� �Լ� set�� ����
		// ��������� � �۵������� ���� ���ʿ䰡 ����.
		// ���� �� �����ϴ����� �˸�ɻ��̴�.
		// �Դٰ� ����� ���������� �Ⱥ��� ���� ������ ����.
	}

	friend ostream& operator << (ostream &out, const Monster &monster)
	{
		out << monster.m_name << " " << monster.m_location;
		return out;
	}
};