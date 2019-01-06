#include "Calc.h"
using namespace std;

Calc::Calc(int init_value)
	: m_value(init_value)
{}

Calc & Calc::add(int value) { m_value += value; return *this; }

//inline
Calc & Calc::sub(int value) { m_value -= value; return *this; }
//�ζ����� �ֺ�����? �Ϲ������� class�ȿ� �������� ���Ǹ� ������� ���
//�װ��� inline���� ���ٴٰ� �����ع�����.
//�Ϲ������� �츮�� inline�� �� �Ⱦ��Ƿ� ����������!

Calc & Calc::mult(int value) { m_value *= value; return *this; }

void Calc::print()
{
	//using namespace std;	// ������� �ű��
	cout << m_value << endl;
}
