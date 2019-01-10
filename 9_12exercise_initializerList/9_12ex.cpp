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
		cout << "in class! 할당된 주소값!" << &mData << endl << endl;
	}

	//복사 생성자
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
		cout << "in class! 할당된 주소값!" << &mData << endl << endl;
	}

	//initailizer list를 이용한 생성자를 위한 배열 크기만 받았을때 생성자
	JsString(const int& length_in)
	{
		cout << "이니셜라이저를 위한 생성자 작동!" << endl;
		mLength = length_in;
		mData = new char[length_in+1];
		cout << "in class! 할당된 주소값!" << &mData << endl << endl;
	}

	//initailizer list를 이용한 생성자
	JsString(const initializer_list<char> &list)
		: JsString(list.size())
	{
		int cnt = 0;
		for (auto &e : list)
			mData[cnt++] = e;
		mData[cnt] = '\0';
	}

	//대입 연산자
	JsString& operator = (const JsString& source)
	{
		cout << "Assignment operator!" << endl;
		if (this == &source)
			return *this;				// 자기 자신 대입방지

		delete[] mData;
		mLength = source.mLength;

		if (source.mData != nullptr)	// 자신이 아니고 mData가 nullptr이 아니라면
		{
			mData = new char[mLength];
			for (int i = 0; i < mLength; i++)
				mData[i] = source.mData[i];
			cout << "in class! 할당된 주소값!" << &mData << endl << endl;
		}
		else
			mData = nullptr;
	}

	//subscript 연산자
	char& operator [] (const int &x)
	{
		return mData[x];
	}

	//입력..  개빡셈;
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


	//출력
	friend ostream& operator << (ostream& out, const JsString& source)
	{
		out << source.mData;
		return out;
	}

	//길이 반환 함수
	const int length()
	{
		return mLength;
	}

	//파괴자
	~JsString()
	{
		cout << "Destructor!" << endl;
		cout << "in fuction! 삭제된 주소값" << &mData << endl;
		delete[] mData;
	}
};

int main()
{
	//JsString s1 = "kiseop91";			//constructor 호출확인
	//
	//JsString s2 = s1;					//복사생성자 확인
	//JsString s3(s1);					//
	//cout << s2 << " " << s3 << "\n\n";	//s1을 복사해 생성된 s2 s3값 확인
	//
	//JsString s5;						//입력받기
	//cin >> s5;							
	//cout << s5 << endl;					//입력받은 s5출력
	//JsString s4;
	//s4 = s1;							//대입연산자 확인
	//cout << s4 << endl;

	//JsString s6{ 'a', 'b', 'c', 'd', 'e' };	//이니셜라이저 리스트 확인
	//cout << s6 << endl;

	//cout << s6[3] << endl;				//subscript 오퍼레이터 확인

	//cout << s6.length() << endl;		//legth함수 확인

	//									//getline은 기섭이에게 맡기겟습


	JsString kiseop;
	cin >> kiseop;
	cout << kiseop;
	return 0;
}