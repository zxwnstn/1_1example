#include<iostream>
using namespace std;

enum class Colors
{
	BLACK,
	WHITE,
	RED,
	GREEN,
	BLUE
};

int main()
{
	int x;
	cin >> x;

	switch (x)
	{
	case 0:
		cout << x;
		break;
	case 1:
		cout << x;
		break;
	default:
		cout << "your nothing";
	}
	cout << endl;

	Colors y;
	cin >> x;

	switch (x)
	{
	case 0:
		y = Colors::BLACK;
		cout << "Your color is Black";
		break;
	case 1:
		y = Colors::WHITE;
		cout << "Your color is white";
		break;
	case 2:
		y = Colors::RED;
		cout << "Your color is red";
		break;
	case 3:
		y = Colors::GREEN;
		cout << "Your color is green";
		break;
	case 4:
		y = Colors::BLUE;
		cout << "Your color is blue";
		break;
	default:
		cout << "Your Color is not include rgb";
	}
	cout << endl;
	cout << static_cast<int>(y) << endl;

	return 0;
}
