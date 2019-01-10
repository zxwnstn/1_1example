## ���� ������ �����ε�
���� ���� vs ���� ����

###
	#include<iostream>
	#include<cassert>
	using namespace std;

	class Mystring
	{
	//private:
	//public:
		char *m_date = nullptr;
		int m_length = 0;

	public:
		Mystring(const char* source = "")
		{
			assert(source);		//���ڿ��� ������ �ʾҴ°�.

			m_length = strlen(source) + 1;
			m_data = new char[m_length];

			for(int i = 0; i < m_length; i++)
				m_data[i] = source[i];

			m_data[m_length - 1] = '\0';
		}

		~Mystring()
		{
			delete[] = m_data;
		}

		char* getString()
		{
			cout << m_data;
		}
		
		int getLength()
		{
			return m_length;
		}
	};

	int main()
	{
		Mystring hello("Hello");

		cout << (int*)hello.m_data << endl;
		cout << hello.getString() << endl;

		{
			Mystring copy = hello;		// ��������ڰ� �̿��(���Կ����ڰ� �ƴϴ�!)
										// �� ���� ������ �������Ƿ� 
										// �����Ϸ��� �����ִ� �⺻(�Ǵ� ����Ʈ)
										// ��������ڰ� �̿�ȴ�.

			// �׷��� ���⼭ �Ѱ��� ������ �߻��ȴ�!
			// ��������ڰ� char m_date�� �ּҸ� �״�� �������شٴ� ���̴�.
			cout << (int*)copy.m_data << endl;	//���� �� mdate�� �ּҰ��� �� hello.m_data�� ����.
			cout << copy.getString() << endl;
		}
		// �������� ������ copy�� �����Ҵ� �޸𸮴� �ı��ڿ� ����
		// delete�� �ǹ����µ�..

		cout << hello.getString() << endl;
		// ���� �ռ� copy�� ���� �ּҰ��� �������ִ� hello.m_data��
		// ������ �����Ҽ� ������?
	}

### ���Կ����ڿ� ����
	
	class Mystring
	{
	//private:
	//public:
		char *m_date = nullptr;
		int m_length = 0;

	public:
		Mystring(const char* source = "")
		{
			assert(source);		//���ڿ��� ������ �ʾҴ°�.

			m_length = strlen(source) + 1;
			m_data = new char[m_length];

			for(int i = 0; i < m_length; i++)
				m_data[i] = source[i];

			m_data[m_length - 1] = '\0';
		}

		Mystring(const Mystring &source)
		{
			cout << "copy constructor" << endl;

			m_length = source.m_length;

			if(souce.m_dat != nullptr)
			{
				m_data = new char[m_length];

				for(int i = 0; i < m_length; ++i)
					m_data[i] = source.m_data[i];
			}
			else
				m_data = nullptr;
		}
		// �̷��� ptr�ּҰ� �������� ����Ͽ� ���ο� ptr�ּҸ� �Ҵ��� �ִ°���
		// "���� ����" ����Ѵ�.
		// ���� �ռ� ����ô� copy constructor�� �ߴ� �ּҰ��� �״�� �����ϴ°���
		// "���� ����" ����Ѵ�.

		//����� ���Կ����� �����ε��ϱ�!
		Mystring& operator = (const Mystring &source)
		{
			//shallow copy��� �״�� �����ϰ� ������.
			/*
			this->m_data = source.m_data;
			this->m_length = source.m_length;
			*/

			//deep copy���
			cout << "Assignment operator" << endl;

			if(this == &source)	// prevent self-assignment
				return *this;		// ���Կ������� ��� �ڱⰡ �ڱ⸦ �����Ҽ� �ִ�.
									// ���� �����Ҽ� �ִ� ������ �ƴ�����(�ʹ��� �翬�� �Ⱦ��� ����)
									// �̸��¸� �̷����̴�.
									//int a = 4;
									// a = a;

			delete [] m_data;	// ���Կ����ڶ�� �ʹ����� �翬�ϰ�
								// ���� �̹� �����ִ� �޸𸮰� ������ ���ɼ��� ����. (��� nullptr�̶�)
								// �̰��� ���������� �ٽ� �Ҵ��� �޴´�.

			m_length = source.m_length;

			if(source.m_data != nullptr)
			{
				m_data = new char[m_length];	//�̺κ��� �ٽ� �Ҵ� �޴� �κ�
				
				for(int i = 0; i < m_length; i++)
					m_data[i] = source.m_data[i];
			}
			// �߰��� ���� �ڵ���� �ִٸ�.. �װ��� �������� ã�Ƽ� �Լ��� �����ִ°��� ����.
			// ������ ���� ����� ���� ���ϱ� ���� �κ��̹Ƿ� �̷��� �ۼ���
			
		}

		~Mystring()
		{
			delete[] = m_data;
		}

		char* getString()
		{
			return m_data;
		}
		
		int getLength()
		{
			return m_length;
		}
	};

	int main()
	{
		MyString hello("Hello");
		cout << (int*)hello.m_data << endl;
		cout << hello.getString << endl;

		{
			Mystring copy = hello;
			cout << (int*)copy.m_data << endl;		//�ּҰ� �ٸ���
			cout << copy.getString() << endl;
		}

		cout << hello.getString() << endl;			// �ּҰ� �ٸ� ptr�� ���������Ƿ� ������� ��������
	}

	//�ٸ� ����
	int main()
	{
		Mystring hello("Hello");
		Mystring str1 = hello;		// copy constructor �۵�
									// �ʱ�ȭ�� = �� ���Կ����ڰ� �ƴϴ�..

		Mystring str2;
		str2 = hello;				// Assignment operator �۵�

		//�̷��� ���԰� �ʱ�ȭ ��ȣ�� �߰����ٸ�
		// Mystring str(hello) �̷������� �ڵ��ϴ°͵� ����̴�.
	}

	//���� �����ڸ� ������ ������ ���������մ�.
	//�̷��� shallow copy�� ����� ���ƾ� �Ѵٸ�
	//Mystring(const Mystring &source) = delete�� ���� ����å�� �ִ�.

	//���� ���̽�Ʈ���� �����ϰ� ���� �ʰ� ��ɸ� �߰� �ϰ� �ʹٸ�
	//�׳� ��ӹ����� �ȴ�.