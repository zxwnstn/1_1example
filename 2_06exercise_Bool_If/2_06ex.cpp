#include<iostream>
using namespace std;

void Is_Equal_Odd(int a)
{
	if (a % 2 == 0)
		cout << "Â¦¼öÀÔ´Ï´Ù" << endl;

	else
		cout << "È¦¼öÀÔ´Ï´Ù" << endl;
}

int main()
{
	int a;
	cin >> a;
	Is_Equal_Odd(a);

	return 0;
}