## 배열2

###
	int main()
	{
		const int num_students = 20;

		int students_scores[num_students];
		
		cout << &students_scores << endl;
		for(int i= 0; i < 3; i++)
			cout << (int)&students_scores[i] << endl;
		
		//3799424	배열의 주소
		//3799424	배열[0]의 주소	
		//3799428
		//3799432
		//3799436

		cout << sizeof(students_scores) << endl;
	}

<br>

### 함수 파라미터로 받기

	void doSomthing(int students_scores[20])
	{
		cout << (int)&students_scores << endl;
		cout << students_scores[0] << endl;
		cout << students_scores[1] << endl;
		cout << students_scores[2] << endl;
	}

	int main()
	{
		const int num_students = 20;

		int students_scores[num_students] = {1, 2, 3, 4, 5,};
		
		cout << (int)&students_scores << endl;
		for(int i= 0; i < 3; i++)
			cout << students_scores[i] << endl;

		doSomething(students_scores);

		// 11401992	메인에서 배열의 주소값
		// 11401790 함수에서 배열의 주소값, ?? 둘의 주소값이 다르다???
	}
+ 무슨일이 벌어진 것일까??
함수의 매개변수로 배열을 받을때는 함수내에서 새로이 변수를 선언 할당하게 되는것이다.
즉 들어오는 배열을 그대로 쓰는것이 아닌 함수내부에 복사하여 사용하는 것이다.
<br>
그렇다면 어떻게 해야 들어오는 함수 그대로 사용할수 있을까?
<br>

### 함수내에서 배열의 복사가 이루어진 경우 배열의 크기

	void doSomthing(int students_scores[20])
	{
		cout << (int)&students_scores << endl;
		cout << "in function" << sizeof(students_scores) << endl;
	}

	int main()
	{
		const int num_students = 20;

		int students_scores[num_students] = {1, 2, 3, 4, 5,};
		
		cout << "in main" << sizeof(students_scores) << endl;

		doSomething(students_scores);
		
		// in main 80
		// in main 4

+ 대체 무슨일이 일어난 걸까?
함수로 배열이 넘어올때 포인터로 넘어왔다
<br>
비주얼 스튜디오 모드 전환 패널옆에 x86를 x64로 바꾸고 다시 실행해보자<br>
결과는

	in main 80
	in main 8

+ 대체 무슨일이 일어난 걸까?
32비트 시스템의 포인터변수 크기는 32bit 즉 4byte며
64비트 시스템의 포인터변수 크기는 64bit 즉 8byte기 때문이다.

