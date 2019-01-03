## 동적 배열

###

	#include<iostream>

	int main()
	{
		//정적배열
		int length = 5;
		//int array[length];		//기본적인 정적 할당배열
									//cin으로 길이를 받는것이 불가능 하다.

		cin >> length;

		//동적배열
		int *array = new int[length];

		array[0] = 1;
		array[1] = 2;

		for(int i= 0; i<length; i++)
		{
			cout << (uintptr_t)&array[i] << endl;
			cout << array[i] << endl;
		}
		
		delete [] array;

		int *array = new int[length]();		
		int *array = new int[length]{};						// 0으로 초기화 하기
		int *array = new int[length]{11, 22, 33, 44, 66};	// 66까지는 지정하고 나머지는 0으로 초기화
		// 만약 lenth를 5보다 적게 입력 받는다면?
		// 에러가 난다.

		return 0;
	}

	int main()
	{
		int fixedArray[] = {1, 2, 3, 4, 5};

		int *array = new int[5]{1, 2, 3, 4, 5};		// 정상	
		int *array = new int[3]{1, 2, 3, 4, 5};		// 오류가 난다.

		//resizing
		직접적으로는 되지않음
		크게 하는 경우, 다른 더큰 메모리를 받아 복사하고 뒤에 새로들어온 원소를 추가. 
		작게 하는 경우, 될수도 있지만 안된다면 위방법으로 해야됨



		delete[] array;
	}
