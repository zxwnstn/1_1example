## Ŭ���� �ڵ�� ��� ����

### 
	#include<iostream>
	using namespace std;

	class Calc
	{
	private:
		int m_value;

	public:
		Calc(int init_value)
			: m_value(init_value)
		{}

		Calc& add(int value) { m_value += value; return *this }
		Calc& sub(int value) { m_value -= value; return *this }
		Calc& mult(int value){ m_value *= value; return *this }	
		// �Լ��� ��Ŭ���� �����۾� �� �����͸� Ŭ���� ���� ��ġ �̵��� ������ �ȴ�!
		// �ζ��� Ű���� ������ ctl + s�� ���� esc�� ���������� �ȴ�.
		// ++shift + del �ϸ� ������ ����

		void print()
		{
			cout << m_value << endl;
		}
	};
	Ŭ���� �ڵ尡 �ʹ� ���.. Ŭ������ ���鶧�� ����� ���� �����ϴ°��� �⺻�̴�.

	int main()
	{
		Calc cal(10);
		cal.add(10).sub(1).mult(2).print();

		cal.print);
	}

	//�����ش� ������ �̸��� Ŭ������ �̸��̴�.
	//using name space��� ������ٰ� ���� �����ʰ� cpp�� �и��� �ߴٸ�
	//cpp���� ��ܿ� ����θ� �ȴ�.
	//����� �ƴ��̻� �ٸ��ڵ忡 ������ ���� �ʱ� �����̴�.

	//Ŭ������ ������ �ٴ� �Ѵٸ� ������� ����� �Լ� ������ �ϰ�
	//cpp�� ���Ǹ� �ϴ°��� �������� ����� �ȴ�.

	//�׷��� ��쿡 ���󼭴� ����� ���Ǹ� �ִ°��� ����ɶ��� �ִ�.
	//�ֳ��ϸ� �� ������ ���� �����̴�.
	//����� �� ����ְ� �ڵ� �ϴ°͵� ��� ���� �ϳ��� �ڵ���Ÿ���� �ɼ� �ִ�.
