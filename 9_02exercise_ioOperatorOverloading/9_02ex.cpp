#include<iostream>
#include<string>
#include<fstream>
using namespace std;

//������ Ŭ���� Card�� ������� Card�� �̸���, ���ݷ�, ������� ��������� ���´�.
class Card
{
private:
	string mName;
	int mAttack;
	int mDefence;

public:
	Card(const string &name_in = "defalt", const int &attack_in = 0, const int &defence_in = 0)
		: mName(name_in)
		, mAttack(attack_in)
		, mDefence(defence_in)
	{}	//�ʱ�ȭ �κ�..

	//��������� �����ε�.. (���ǿ��� ���� �״�� �����߽��ϴ�.)
	Card operator + (Card& card2)
	{
		string temp_name = this->mName + card2.mName;
		int temp_attack = this->mAttack + card2.mAttack;
		int temp_defence = this->mDefence + card2.mDefence;
		return Card(temp_name, temp_attack, temp_defence);
	}

	//��� ������
	friend ostream& operator << (ostream &out, const Card &card1)
	{
		out << "( " << card1.mAttack << ", " << card1.mDefence << ", " << card1.mName << " )";
		return out;
	}

	//�Է� ������
	friend istream& operator >> (istream &in, Card &card1)
	{
		in >> card1.mName >> card1.mAttack >> card1.mDefence;
		return in;
	}
};

int main()
{
	ofstream of("out.txt");
	Card c1, c2;


	cin >> c1 >> c2;
	//Card c3 = c1 + c2;			// ī���ν��Ͻ� ���� ��������� ���� �ߵ�
	cout << c1 << c2 << endl;		// �ߵ�
	cout << c1 + c2 << endl;		// �ȵ� �̤�
	of << c1 << c2;

	of.close();
	return 0;
}