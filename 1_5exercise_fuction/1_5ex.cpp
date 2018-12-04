#include<iostream>
using namespace std;

//두 인자를 합해주는 함수
int AddTwoNumber(int n_a,int n_b)
{ 
	int sum = n_a + n_b;
	
	return sum;
}

//헬로우 월드를 출력해 주는 함수 (기능만 수행하므로 매개변수와 리턴값이 없음
void printHelloWorld()
{
	cout << "hellow, world" << endl;
	return;
}

//인자를 입력받아 두개를 더해주는 함수
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