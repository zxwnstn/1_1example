#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int arr[] = { 1, 2, 3, 4, 5 };
	for (auto &x : arr)
		x += 10;
	for (int &x : arr)
		cout << x << endl;

	vector<int> v1 {7, 8, 6, 4, 5};
	for (const int &x : v1)
		cout << x+1;
	return 0;
}