#include<iostream>
#include<cmath>

int main()
{
	using namespace std;

	double d1 = 100 - 99.99;
	double d2 = 10 - 9.99;
	double error = std::abs(d1 - d2);
	double epsilon = 1e-10;
	
	if ( error < epsilon)
		cout << "Approximately equal" << endl;
	else
		cout << "Not equal" << endl;

	epsilon = 1e-16;

	if ( error < epsilon)
		cout << "Approximately equal" << endl;
	else
		cout << "Not equal" << endl;
	
	return 0;
}