## ���� �����

### PRNG

	#include<iostream>
	using namespace std;

	unsingned int PRNG() // Pseudo Random Number Generator
	{
		static unsigned int seed = 5523;	// seed number
		seed = 253279 * seed + 23960413;	// over�÷ξ �߻���Ŵ

		return seed % 32768;				// ���� ó�� ���̳�, ��� ����س� ���̴�.
	}

	int main()
	{
		for (int i = 1; i <= 100; i++)
		{
			cout << PRNG() << "t";

			if(i % 5 == 0) cout << endl;
		}
	}

### ���̺귯�� ����

	//radn�� srand
	#include <iostream>
	#include <cstdlib>// std::radn(), std::srand()
	using namespace std;

	int main()
	{
		std::srand(5323)					//random��  seed����

		for (int i = 1 ; i <= 100, i++)
		{
			cout << std::rand() << "t";		// radom�� �߻�

			if (i % 5 == 0) cout << endl;
		}
		return 0;
	}
��ǻ�ʹ� seed�ѹ��� �����Ǹ� ����Ǵ� ���� ����
�׷��ٸ� seed�ѹ��� ��� �ٲ��ٱ�?


<br>

### ctime �̿�
	#include<ctime>

	int main()
	{
		std::srand(static_cast<unsigned int>(std::time(0));
	}
random�ѹ��� �̿��Ҷ� ����� �Ҷ��� seed �� �����ϴ°� ����.

### getRandomNumber

	int getRandomNumber(int min, int max)
	{
		static const double fraction = 1.0 / (RAND_MAX + 1.0)

		return min + static_cast<int>((max- min +1)* (std::rand()*fraction))
	}

### ���̺귯�� ����2 - ��������
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
