#include<iostream>
#include<vector>
#include<list>
#include<string>
using namespace std;

//void doSomthing3(vector<int> &v1)
//{
//	int len = v1.size();
//	for (int i = 0; i < len; i++)
//	{
//		cout << v1[i] << " ";
//	}
//	cout << endl;
//}
//
//void dosomething(char(&arr)[5])
//{
//	cout << arr << " 함수로 참조된 abce" << endl;
//	for (int i = 0; i < 4; i++)
//	{
//		arr[i] = 'i';
//	}
//	cout << arr << " 명령이 실행된후" << endl;
//}
//
//void dosomething2(char arr[5])
//{
//	cout << arr << " 함수로 참조된 abce" << endl;
//	for (int i = 0; i < 4; i++)
//	{
//		arr[i] = 'j';
//	}
//	cout << arr << " 명령이 실행된후" << endl;
//}

int main()
{
	//int x = 10;
	////int &ref = x;
	//char str[5] = "abce";
	//char(&ref)[5] = str;		// [number] 배열크기 꼭써주기!!

	//cout << str << "문자열 abce" << endl;

	//cout << "함수에 집어넣기" << endl;
	//dosomething(str);
	//cout << str << " 함수를 통과한 abce" << endl;

	//cout << ref << " string abce의 참조변수" << endl;
	//dosomething2(ref);
	//cout << str << "참조변수를 넘긴 함수의 결과" << endl;
	/*int n;
	cin >> n;
	vector<int> v;
	int x;
	v.push_back(3)*/
	
	//doSomthing3(v);


	list<pair<int,string>> mylist;
	for (int i = 0; i < 5; i++)
	{
		string temp;
		cin >> temp;
		mylist.push_back({ i, temp });
	}
	auto it = mylist.begin();
	for (auto it = mylist.begin(); it != mylist.end(); it++)
		cout << it->first << " " << it->second << endl;
	cout << endl;
	cout << it->first << endl;
	auto *ptr_it = &it;
	cout << &it << "it의 주소" << endl;
	cout << ptr_it << "ptr_it에 저장된 주소" << endl;
	cout << &ptr_it << "포인터 ptr_it의 주소" << endl;
	
	


	return 0;

}