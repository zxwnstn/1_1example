#include<iostream>

using namespace std;

void dosomething()
{
#ifdef MY_APPLE
	cout << "APPLE" << endl;
#else
	cout << "ORANGE" << endl;
#endif
}