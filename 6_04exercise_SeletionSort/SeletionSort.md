## 배열과 선택 정렬 

###	정렬하기

	#include<iostream>
	using namespace std;

	void printArray(const int array[], const int length)
	{
		for(int index = 0; index < length ; index++)
			cout << array[index] << " ";
		cout << endl;
	
	}

	int main()
	{
		/*				value		index
		3 5 2 1 4		  1           3
		1 5 2 3 4         2           2
		1 2 5 3 4         3           3
		1 2 3 5 4         4           4
		1 2 3 4 5 
			   */

		const int length = 5;

		int array[length]{3, 5, 2, 1, 4};
		printArray(array, length);		// 3, 5, 2, 1, 4

		//준수 방식
		for(int i = 0; i < length; i++)
		{
			int tempi = array[i];
			int tempj = 0;

			for(int j = 0; j < length ; j++)
			{	
				if(array[i] > array[j])
				{
					array[i] = array[j];
					tempj = j;
				}
			}

			array[tempj] = tempi;
			printArray(array, length);
		}
		//정모 방식
		for(int startIndex = 0; startIndex < length -1; startIndex++)
		{
			int smallestIndex = startIndex;

			for(int currentIndex = currentIndex + 1 ; currentIndex < length; currentIndex++)
			{
				if(array[samllestIndex] > array[currentIndex])
				{
					smallestIndex = currentIndex
				}
			}
		

			//std::swap(array[smallestIndex], array[startIndex])
			{	
				int temp array[smallestIndex];
				array[smallestIndex] = array[startIndex];
				array[startIndex] = temp;
			}
			printArray(array, length);
		}
	}

	