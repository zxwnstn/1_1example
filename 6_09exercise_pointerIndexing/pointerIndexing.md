## 포인터 연산과 배열 인덱싱

###포인터 연산

	#include<iostream>
	using namespace std;

	int main()
	{
		int value = 7;
		int *ptr = &value;

		cout << uintptr_t(ptr) << endl;		//1999212032
		cout << uintptr_t(ptr - 1) << endl;	//1999212028
		cout << uintptr_t(ptr + 1) << endl;	//1999212036

		double value = 7;
		double *ptr = &value;

		cout << uintptr_t(ptr) << endl;		//1999212032
		cout << uintptr_t(ptr - 1) << endl;	//1999212024
		cout << uintptr_t(ptr + 1) << endl;	//1999212040
		//포인터 연산을 할때 데이터 타입에 따라 연산되는 크기가 달라진다. (그 데이터 타입의 크기를 따른다.)
		//하지만 실제 포인터의(변수로서의 포인터) 크기는 4바이트(32비트 기준)임을 잊지 말아야 한다.

	}

	#include<iostream>
	using namespace std;

	int main()
	{
		int array[]{9, 7, 5, 3, 1};

		cout << array[0] << " " << (uintptr_t)&array[0] << endl;	//9212032
		cout << array[1] << " " << (uintptr_t)&array[1] << endl;	//9212036
		cout << array[2] << " " << (uintptr_t)&array[2] << endl;	//9212040
		cout << array[3] << " " << (uintptr_t)&array[3] << endl;	//9212044	4씩증가
		for(int i=0; i<5; i++)
		{
			cout << array[i] << " " << (uintptr_t)&array[i] << endl;
		}

		int *ptr = array;
		for(int i=0; i<5; i++)
		{
			cout << *(ptr+i) << endl;								//똑같이 4씩늘어남
		}
	}

### 문자열

	int main()
	{
		char name[] = "Jack jack";
		char *ptr = name;
		const int n_name = sizeof(name) / sizeof(char);

		for(int i= 0; i<n_name; ++i)
		{
						 
			cout << (pty + i);		//마지막 한칸 null char 까지 출력됨
			cout << *(name + i);	//또한 name자체도 이미 포인터
		}
}