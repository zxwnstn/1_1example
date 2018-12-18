## 배열 01 - 정적 배열 Fixed size array
<br>

### 배열의 기본사용
	#inclde<iosteam>
	using namespace std;

	int main()
	{
		int one_student_score;
		int student_scores[5];
		
		cout << sizeof(one_student_score) << endl;	// 4
		cout << sizeof(stuendt_scores) << endl;		// 5
		
		one_student_score = 100;
		student_scores[0] = 100;	// 0 is index, 1st element assignment
		student_scores[1] = 80;		// 2nd	
		student_scores[2] = 90;		// 3rd
		student_scores[3] = 50;		// 4th
		student_scores[4] = 0;		// 5th
		student_scores[5] = 30;		// 6th ??? 이렇게 사용하면 안됨

		cout << student_scores[0] << endl;
		cout << student_scores[1] << endl;
		cout << student_scores[2] << endl;
		cout << student_scores[3] << endl;
		cout << student_scores[4] << endl;
		cout << student_scores[5] << endl;	// runtime 에러가 뜸

		cout << student_scores[0] + student_scores[1] cout << endl;	// 180

	}

<br>

### 구조체의 array
		stuct Rectangle
		{
			int length;
			int width;
		}

		int main()
		{
			cout << sizeof(Rectangle) << endl;	// 8

			Rectangle rect_arr[10] << endl;

			cout << sizeof(rect_arr) << endl;	// 80
			
			rect_arr[0].length = 1;
			rect_arr[1].length = 2;
		}

<br>

### array의 초기화
	int main()
	{
		int my_array[5] = {1, 2, 3, 4, 5}
		for(int i = 0; i < 5; i++)
			cout << my_array[i] << " " << endl;

		int my_array1[5] =  {1, 2, }
		for(int i = 0; i < 5; i++)
			cout << my_array[i] << " ";	// 1 2 0 0 0 
		
		int my_array2[] {1, 2, 3, 4, 5};
	}

### enum과 array 사용
	enum StudentName
	{
		JackJack,
		DASH,
		VIOLET,
		NUM_STUDENTS
	};

	int main()
	{
		int my_arr[] {1, 2, 3, 4, 5}
		cout << my_arr[JackJack] << endl; // 1

		int students_scores[NUM_STUDENTS];

		students_scores[JackJack] = 0;
		students_scores[DASH] = 100;
	}

<br>

### 입력받은 크기만큼의 배열생성

	int main()
	{
		int num_students = 0;
		cin >> num_students				//런타임 변수

		int students[num_students];		//에러가남
										//컴파일타임에 반드시 사이즈가 명시되야 함
										//사이즈가 고정된 곳에는 런타임 변수를 사용할수 없다
	}

<br>

### 변수로 크기정하기
	
	const int num_students = 20;

	int students_scores[num_students];
	