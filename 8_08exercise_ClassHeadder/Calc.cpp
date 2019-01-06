#include "Calc.h"
using namespace std;

Calc::Calc(int init_value)
	: m_value(init_value)
{}

Calc & Calc::add(int value) { m_value += value; return *this; }

//inline
Calc & Calc::sub(int value) { m_value -= value; return *this; }
//인라인은 왜붙을까? 일반적으로 class안에 멤버펑션의 정의를 다적어논 경우
//그것을 inline으로 쓰겟다고 간주해버린다.
//일반적으로 우리는 inline을 잘 안쓰므로 지워버리자!

Calc & Calc::mult(int value) { m_value *= value; return *this; }

void Calc::print()
{
	//using namespace std;	// 상단으로 옮기기
	cout << m_value << endl;
}
