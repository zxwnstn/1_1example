#include<iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;

	char *arr = new char[n] {0, };
	cin >> arr;

	cout << "Å©±â " <<sizeof(arr) << endl;

	for(int i = 0; i < n; i++)
		cout << arr[i] << endl;

	delete[] arr;

	return 0;
}