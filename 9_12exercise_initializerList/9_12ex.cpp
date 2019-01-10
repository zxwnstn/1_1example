#include<iostream>
#include<cassert>
#include<initializer_list>
using namespace std;

class JsString
{
private:
	int mLength;
	char* mData = nullptr;

public:
	//Constructor
	JsString(const char* source = "")
	{
		cout << "Constructor!" << endl;
		assert(source);

		mLength = strlen(source) + 1;
		mData = new char[mLength];
		for (int i = 0; i < mLength; i++)
			mData[i] = source[i];
		mData[mLength - 1] = '\0';
		cout << "in class! �Ҵ�� �ּҰ�!" << &mData << endl << endl;
	}

	//���� ������
	JsString(const JsString& source)
	{
		cout << "copy constructor!" << endl;
		mLength = source.mLength;

		if (source.mData != nullptr)
		{
			mData = new char[mLength];
			for (int i = 0; i < mLength; i++)
				mData[i] = source.mData[i];
		}
		else
			mData = nullptr;
		cout << "in class! �Ҵ�� �ּҰ�!" << &mData << endl << endl;
	}

	//initailizer list�� �̿��� �����ڸ� ���� �迭 ũ�⸸ �޾����� ������
	JsString(const int& length_in)
	{
		cout << "�̴ϼȶ������� ���� ������ �۵�!" << endl;
		mLength = length_in;
		mData = new char[length_in+1];
		cout << "in class! �Ҵ�� �ּҰ�!" << &mData << endl << endl;
	}

	//initailizer list�� �̿��� ������
	JsString(const initializer_list<char> &list)
		: JsString(list.size())
	{
		int cnt = 0;
		for (auto &e : list)
			mData[cnt++] = e;
		mData[cnt] = '\0';
	}

	//���� ������
	JsString& operator = (const JsString& source)
	{
		cout << "Assignment operator!" << endl;
		if (this == &source)
			return *this;				// �ڱ� �ڽ� ���Թ���

		delete[] mData;
		mLength = source.mLength;

		if (source.mData != nullptr)	// �ڽ��� �ƴϰ� mData�� nullptr�� �ƴ϶��
		{
			mData = new char[mLength];
			for (int i = 0; i < mLength; i++)
				mData[i] = source.mData[i];
			cout << "in class! �Ҵ�� �ּҰ�!" << &mData << endl << endl;
		}
		else
			mData = nullptr;
	}

	//subscript ������
	char& operator [] (const int &x)
	{
		return mData[x];
	}

	//�Է�..  ������;
	friend istream& operator >> (istream& in, JsString& source)
	{
		char *temp = new char[1000];
		in >> temp;

		source.mLength = strlen(temp) + 1;
		source.mData = new char[source.mLength];

		strcpy(source.mData, temp);

		delete[] temp;
		
		return in;
	}


	//���
	friend ostream& operator << (ostream& out, const JsString& source)
	{
		out << source.mData;
		return out;
	}

	//���� ��ȯ �Լ�
	const int length()
	{
		return mLength;
	}

	//�ı���
	~JsString()
	{
		cout << "Destructor!" << endl;
		cout << "in fuction! ������ �ּҰ�" << &mData << endl;
		delete[] mData;
	}
};

int main()
{
	//JsString s1 = "kiseop91";			//constructor ȣ��Ȯ��
	//
	//JsString s2 = s1;					//��������� Ȯ��
	//JsString s3(s1);					//
	//cout << s2 << " " << s3 << "\n\n";	//s1�� ������ ������ s2 s3�� Ȯ��
	//
	//JsString s5;						//�Է¹ޱ�
	//cin >> s5;							
	//cout << s5 << endl;					//�Է¹��� s5���
	//JsString s4;
	//s4 = s1;							//���Կ����� Ȯ��
	//cout << s4 << endl;

	//JsString s6{ 'a', 'b', 'c', 'd', 'e' };	//�̴ϼȶ����� ����Ʈ Ȯ��
	//cout << s6 << endl;

	//cout << s6[3] << endl;				//subscript ���۷����� Ȯ��

	//cout << s6.length() << endl;		//legth�Լ� Ȯ��

	//									//getline�� �⼷�̿��� �ñ�ٽ�


	JsString kiseop;
	cin >> kiseop;
	cout << kiseop;
	return 0;
}