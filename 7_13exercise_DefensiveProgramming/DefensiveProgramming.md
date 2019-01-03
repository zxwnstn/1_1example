## 방어적 프로그래밍의 개념

### 
	
	#include<iostream>
	#include<string>
	using namespace std;

	int main()
	{
		//syntax error
		int x			//문법에러

		//semantic errors
		int x;
		cin >> x;
		if(x >= 5)
			cout << "x is greater than 5" << endl;	//5일때 출력이 되는 논리적 오류가 발생된다.
		
		// violated assumption
		string hello = "Hello, my name is Jack Jack";

		int ix;
		cin >> in;
		cout << hello[ix] << endl;			//ix에 1004를 넣는다면 런타임 에러가 나게됨

		//방어적 프로그래밍 적용
		string hello = "Hello, my name is Jack Jack";
		cout << "Input from 0 to" << hello.size() - 1 << endl;

		while(true)
		{
			int ix;
			cin >> ix;
			if(ix >= 0 && ix <= hello.size()-1)
				cout << hello[ix] << endl; break;
			else
				cout << "try again" << endl;
		}
		

		return 0;
	}