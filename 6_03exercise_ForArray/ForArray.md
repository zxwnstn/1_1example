## 배열문과 반복문

### 사용법
	#include<iostream>
	using namespace std;

	int main()
	{
		//평균 구하기

		const int num_students = sizoeof(scores)/sizeof(int);
		int scores[]{84, 92, 81, 76, 56};

		int total = 0;
		double average;

		for(int i =0; i < num_students; i++)
		{
			total += scores[i];
		}

		average = double( total / num_students );
		cout << average << endl;

		//최고점 구하기

		int max_score = 0;
		for(int j = 0 ; j <num_students; j++)
		{
			if(max_score < scores[j])
				max_score = scores[j]
		}
		cout << max_score << endl;

		//최저점 구하기

		int min_score = 100;
		for(int k = 0 ; k <num_students; k++)
		{
			if(min_score < scores[k])
				min_score = scores[k]
		}
		cout << min_score << endl;
	}