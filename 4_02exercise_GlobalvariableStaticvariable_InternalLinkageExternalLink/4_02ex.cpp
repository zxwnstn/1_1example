#include<iostream>
#include"MyConstants.h"
using namespace std;

extern int my_number;
//xtern void doSomething();
void doSomething();
extern int my_number;

int main()
{
	cout << my_number << endl;
	doSomething();
	cout << "In main.cpp pi is " << constants::pi << " " << &constants::pi << endl;

	return 0;
}