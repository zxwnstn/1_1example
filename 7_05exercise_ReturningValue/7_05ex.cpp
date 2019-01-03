#include<iostream>
#include<tuple>
#include<string>
#include<array>
#include<vector>
using namespace std;

int& get_arr(array<int, 100>& my_array, int ix)
{
	return my_array[ix];			
}

tuple<int, double> getTuple()
{
	int a = 10;
	double d = 3.14;
	return make_tuple(a, d);
}

vector<string> getVector(int n)
{
	vector<string> temp;
	for (int i = 0; i < n; i++)
	{
		string x;
		cin >> x;
		temp.push_back(x);
	}

	return temp;
}

struct zxwnstn
{
	string name;
	int height;
	int weight;
	int age;
	string sex;
	string memo;
	void Get_zxwnstn()
	{
		cin >> name >> height >> weight >> age>> sex;
		getline(cin, memo);
	}
	void Print_zxwnstn_member()
	{
		cout << "name " << name << endl;
		cout << "height " << height << endl;
		cout << "weight " << weight << endl;
		cout << "age " << age << endl;
		cout << "sex " << sex << endl;
		cout << "memo " << memo << endl;
	}

};

zxwnstn Get_zxwnstn()
{
	zxwnstn zx;
	string name;
	int height;
	int weight;
	int age;
	string sex;
	string memo;
	cin >> name >> height >> weight >> age >> sex;
	getline(cin, memo);
	zx = { name, height, weight, age, sex, memo};

	return zx;
}




int main()
{
	//tuple 연습
	tuple<int, double> my_tuple = getTuple();
	cout << get<0>(my_tuple) << endl;
	cout << get<1>(my_tuple) << endl;
	
	//vector 연습
	int n;
	cin >> n;
	auto my_vector = getVector(n);
	for (int i = 0; i < n; i++)
	{
		cout << my_vector[i] << endl;
	}

	//참조연산자로 리턴받기 array편
	array<int, 100> my_array;
	get_arr(my_array, 25) = 30;
	cout << my_array[25] << endl;


	//구조체 연습
	zxwnstn my_zxwnstn;
	my_zxwnstn.Get_zxwnstn();
	my_zxwnstn.Print_zxwnstn_member();

	auto kiseop_zxwnstn = Get_zxwnstn();
	kiseop_zxwnstn.Print_zxwnstn_member();

	
	return 0;

}
