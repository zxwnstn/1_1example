## �Ҹ���
�������� �ݴ밡 �Ǵ� ���?
�ı��� �ϱ� ���ٴ� �ν��Ͻ��� ������� ȣ��Ǵ� �Լ��� ���Ѵ�.

###

	#include<iostream>
	using namespace std;

	class Simple
	{
	private:
		int m_id;

	public:
		Simple(const int &id_in)
			: m_id(id_in)
		{
			cout << "Constructor" < m_id << endl;	
		}

		~Simple()
		{
			cout << "Destuctor" << m_id << endl;
		}
	};

	int main()
	{
		Simple s1(0);
		Simple s2(1);
		//	Constructor 0 
			Constructor 1
			Destuctor 1
			Destuctor 0		���

		return 0;
	}

	//���� �Ҵ��?

	int main()
	{
		Simple *s1 = new Simple(0);
		Simple s2(1);

		delete s1;

	//	Constructor 0 
		Constructor 1
		Destuctor 0
		Destuctor 1		���
	}

���� ���� �ִ°�??

	#include<iostream>
	using namespace std;

	class IntArray
	{
	private:
		int *m_arr = nullptr;
		int m_length = 0;

	public:
		IntArray(const int length_in)
		{
			m_length = legth_in
			m_arr = new int[m_length];
			cout << "Constructor" << endl;
		}

		int size()
		{
			return m_length;
		}
	};

	int main()
	{
		while(true)
		{
			IntArray my_int_arr(100000);		// �޸� ������ �߻���.. delete�� ����..
			//delete [] my_int_arr.m_arr;		// m_arr�� private����� �ܺο��� ������ �ȵȴ�
		}

		�Ҹ��ڸ� ���� ���� �����ϴ�!!
	}

	class IntArray
	{
	private:
		int *m_arr = nullptr;
		int m_length = 0;

	public:
		IntArray(const int length_in)
		{
			m_length = legth_in
			m_arr = new int[m_length];
			cout << "Constructor" << endl;
		}

		~IntArray()
		{
			if(m_arr != nullptr)	// ������ġ
				delete [] m_arr;	// ���� ����ϰ� �޸� ������ ������ �ִ�.
									// ���� �ȿ��� �̹� ������ �Ǿ��ִ�.
		}

		int size()
		{
			return m_length;
		}
	};