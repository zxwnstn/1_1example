#include<iostream>
#include<typeinfo>
#include<iomanip>
using namespace std;

int main()
{
	//numeric conversion
	long double ld = 3.141591;
	double d = ld;
	cout << "d��" << d << " �ڷ����� " << typeid(d).name() << endl;

	float f = 3.14f;
	int i = f;
	cout << "f��" << (i) << " �ڷ����� " <<  typeid(i).name() << endl;

	double d_2 = 3.1411111111111;
	float f_2 = d_2;
	cout << "f_2��" << d_2 << " �ڷ����� " << typeid(f_2).name() << endl;
	cout << "���е��� �����մϴ�.f_2��" << setprecision(12) << f_2 << " �ڷ����� " <<
		typeid(f_2).name() << endl;

}