## ���� ������
�ٸ� Ŭ������ �����ڸ� ����ϴ°�?!

###
	#include<iostream>
	#include<string>
	using namespae std;

	class Student
	{
	private:
		static int m_id;
		string m_name;
	public:
		
		Student(const int  &id_in, const string &name_in)
			: m_id(id_in), m_name(name_in)			//�̸��� �ް� id�� �⺻���� ������
		{}											//Ŭ���� ������ id�� �ް� �Ҽ� �ִ°�?

		Stundent(const string &name_in)
			: m_id(0) ,m_id(id_in)					// �̷������� ����Ҽ� ������ �ſ� ������ ����̴�.
		{}											// �����ϴ°��� �ʱ�ȭ �ϴ°��� �ѱ������� �������� ����.
		

		void print()
		{
			cout << m_id << " " << m_name << endl;
		}
	};

	int main()
	{
		Student st1(0, "Jack Jack")
		st1.print();

		Student st2
	}
�ùٸ� ����
	
	class Student
	{
	private:
		static int m_id;
		string m_name;
	public:
		
		Stundent(const string &name_in)
			: Student(0, name_in)				
		{}								//�̷������� �ڵ��ϴ°��� ���� �����ڶ� �Ѵ�.

		Student(const int  &id_in, const string &name_in)
			: m_id(id_in), m_name(name_in)
		{}											

		//�ٸ� ��� - �ʱ�ȭ �Լ��� ����� �ش�. ������ ��õ
		Stundent(const string &name_in)
		{
			init(0, name_in)
		}				

		Student(const int  &id_in, const string &name_in)
		{
			init(id_in, name_in)
		}			
		
		void init(const int &id_in, const string &name_in)
		{
			m_id = id_in;
			m_name = name_in
		}
		

		void print()
		{
			cout << m_id << " " << m_name << endl;
		}
	};