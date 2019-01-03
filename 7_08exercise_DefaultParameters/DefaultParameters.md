## 매개변수의 기본값

###
	#include<iostream>

	void print(int x = 0)		//이를 디폴트 파라미터, 디폴트 아규먼트등으로 불린다.
	{
		cout << x << endl;
	}

	int main()
	{
		print(10);
		print();			//실행이 안될까?
	}

	//여러개의 파라미터에도 쓸수있다.
	void print(int x, int y, int z)
	//단
	void print(int x, int y= 10, int z){};		//불가능
	void print(int x, int y, int z = 10){};	//가능

	void(int x = 10, int y = 10, int z = 10)
	{
		cout << x << y << z << endl;
	}

	int main()
	{
		print();				//10 10 10
		print(100);				//100 10 10
		print(100, 200);		//100 200 10
		print(100, 200, 300);	//100 200 300
	}

	//주의
	void(int x = 10, int y = 10, int z = 10);		//전방선언, 또는 헤더를 추가를 할경우

	~~~~~~~~~~
	
	void print(int x, int y, int z)		//정의부에서는 빼줘야함
	void print(int x, int y, int z)		//또는 정의부에서 기본값을 넣고 선언시 빼주는것 역시 가능하다.
	{
		cout << x << y << z << endl;
	}


	//특수상황 함수 오버로딩과 겹친다면
	#include<iostream>
	#include<string>
	using namesapce std;

	void print(string str){};
	void print(char ch = ' '){};

	int main()
	{
		print();	char매게변수를 쓰는 함수 선택
	}

	void print(int x){};
	void print(int x,  int y = 20){};

	int main()
	{
		print(10);		// 애매해서 오버로딩에 앰비규스 에러가 발생
	}

	//함수의 디폴트값은 매우 유용하게 쓸수있다.