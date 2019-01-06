## const�� class

###
	#include<iostream>
	using namespace std;

	class Something
	{
	public:
		int m_value = 0;

		void setValue(int value) { m_value = value; }
		int getValue() { return m_value;}
	};

	int main()
	{
		const Something something;	//�ν��Ͻ��� ����, ������Ʈ�� �ϱ⵵ �Ѵ�.
		something.setValue(3);		//������ ����
		//const�� �ν�Ʈ�� ����ٴ� ���� �ȿ� �ִ� ����� ���� const�� ����ٴ�
		//���� �ǹ��Ѵ�.

		cout << something.getValue() << endl; // �̹����� ���� ������ ����.
		//�������δ� �Ҽ� �־�δ�.
		//����Լ��� const��� ����Ҽ��ִ�.
	}

	class Something
	{
	public:
		int m_value = 0;

		void setValue(int value) { m_value = value; }
		int getValue() const
		{ 
			return m_value;
		}
	};
	//�̰��� �����ϴٸ�, setValue��� �Լ��� const�� �ٲ� ��� m_value��
	//�ٲܼ� ���� ������ �����Ҽ��ִ�.

	class Something
	{
	public:
		int m_value = 0;

		void setValue(int value) const
		{ 
			m_value = value;	// ������ �̺κп��� ������ ���� �ȴ�.
		}						// m_value�� const�̱� ������ �Ҽ� ���°��̴�.
	};

	//const�� ����Ҽ��ִ� �Լ���� const�� �������� ����.

	class Something
	{
	public:
		int m_value = 0;

		Something()
		{
			cout << "Costructor" << endl;
		}

		void setValue(int value) { m_value = value; }
		int getValue() { return m_value;}
	};

	void print(Something st)		//����Ʈ �Լ� �����
	{
		cout << st.m_value << endl;
		cout << &st << endl;
	}

	int main()
	{
		const Something something;

		cout << &something << endl;	//��µǴ� �ּҴ� �и� �ٸ���.
		print(something)			//��Ʈ���ʹ� �ѹ� ��µȴ�.
									//�Լ����� ���簡 �̷�� ���� �ʴ°��ϱ�?
		//���簡 �Ǹ鼭 �ʱ�ȭ �Ǵ°� �´�
		//������ Ŭ���� �ȿ��� ���� ����Ʈ���Ͱ� �����ִ�!!	
	}
	//������ ����Ʈ���� Ȯ���ϱ� "Copy Constructor"

	class Something
	{
	public:
		int m_value = 0;

		Somthing(const Something& st_in)		//ī�� ����Ʈ����
		{
			m_value = st_in.m_value;
			cout << "Copy constructor" << endl;
		}

		Something()
		{
			cout << "Costructor" << endl;
		}

		void setValue(int value) { m_value = value; }
		int getValue() { return m_value;}
	};

	//�̷��� ���翬���� �������� const &�� ���� ����.
	void print(const Something &st)

	//�����ִٸ� const�� �� ���°��� ����.

### ��� const���
��� �Լ� const�� �����ε� �ϱ�

	#include<string>
	#inclue<iostream>
	using namespace std;

	class Someting
	{
	public:
		string m_value = "default"

		const string& getValue() const
		{
			cout << "const version" << endl;
			return m_value;
		}

		string& getValue()
		{
			cout << "non-const version" << endl;
			return m_value;
		}
	}

	int main()
	{
		Something something
		something.getValue() = 10;		// �ٲܼ� ���� ������ ���۷�����


		const Something something2;
		something2.getValue() = 10;		// �ٲܼ� ���� ������ ����Ʈ���۷�����
		//���۷����� �����ϴ°��� �Ȱ�����
		//���⼭ ���Ǳ�� ������� �ϴ°��� ����Լ� �����ε��ε�
		//���ϸ� ������� �����ε��� �ȵȴٰ� �߾���(���� ���� ����)
		//����Ÿ�Կ� const�� ���̴��� �Ⱥ��̴��Ŀ� ���󼭴� �����ε��� �ȴ�.
		//�ٸ� ����� �ڵ带 �б� ���� �˾Ƶδ� ���� ����.
		//����Լ��� const�� ����ٸ� �Ϲ������� ���ϵ� const�� �Ѵ�.
	}