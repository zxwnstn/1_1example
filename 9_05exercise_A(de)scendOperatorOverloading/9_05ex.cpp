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
			cout << " Constructor! Person�� �ſ�ī�� ��ȣ�� �ʱ�ȭ �մϴ�! ���̿� ��ȣ�� �Է��Ͻÿ�" << "\n";
			int n;
			cin >> n;
			mArr = new char[n];
			for (int i = 0; i < n; i++)
				cin >> mArr[i];
			cout << _msize(mArr) / sizeof(char) << " ��� ī���ȣ�� ����" << endl;
		}
		else
			mArr = new char[1];
	}

	operator int()
	{
		cout << "ĳ���� ���۷����� �۵�!" << endl;
		return mAge;
	}

	Person& operator () (int i)
	{
		cout << "funct������ �۵�" << endl;
		mAge += i;
		return *this;
	}

	Person& operator ++ ()
	{
		cout << "�������� ������ �۵�" << endl;
		mAge++;
		return *this;		
	}

	Person operator ++ (int)
	{
		Person temp("defalt", mAge);
		(*this).mAge++;

		return temp; //��������δ� �ڱ��ڽ��� �����ϴ°��� �ƴ� temp �۽��� �����ϴ°�
	}

	char& operator [] (const int& index)
	{
		cout << "subscript������ �۵�!" << endl;
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
		cout << mName << " Desturctor! �����迭 �Ÿ� ����" << endl;
		delete[] mArr;
	}

};

int main()
{
	Person p1("�ؼ�", 11);
	Person p2;
	cout << p1 << endl;
	cout << ++p1 << endl;
	cout << p2 << endl;
	//cout << p1++ << endl;		//���� class ������, �����߻�
	//cout << p1 << endl;		
	int n;
	cout << "Ȯ���ϰ� ���� ī���ȣ �ڸ����� �Է��Ͻÿ�!" << "\n";
	cout << "�� �����Ҷ� �Է��� ������ �ʰ��ؼ��� �ƴϵǿ�" << "\n";
	cin >> n;
	cout << p1[n] << endl;
	cout << p1(5) << endl;
	cout << int(p1) << endl;
	return 0;

}


//���ǻ���
1. class�� �����Ҷ� �ڽ��� �����Ѵٸ� ������ �������� ������ Ŭ������ ���� �����ȴ�.(�߿�)
2. �����Ҵ� �迭�� ����� �˰�������� sizeof�� �ƴ� _msize�� ��ߵȴ�.
3. �����ڿ� �������ɾ� ����Ҽ� �ִ�.
4. �����Ҵ��� ���� �ʾҴµ� delete�� �ϸ� ������ ����.
5. ���� ���������ڸ� ������ ��¿�� ���� tempŬ������ �����ؾߵȴ�.
