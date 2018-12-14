#include<iostream>
#include<typeinfo>
#include<iomanip>
using namespace std;

int main()
{
	//numeric conversion
	long double ld = 3.141591;
	double d = ld;
	cout << "d는" << d << " 자료형은 " << typeid(d).name() << endl;

	float f = 3.14f;
	int i = f;
	cout << "f는" << (i) << " 자료형은 " <<  typeid(i).name() << endl;

	double d_2 = 3.1411111111111;
	float f_2 = d_2;
	cout << "f_2는" << d_2 << " 자료형은 " << typeid(f_2).name() << endl;
	cout << "정밀도를 조정합니다.f_2는" << setprecision(12) << f_2 << " 자료형은 " <<
		typeid(f_2).name() << endl;

}