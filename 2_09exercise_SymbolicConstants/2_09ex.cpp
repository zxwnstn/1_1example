#include<iostream>
#include"hos.h"

using namespace std;

int main()
{

	cout << sakike::genji << endl;
	cout << sakike::malganis << endl;

	int a;
	const int b(10);
	cin >> a;
	const int my_number(a);

	cout << b << a << endl;

	return 0;
}