#include<iostream>
using namespace std;

int main()
{
	//&& �������� ó����� Ȯ��
	int x, y;
	bool z;
	x = 1;
	y = 2;

	if (x == 2 && ++y == 3)
		cout << "true" << endl;
	else
		cout << "false" << endl;

	cout << y << endl;
	
	x = 2;
	if (x == 2 && ++y == 3)
		cout << "true" << endl;
	else
		cout << "false" << endl;	//++y �� , y++�϶��� ��� ���̸� �����غ���!

	cout << y << endl;

	// && �� || ������ �켱����
	bool v1 = true;
	bool v2 = false;
	bool v3 = false;

	bool r1 = v1 || v2 && v3;
	bool r2 = (v1 || v2) && v3;

	cout << r1 << r2 << endl;

	return 0;

}