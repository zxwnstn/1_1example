#include<iostream>
using namespace std;

class PoweredDevice
{
public:
	int m_i;

	PoweredDevice(int power)
//		: m_i(power)
	{
		cout << "PoweredDevice : " << power << '\n';
	}
};

//class Scanner : public PoweredDevice
class Scanner : virtual public PoweredDevice
{
public:
	Scanner(int scanner, int power)
		: PoweredDevice(power)
	{
		cout << "Scanner: " << scanner << '\n';
	}
};

//class Printer : public PoweredDevice
class Printer : virtual public PoweredDevice
{
public:
	Printer(int printer, int power)
		: PoweredDevice(power)
	{
		cout << "Printer: " << printer << '\n';
	}
};

class Copier : public Scanner, public Printer
{
public:
	Copier(int scanner, int printer, int power)
//		: Scanner(scanner, power), Printer(printer, power) virtual을 붙이면 에러가 남
		: Scanner(scanner, power), Printer(printer, power), PoweredDevice(power)
	{}
};


int main()
{
	Copier cop(1, 2, 3);

	cout << &cop.Scanner::PoweredDevice::m_i << endl;	// 두개의 PoweredDevice m_i는 
	cout << &cop.Printer::PoweredDevice::m_i << endl;	// 사실상 다른놈이된다.
	//virtual을 붙여주면 같은놈이 된다.
	return 0;
}