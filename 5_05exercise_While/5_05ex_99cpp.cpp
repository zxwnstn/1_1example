#include<iostream>
using namespace std;

int main()
{
	cout << "����� �ܿ���? (0���� ������)" << endl;
	
	while (1)
	{
		int n, count;
		cin >> n;
		if (n == 0) {cout << "\a" << endl; break;}
		cout << n << "���� �ܿ�ٽ��ϴ�!" << endl;

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