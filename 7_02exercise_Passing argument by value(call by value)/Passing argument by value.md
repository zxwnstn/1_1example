## ���� ���� �μ� ����
Passing Arguments by value
(call by value)

###
	#include<iostream>
	using namespace std;

	void doSomething(int y)
	{
		
		cout << "In func " << y << " " << &y << endl;
	}

	int main()
	{
		doSomething(5);			// ���������� int y�� �����̵ǰ� 5�� y�� ���簡 �ȴ�.

		cout << "In main " << x << " " << &x << endl;

		doSomething(x);			// ���� x�� ������ �Ǵ°��� �ƴϰ�, x�� ���� ������ �ȴ�.
								// ������ ���ο����� ���� x�� �ּҿ� �Լ��� y�� �ּҴ� ���� �ٸ���.

		doSomething(x+1);		// x+1�� �ᱹ �� ��ü�̴�. (rignt value)

		// cbv�� �������δ� �Լ����ο� ������ ������ ���ٴ°��̴�.
	}