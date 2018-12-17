## 난수 만들기

### PRNG

	#include<iostream>
	using namespace std;

	unsingned int PRNG() // Pseudo Random Number Generator
	{
		static unsigned int seed = 5523;	// seed number
		seed = 253279 * seed + 23960413;	// over플로어를 발생시킴

		return seed % 32768;				// 난수 처럼 보이나, 사실 계산해낸 값이다.
	}

	int main()
	{
		for (int i = 1; i <= 100; i++)
		{
			cout << PRNG() << "t";

			if(i % 5 == 0) cout << endl;
		}
	}

### 라이브러리 랜덤

	//radn과 srand
	#include <iostream>
	#include <cstdlib>// std::radn(), std::srand()
	using namespace std;

	int main()
	{
		std::srand(5323)					//random의  seed설정

		for (int i = 1 ; i <= 100, i++)
		{
			cout << std::rand() << "t";		// radom수 발생

			if (i % 5 == 0) cout << endl;
		}
		return 0;
	}
컴퓨터는 seed넘버가 고정되면 도출되는 값이 동일
그렇다면 seed넘버를 어떻게 바꿔줄까?


<br>

### ctime 이용
	#include<ctime>

	int main()
	{
		std::srand(static_cast<unsigned int>(std::time(0));
	}
random넘버를 이용할때 디버깅 할때는 seed 를 고정하는게 좋다.

### getRandomNumber

	int getRandomNumber(int min, int max)
	{
		static const double fraction = 1.0 / (RAND_MAX + 1.0)

		return min + static_cast<int>((max- min +1)* (std::rand()*fraction))
	}

### 라이브러리 랜덤2 - 범위지정
	#include<iostream>
	#include<random>

	using namespace std;

	int main()
	{
		std::random_device rd;
		std::mt19937 mesenne(rd()); // create a mesenne twister
		std::uniform_int_distribution<> dice(1, 6);

		for (int i = 1; i <= 20; i++)
		{
			cout << dice(mersenne) << endl;
		}
	}
