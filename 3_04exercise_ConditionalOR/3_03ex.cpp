#include<iostream>

int main()
{
	using namespace std;
	//sizeof
	int x;
	float y;
	cout << sizeof(int) << sizeof y << endl;

	//comma
	int a = 1;
	int b = 2;
	int c = a + b;
	int d = (a , b);

	cout << d << endl;
	cout << (++a, c) << endl;
	cout << (a++, c) << endl;

	//conditional
	int e, f;
	cout << "ũ�⸦ ���� �μ��ڸ� �����ּ���" << endl;
	cin >> e >> f;
	const int i = (e >= f) ? e : f;
	cout << i << endl;

	return 0;
	
}