#include<iostream>
#include<string>
#include<cassert>
using namespace std;

class Person
{
private:
	string mName;
	int mAge;
	char *mArr;

public:
	Person(const string &name_in = "defalt" , const int &age_in = 0)
		: mName(name_in), mAge(age_in)
	{
		if (mName != "defalt")
		{
			cout << " Constructor! Person의 신용카드 번호를 초기화 합니다! 길이와 번호를 입력하시오" << "\n";
			int n;
			cin >> n;
			mArr = new char[n];
			for (int i = 0; i < n; i++)
				cin >> mArr[i];
			cout << _msize(mArr) / sizeof(char) << " 당신 카드번호의 길이" << endl;
		}
		else
			mArr = new char[1];
	}

	operator int()
	{
		cout << "캐스팅 오퍼레이터 작동!" << endl;
		return mAge;
	}

	Person& operator () (int i)
	{
		cout << "funct연산자 작동" << endl;
		mAge += i;
		return *this;
	}

	Person& operator ++ ()
	{
		cout << "전위증가 연산자 작동" << endl;
		mAge++;
		return *this;		
	}

	Person operator ++ (int)
	{
		Person temp("defalt", mAge);
		(*this).mAge++;

		return temp; //결과적으로는 자기자신을 리턴하는것이 아닌 temp 퍼슨을 리턴하는것
	}

	char& operator [] (const int& index)
	{
		cout << "subscript연산자 작동!" << endl;
		assert(index >= 0);
		assert(index < _msize(mArr) / sizeof(char));
		return mArr[index];
	}

	

	friend ostream& operator << (ostream &out, const Person &p)
	{
		out << p.mName << " " << p.mAge;
		return out;
	}

	~Person()
	{
		cout << mName << " Desturctor! 동적배열 매모리 삭제" << endl;
		delete[] mArr;
	}

};

int main()
{
	Person p1("준수", 11);
	Person p2;
	cout << p1 << endl;
	cout << ++p1 << endl;
	cout << p2 << endl;
	//cout << p1++ << endl;		//템프 class 생성됨, 오류발생
	//cout << p1 << endl;		
	int n;
	cout << "확인하고 싶은 카드번호 자리수를 입력하시오!" << "\n";
	cout << "단 생성할때 입력한 범위를 초과해서는 아니되오" << "\n";
	cin >> n;
	cout << p1[n] << endl;
	cout << p1(5) << endl;
	cout << int(p1) << endl;
	return 0;

}


//주의사항
1. class를 리턴할때 자신을 리턴한다면 참조로 리턴하지 않으면 클래스가 따로 생성된다.(중요)
2. 동적할당 배열의 사이즈를 알고싶을때는 sizeof가 아닌 _msize를 써야된다.
3. 생성자에 조건을걸어 사용할수 있다.
4. 동적할당을 하지 않았는데 delete를 하면 오류가 난다.
5. 후위 증가연산자를 쓸때는 어쩔수 없이 temp클래스를 생성해야된다.
