#include<iostream>
#include<string>
#include<fstream>
using namespace std;

//나만의 클래스 Card를 만들었다 Card는 이름과, 공격력, 수비력을 멤버변수로 갖는다.
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
	{}	//초기화 부분..

	//산술연산자 오버로딩.. (강의에서 배운것 그대로 구현했습니다.)
	Card operator + (Card& card2)
	{
		string temp_name = this->mName + card2.mName;
		int temp_attack = this->mAttack + card2.mAttack;
		int temp_defence = this->mDefence + card2.mDefence;
		return Card(temp_name, temp_attack, temp_defence);
	}

	//출력 연산자
	friend ostream& operator << (ostream &out, const Card &card1)
	{
		out << "( " << card1.mAttack << ", " << card1.mDefence << ", " << card1.mName << " )";
		return out;
	}

	//입력 연산자
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
	//Card c3 = c1 + c2;			// 카드인스턴스 끼리 산술연산은 아주 잘됨
	cout << c1 << c2 << endl;		// 잘됨
	cout << c1 + c2 << endl;		// 안됨 ㅜㅜ
	of << c1 << c2;

	of.close();
	return 0;
}