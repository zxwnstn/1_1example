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

### 함수의 매개변수로 ptr의 주소를 직접넘긴다면
값자체의 복사는 일어나지 않을수 있지만. ptr변수는 역시 복사되어 들어오는 것이기때문에
메인과 함수에서 ptr의 주소는 다르게 된다.
