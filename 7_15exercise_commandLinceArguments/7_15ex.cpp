#include<iostream>
using namespace std;

int main(int argc, char *argv[])
{
	for (int count = 0; count < argc; count++)
	{
		cout << argv[count] << endl;		//실행파일 주소와 이름이 쭉 뜸
	}
}