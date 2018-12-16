#include<iostream>
using namespace std;

int main()
{
	cout << "몇단을 외울까요? (0단은 나가기)" << endl;
	
	while (1)
	{
		int n, count;
		cin >> n;
		if (n == 0) {cout << "\a" << endl; break;}
		cout << n << "단을 외우겟습니다!" << endl;

		count = 1;
		while (count < 10)
		{
			cout << n * count << " ";
			count++;
		}
		cout << endl;
	}

	return 0;
}