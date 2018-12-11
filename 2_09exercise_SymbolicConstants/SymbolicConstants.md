## 2-9�� �ɺ��� ��� Constants

### const 
	 int main()
	 {
	 	 using namespace std;

		 const double gravity{ 9.8 }; 
		 // const�� �Ἥ ���� ���ѹ���
		 // const��  ���� �տ� ���δ�. double const �� �����ϳ� �ǹ̰� �޶����� ��찡 �ִ�.
		 
		 gravity = 9.7; //�̷������� �ɺ��� ����� ���� �ٲܼ� ����.
						// ���� �ʱ�ȭ�� �ݵ�� ���־�� �Ѵ�. ���� �ϴ½����δ� �̿��� �� ����.
		 
		 return 0;
	 }

������ �Ǵ� ��� ������ ���� ������ �Ժη� �ٲٰ� ���� ������ �̿��� �� �ִ�.

<br>

###�ɺ��� ����� �̿�
�Լ��� parameter

	#include<iostream>

	//�Լ���  parameter�� �ɺ��� ����� ���� �̿��Ѵ�.
	
	void printNumber(const int my_number)
	{
		int n = my_number  // ���� �ٲٰ� �ʹٸ� �̷������� �����Ͽ� �ٲ۴�.
		cout << my_number << endl;
	}
	
	int main()
	{
		printNumber(123);

	}

<br>

��Ÿ�� ���

	int main()
	{
		using namespace std;

		const int my_const(123)

		int number;
		cin >> number;

		const int special_number(number); 
	}
�ɺ��� ��� special_number �� number�� �Է� �޾����� ���� �����ȴ�(������ Ÿ��).
�ɺ��� ��� my_const�� �������Ҷ� �̹� �����Ǿ��� �ִ�(��Ÿ��).
compile �� ��Ÿ���� ����?
number��� ������ ����� �ٲܼ� ������ special_number�� �ٲܼ� ����.
compileŸ�� ���� ���� �����ϴµ� constexpr�� �ִ�.

<br>

### ��ũ�� �̿�??
	#include<iostrea>
	#define ������ �ʴ� ��� 30
	using namespace std;

	int main()
	{
		int num_item  = 123;

		int price = num_item * (������ �ʴ� ���)
		
		return 0;
	}
���� ��Ÿ�Ϸ� ��ũ�θ� ����Ҽ��ִ�. ������ ����� ��ũ�θ� �̷� �������� ��������ʴ´�.
������?
1. ������� ������� 
2. Define�� ����� �������� ����ȴ�(������ ����)

<br>

### const ���ƾ���. Header�� �̿�
����� �̿��Ѵ�.

	������� MY_CONSTANS.h
	#pragma once
	
	namespace constants
	{
		constexpr double pi(3.141592);
		constexpr double avogadro(6.0221413e23);
		constexpr double moon_gravity( 9.8 / 6.0 )
	}

	cpp����
	#include<iostream>
	#include"MY_CONSTANS.h"

	using namespace std;
	
	int main()
	{
		double radius
		cin >> radius;

		double circumference = 2.0 * radius * constants::pi;
	}