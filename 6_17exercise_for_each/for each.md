## for each�� �ݺ���

	#include<iostream>
	using namespace std;

	int main()
	{
		int fibonacci[] = {0, 1, 2, 3, 4, 5}


		//
		for(int number : fibonacci)
			cout << number << " ";		// 0, 1, 2, 3, 4, 5
		cout << endl;

		for(int &number : fibonacci)	//&���̱�!
			number = 10;

		for(int number : fibonacci)
			cout << number << " ";		// 10, 10, 10, 10, 10
		cout << endl;

		//for each ���� ����Ҷ��� auto�� ���� �̿��Ѵ�.
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
//�����Ҵ�ÿ��� for each�� ���� ����. �׷��ٸ�??
//���͸� ����ϸ� �ȴ�!

