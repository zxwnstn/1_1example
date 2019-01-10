#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<random>
#include<ctime>
using namespace std;

class Card
{
private:
	string mName;
	int mAttack;
	int mDefence;

public:
	Card(const string &name_in = "default", const int &attack_in = 0, const int &defence_in = 0)
	{
		mName = name_in;
		mAttack = attack_in;
		mDefence = defence_in;
	}

	int getAttack()
	{
		return mAttack;
	}
	void setAttack(const int &attack_in, Card &card)
	{
		this->mAttack = attack_in;
	}

	friend ostream& operator << (ostream &out, const Card &c1)
	{
		out << "( " << c1.mName << ", " << c1.mAttack << ", " << c1.mDefence << " )";
		return out;
	}


	friend bool operator > (const Card &c1, const Card &c2)
	{
		if (c1.mAttack == c2.mAttack)
			return c1.mDefence > c2.mDefence;
		else
			return c1.mAttack > c2.mAttack;
	}

	friend bool operator < (const Card &c1, const Card &c2)
	{
		if (c1.mAttack == c2.mAttack)
			return c1.mDefence < c2.mDefence;
		else
			return c1.mAttack < c2.mAttack;
	}
};

void print(const vector<Card> &v)
{
	for (auto &e : v)
		cout << e << " ";
	cout << endl;
}

int main()
{
	Card card1("È£¶ûÀÌ", 9, 2);
	Card card2("»çÀÚ", 9, 3);
	Card card3("´Á´ë", 9, 1);
	if (card1 > card2)
		cout << "È£¶ûÀÌ ¿ì½Â!" << endl;
	else
		cout << "»çÀÚ ¿ì½Â!" << endl;

	if (card1 > card3)
	{
		cout << "È£¶ûÀÌ ¿ì½Â!" << endl;
	}
	else
		cout << "´Á´ë ¿ì½Â!" << endl;

	vector<Card> v(10);
	for (int i = 0; i < 10; i++)
	{
		v[i].setAttack(i, v[i]);
	}
	print(v);

	random_shuffle(v.begin(), v.end());
	print(v);

	sort(v.begin(), v.end());
	print(v);


}