#include<iostream>
#include<string>
#include<limits>
#include<typeinfo>
using namespace std;

int main()
{
	//���ڿ�
	char a[] = "abcsdf";
	string b("���ؼ� Ÿ��");
	cout << a << b << endl;

	cout << endl;
	
	//���ڿ� �Է¹ޱ�
	string c;
	cout << "�̸��� �Է��� �ּ���" << endl;
	getline(std::cin, c);
	
	string d;
	cout << "���̸� �Է��� �ּ���" << endl;
	getline(std::cin, d);
	cout << c << " " << d << endl; 
	cout << "���� �ڷ����� " << (typeid(d).name()) << endl;
	cout << endl;
	
	//���ڸ� int�ڷ������� �޾ƺ���
	int i;
	cout << "���̸� �Է����ּ���(int)" << endl;
	cin >> i;
	std::cin.ignore(numeric_limits<streamsize>::max(), '\n');	//std::cin.ignore(32767, '\n');
	cout << i << endl;
	cout << "���� �ڷ�����" << typeid(i).name() << endl; 
	cout << endl;

	// string ����
	string hw = c + d;
	hw += " ¯�߻��� ";
	cout << hw << endl;

	return 0;

}
