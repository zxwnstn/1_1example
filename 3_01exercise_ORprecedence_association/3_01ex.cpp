#include<iostream>
using namespace std;

int My_pow(const int a, int b)
{
	int i;
	int a1 = 1;
	
	for (i = 0; i < b; i++)
		a1 = a1 * a;
	
	return a1;
}

int main()
{
	int exponent, power;
	cout << "�ذ� ������ �����ּ��� ^0^~" << endl;
	cin >> exponent >> power;
	cout << " �����~~... " << My_pow(exponent, power) << "�Դϴ�~" << endl;

	return 0;

}