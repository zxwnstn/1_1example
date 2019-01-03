#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	char str1[50];
	char str2[50];
	char str3[50];
	fgets(str1, 50, stdin);
	cout << str1 << endl;
	
	strcpy_s(str3, 10, str1);
	cout << str3 << endl;

	return 0;
}