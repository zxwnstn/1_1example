## 반복문 while

### 사용

	#include<iostream>
	using namespace std;

	int main()
	{	
		// 1~10까지 출력한다면
		cout << 1 << endl;
		cout << 2 << endl;
		...
		...
		//번거로움

		cout << "While-loop test" << endl;
		int count = 0;

		while(true)		// ()는 조건문으로 참일때 실행, 거짓이면 실행하지 않음.
		{
			cout << count <<endl;
			count++;
		}

		while(count < 10)		// count가 10보다 작을때 까지만
		{
			cout << count <<endl;
			count++;
		}
	}

### 무한 루프의 탈출

	int count = 0;

	while(1)		
	{
		cout << count <<endl;
		count++;
		if (count == 10) break;		// break를 걸어준다.
	}//이 문장을 goto 문으로 바꿔보기


### 주의사항

	unsigned int count = 10;

	while (count >=0)
	{
		if ( count == 0 )
			cout << "zero";
		else
			cout << count << " ";	//count가 zero까지 줄어든 다음
									//unsigned의 최대값으로 오버플로우가 발생된다.
									//그런데 그 최대값이 양수가 아니므로 무한루프가 된다.
		count--;
	}