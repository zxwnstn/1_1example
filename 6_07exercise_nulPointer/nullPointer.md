## null pointer

###
	#include<iostream>

	void doSomething(double *ptr)
	{
		
		if(ptr !=nullptr)
		{
			//do something useful
		}
		else
			// do nothing with ptr
	}

	int main()
	{
		double *ptr = 0; // NULL , nullptr;
		double *ptr{nullptr};
		dosomething (ptr);		//do nothing
		dosomething (nullptr)	//do nothing

		double d= 123.4;
		ptr = &d;
		dosomething(&d)			//do something
		dosomething(ptr)		//do something


	}

### �Լ��� �Ű������� ptr�� �ּҸ� �����ѱ�ٸ�
����ü�� ����� �Ͼ�� ������ ������. ptr������ ���� ����Ǿ� ������ ���̱⶧����
���ΰ� �Լ����� ptr�� �ּҴ� �ٸ��� �ȴ�.
