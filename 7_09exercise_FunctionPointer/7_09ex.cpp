//#include<iostream>
//#include<array>
//#include<functional>
//using namespace std;
//
//bool isEven(const int &element)
//{
//	if (element % 2 == 0)
//		return true;
//	return false;
//}
//
//bool isOdd(const int &element)
//{
//	if (element % 2 == 1)
//		return true;
//	return false;
//}
//
//
//void Print_array( array<int, 10> &my_array, function<bool(const int&)> check_num = isEven)
//{
//	for (auto &x : my_array)
//		if (check_num(x))
//			cout << x << " ";
//	cout << endl;
//}
//
//int main()
//{
//	array<int, 10> my_array = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	
//	function<bool(const int&)> fcn = isEven;
//	Print_array(my_array, fcn);
//
//	fcn = isOdd;
//
//	Print_array(my_array, fcn);
//
//	Print_array(my_array);
//	return 0;
//}

#include<iostream>
#include<array>
using namespace std;

bool isEven(const int &x)
{
	if (x % 2 == 0)
		return true;
	return false;
}

bool isOdd(const int &x)
{
	if (x % 2 == 1)
		return true;
	return false;
}

//typedef bool(*check_fcn)(const int&);
using check_fcn = bool(*)(const int&);

void Print_array(const array<int, 10> my_array, check_fcn chek = isEven)
{
	for (int i = 0; i < 10; i++)
	{
		if (chek(my_array[i]))
			cout << my_array[i] << " ";
	}
	cout << endl;
}

int main()
{
	array<int, 10> my_array = { 3, 4, 1, 3, 6, 11, 13, 14, 17, 8 };
	Print_array(my_array);
	return 0;


}
