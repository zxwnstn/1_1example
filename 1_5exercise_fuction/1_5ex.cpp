#include<iostream>
using namespace std;

int AddTwoNumber(int n_a,int n_b)
{ 
	int sum = n_a + n_b;
	
	return sum;
}

void printHelloWorld()
{
	cout << "hellow, world" << endl;
	return;
}

int InputNumbersum(int Input_a, int Input_b)
{
	cin >> Input_a;
	cin >> Input_b;
	
	int sum = Input_a + Input_b;

	return sum;
}

int main()
{
	cout << AddTwoNumber(1, 4) << endl;
	printHelloWorld(); cout << endl;
	cout << InputNumbersum(0,0) << endl;

	return 0;
}