## for each문 반복문

	#include<iostream>
	using namespace std;

	int main()
	{
		int fibonacci[] = {0, 1, 2, 3, 4, 5}


		//
		for(int number : fibonacci)
			cout << number << " ";		// 0, 1, 2, 3, 4, 5
		cout << endl;

		for(int &number : fibonacci)	//&붙이기!
			number = 10;

		for(int number : fibonacci)
			cout << number << " ";		// 10, 10, 10, 10, 10
		cout << endl;

		//for each 문을 사용할때는 auto를 많이 이용한다.
		for(auto &number : fibonacci)

	}

	#include<iostream>
	#include<limits>
	#include<algorithm>
	using namespace std;

	int main()
	{
		int fibonacci[] = {0, 1, 2, 3, 4, 5}
		int max_number = numeric_limits<int>::lowest();

		for(const auto &n : fibonacci)
			max_number = max(max_number, n)
		cout << max_number << endl;
	}
//동적할당시에는 for each를 쓸수 없다. 그렇다면??
//벡터를 사용하면 된다!

