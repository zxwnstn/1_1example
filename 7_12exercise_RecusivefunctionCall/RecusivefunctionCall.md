## 재귀적 함수 호출 Recusion

###
	#include<iostream>
	using namespace std;

	void countDown(int count)
	{
		cout << count << endl;
		countDown(--count);			// 코드가 재 호출되면서 stack영역에 차곡 차곡 쌓이게 된다.
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

	//피보자치
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