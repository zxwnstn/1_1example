## ĸ��ȭ, ���� ������, ���� �Լ�
�پ ���α׷��Ӵ�?
������ ���̴°��� �ܼ�ȭ�ϰ�, �����ϰ�, �������踦 ����� �ϰ�, ������ �����ϴ°��̴�.
�ֱ� ����Ʈ������ ����� ��Ȱ���̴�.

### ĸ��ȭ Encapsulation
	#include<iostream>;
	#include<string>
	#include<vector>
	using namespace std;

	stuct Date					//�̰��� Ŭ������ �ٲٸ�??
	{
		int m_month;
		int m_day;
		int m_year;
	};

	int main()
	{
		Date today;     //{8, 4, 2025};
		today.m_month = 8;
		today.m_day = 4;			//���⿡ �������� �� ���.
		today.m_year = 2025;		//�װ��� �ǹ̴�? Ŭ���� Date���ϱ� �ǵ��� ��;;, ��� ���ϴ� ���̴�.
									//�ؼҹ����δ� class�ȿ� public: �� ���ָ� �ȴ�.
	}




### ���� ������
public : �ܺο��� ���� ���
private : �ܺο��� ���� ����(����Ʈ)
protected : ���� ��ȸ��..

�׷��ٸ� private���� ���Ƴ� Ŭ������� ��� ������� ����� �����ұ�?
access �Լ��� ������ش�!(Ŭ���� ������� �޴��� ���� ����)


### ���� �Լ�


	class Date
	{
		int m_month;
		int m_day;
		int m_year;

	public:
		void setDate(const int &month_input, const int& day_input, const int& year_input)
		{
			m_month = month_input;
			m_day = day_input;
			m_year = year_input
		}	// �ܺο� �ǻ������ ���� �Լ� �̰�, �޴����� �����ϸ� ����!
			// �� �Լ��� ������ ����������� (���ο���) �������� �̿��� �� ������ �ܺο����� ������ �����ϴ�.

		void setMonth(const int& month_input)
		{
			m_month = month_input;
		}

		const int &getDay()
		{
			reuturn m_day;
		}

	};

	int main()
	{
		Date today;
		today.setDate(8, 4, 2025);		//�䷱������ ���� �Ҽ��ִ�.
		today.setMonth(10);

		cout << today.getDay() << endl;

	}

�� todayŬ������ ���� �ϰ� �ʹ�.. �Լ��� ����� ����!
copy.copyFrom(today); ������ ����� ������?

	class Date
	{
	private:
		int m_month;
		int m_day;
		int m_year;

	public:
		void setDate(const int &month_input, const int& day_input, const int& year_input)
		{
			m_month = month_input;
			m_day = day_input;
			m_year = year_input
		}		//	�ܺο� �ǻ������ ���� �Լ� �̰�, �޴����� �����ϸ� ����!

		void setMonth(const int& month_input)
		{
			m_month = month_input;
		}// ����ǿ��� �̷��� Ŭ���� �Լ��� setters

		const int &getDay()
		{
			reuturn m_day;
		}// �̷��� Ŭ���� �Լ��� getters��� �θ���.

		void copyFrom(const Date &orginal) // copyFrom�� �������! Ư�������� �ڽ��� Ŭ���� Ÿ���� �޾ƿ´ٴ� ���̴�.
		{
			m_month = original.m_month;
			m_day = original.m_day;
			m_year = original.m_year;		// �׷��ٸ� original.m_something�� private�� 
											// ��Ģ�� �ܺηκ��� ������ �Ұ��� �ѵ� ��� �̷� ���´� ������ ���ϱ�?
		}

	};

	int main()
	{
		Date today;
		today.setDate(8, 4, 2025);		//�䷱������ ���� �Ҽ��ִ�.
		today.setMonth(10);
		cout << today.m_month << endl;
		Date coppy;

		coppy.coppyFrom(today);

		cout << today.getDay() << endl;
	}

### ���� �Լ� getter, setter�� ���� �� �ʹ�� ����?

	class Date
	{
	public:					// ����������� ���� �ۺ����� �ٲ��ְ�, �ܺο��� �������� �����ؼ� ����Ѵ� �����غ���
		int m_month;
		int m_day;
		int m_year;

	public:
		void setDate(const int &month_input, const int& day_input, const int& year_input)
		{
			m_month = month_input;
			m_day = day_input;
			m_year = year_input
		}//setter

		void setMonth(const int& month_input)
		{
			m_month = month_input;
		}//getter

		const int &getDay()
		{
			reuturn m_day;
		}

		void copyFrom(const Date &orginal) // copyFrom�� �������! Ư�������� �ڽ��� Ŭ���� Ÿ���� �޾ƿ´ٴ� ���̴�.
		{
			m_month = original.m_month;
			m_day = original.m_day;
			m_year = original.m_year;		// �׷��ٸ� original.m_something�� private�� 
											// ��Ģ�� �ܺηκ��� ������ �Ұ��� �ѵ� ��� �̷� ���´� ������ ���ϱ�?
		}

	};

	int main()
	{
		Date today;
		today.setDate(8, 4, 2025);		//�䷱������ ���� �Ҽ��ִ�.
		Date coppy;
		coppy.coppyFrom(today);

		copy.m_day =123;				//�ڵ����ݿ� ���� Date�� ��������� ���� ���ǰ� �ִٰ� �غ���!
										//�׷��� Ŭ���� ���ǿ��� m_day�� ����������� �مf�ٸ�??
										//�ܺο� �ٲ���� �ϵ��� �ſ� ���� ���� �ǰ� �ſ� ������ ����.
										//rename�� �ص� ���־� ��Ʃ����� ������� ���������.
										//�ۺ��� ����Ѵٸ� �̷��� �������� ������ִ�.

	}