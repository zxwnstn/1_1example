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
//	cout << arr << " �Լ��� ������ abce" << endl;
//	for (int i = 0; i < 4; i++)
//	{
//		arr[i] = 'i';
//	}
//	cout << arr << " ����� �������" << endl;
//}
//
//void dosomething2(char arr[5])
//{
//	cout << arr << " �Լ��� ������ abce" << endl;
//	for (int i = 0; i < 4; i++)
//	{
//		arr[i] = 'j';
//	}
//	cout << arr << " ����� �������" << endl;
//}

int main()
{
	//int x = 10;
	////int &ref = x;
	//char str[5] = "abce";
	//char(&ref)[5] = str;		// [number] �迭ũ�� �����ֱ�!!

	//cout << str << "���ڿ� abce" << endl;

	//cout << "�Լ��� ����ֱ�" << endl;
	//dosomething(str);
	//cout << str << " �Լ��� ����� abce" << endl;

	//cout << ref << " string abce�� ��������" << endl;
	//dosomething2(ref);
	//cout << str << "���������� �ѱ� �Լ��� ���" << endl;
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
	cout << &it << "it�� �ּ�" << endl;
	cout << ptr_it << "ptr_it�� ����� �ּ�" << endl;
	cout << &ptr_it << "������ ptr_it�� �ּ�" << endl;
	
	


	return 0;

}