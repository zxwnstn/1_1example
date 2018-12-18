## 다차원 배열 구조

### 행렬출력

	#include<iostream>
	using namespace std;

	int main()
	{
		const int num_rows = 3;
		const int num_colums = 5;
		for(int row = 0; row < num_rows; row++)
		{
			for(int col = 0; col < num_cloums; col++)
				cout << '[' << row << ']' << '[' << col << ']' << '\t';
			cout endl;
		}
	}

<br>

### 다차원배열(2차원) 선언

	int main()
	{
		int array[num_rows][num_colums] =
		{
			{1, 2, 3, 4, 5},
			{6, 7, 8, 9. 10},
			{11, 12, 13, 14, 15}
		};

		for(int row = 0; row < num_rows; row++)
		{
			for(int col = 0; col < num_cloums; col++)
				cout << array[row][col] << '\t';
			cout endl;
		}

		for(int row = 0; row < num_rows; row++)
		{
			for(int col = 0; col < num_cloums; col++)
				cout << (int)&array[row][col] << '\t';
			cout endl;
		}

	}