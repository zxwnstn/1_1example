## ����� �Լ� ȣ�� Recusion

###
	#include<iostream>
	using namespace std;

	void countDown(int count)
	{
		cout << count << endl;
		countDown(--count);			// �ڵ尡 �� ȣ��Ǹ鼭 stack������ ���� ���� ���̰� �ȴ�.
	}

	void countDown(int count)
	{
		cout << cout << endl;
		if(count > 0)
			countDown(--count);
	}
	
	int sumTo(int sumto)
	{
		if(sumto <= 0)
			return 0;
		else if(sumto <= 1)
			return 1;
		else
			return(sumto - 1) + sumto;
	}

	//�Ǻ���ġ
	int Fibonazzi(int fibonum)
	{
		if(fibonum == 1 || fibonum == 2)
			return 1;
		else
			return Fibonazzi(fibonum-1) + Fibonazzi(fibonum-2);
	}


	int main()
	{
		countDown(5);
		cout << sumTo(10); << endl;
	}