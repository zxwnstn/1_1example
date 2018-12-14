#include<iostream>
#include"MyConstants.h"
using namespace std;

extern int my_number(9);

void doSomething()
{
	cout << "test.cpp pi is " << constants::pi << " " << &constants::pi << endl;
}