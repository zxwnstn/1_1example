## 반복문 For
<br>
### while문과 For문
반복횟수가 정해져 있다면 주로 for문을쓴다.

<br>

### 사용법
	#include<iostream>
	using nmaespace std;

	int main()
	{	
		// 0부터 9까지 출력하는 for문
		for (int count = 0; count < 10; count++ )// iteration 반복
		{
			cout << count << endl;
		}
		cout << count << endl; // count는 지역변수로서 {}를 나온순간 사라진다.
		return 0;
	}
<br>
	

### for문으로 무한루프 돌리기
for(;true;count++)
for(;;count++)

<br>

### for문으로 power구현하기
	
	int pow(int base, int exponent)
	{
		int result = 1;
		for(int i=0 ; i < exponent ; 1++)
		{
			result *= base;
		}
	}

<br>

### 감소조건 for 문

	int main()
	{
		for (int i = 9 ; i >=0; i--)
		{
			cout << i << endl;
		}
	}

<br>

### for문 안에서 여러 반복변수 사용하기

	for(int i = 0, j = 0; (i+j) < 10; i++, j += 2)
	{
		cout << i << " " << j << endl;
	}

<br>

### 2중 루프
	for(int i = 0; i < 9; i++)
	{
		for(int j = 0; j < 9; j++ )
		{
			cout << i << " " << j << endl;
		}
	}