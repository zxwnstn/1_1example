#include<iostream>
#include<vector>
#include<string>
using namespace std;

class Cardmaterial
{
private:
	string mName;
	string mWeight;
	string mWidth;
	string mHeight;
public:
	Cardmaterial()
		: mName("아트지")
		, mWeight("0.1g")
		, mWidth{"4.3cm"}
		, mHeight{ "8.7cm" }
	{}
	
	void print_info()
	{
		cout << mName << " " << mWeight << " " << mWidth << " " << mHeight;
		cout << endl;
	}

	void setMaterial(const string &setName, const string &setWeight,
		const string &setWidth, const string &setHeight)
	{
		mName = setName;
		mWeight = setWeight;
		mWidth = setWidth;
		mHeight = setHeight;
	}
};


class Card
{
private:
	string mName;
	int mNumber;
	string mDetail;
	int mAttackP;
	int mDefenceP;
	vector<int> mSerial;
	Cardmaterial mMaterial;

public:
	Card()
		: mName{"유희왕"}
		, mNumber{1}
		, mDetail{"None"}
		, mAttackP{0}
		, mDefenceP{ 0 }
		, mSerial{ 1, 1, 1, 1, 1 }{}
		
	void print()
	{
		cout << "카드명 " << mName << endl;
		cout << "번호 " << mNumber << endl;
		cout << "상세 " << mDetail << endl;
		cout << "공격력 " << mAttackP << endl;
		cout << "방어력 " << mDefenceP << endl;
		cout << "시리얼 번호 ";
		for (auto &e : mSerial)
			cout << e;
		cout << endl; 
		mMaterial.print_info();
		cout << endl;
	}

	void print_Serial()
	{
		for (auto &e : mSerial)
			cout << e;
		cout << endl; cout << endl;
	}

	void print_matarial()
	{
		mMaterial.print_info();
	}

	void setCard(const string &setName, const int &setNumber, const string &setDetail,
		const int &setAttack, const int &setDef)
	{
		mName = setName;
		mNumber = setNumber;
		mDetail = setDetail;
		mAttackP = setAttack;
		mDefenceP = setDef;
	}

	void setSerial(const int &n)
	{
		cout << "시리얼 넘버를 수정합니다!" << endl;
		vector<int> setSerial;
		for (int i = 0; i < n; i++)
		{
			int x;
			cin >> x;
			setSerial.push_back(x);
		}
		mSerial = setSerial;
	}

	void setMatarial()
	{
		string tempname;
		string tempwidth;
		string tempweight;
		string tempheight;
		getline(cin, tempname);
		cin >> tempwidth >> tempweight >> tempheight;
		mMaterial.setMaterial(tempname, tempweight, tempwidth, tempheight);
		mMaterial.print_info();
	}

	string getName()
	{
		return mName;
	}


};

//int main()
//{
//	Card OldRat;
//	OldRat.setCard("늙은 쥐", 011, "이카드는 매우 약합니다..", 1, 2);
//	OldRat.print();
//
//	OldRat.setMatarial();
//
//	OldRat.print();
//
//
//}