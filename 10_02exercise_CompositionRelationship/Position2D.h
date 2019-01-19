#pragma once
#include<iostream>
using namespace std;


class Position2D
{
private:
	int m_x;
	int m_y;
	
public:
	Position2D(const int& x_in, const int& y_in)
		: m_x(x_in), m_y(y_in)
	{}

	//TODO: overload operator =

	void set(const Position2D & pos_target)
	{
		set(pos_target.m_x, pos_target.m_y);
		//이런식으로 정리하는것이 좋다.
	}

	void set(const int & x_target, const int & y_target)
	{
		m_x = x_target;
		m_y = y_target;
	}

	friend ostream& operator << (ostream &out, const Position2D &pos2d)
	{
		out << pos2d.m_x << " " << pos2d.m_y;
		return out;
	}
};