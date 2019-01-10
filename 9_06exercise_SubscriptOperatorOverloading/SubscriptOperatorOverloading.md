## ÷�� ������ �����ε� �ϱ�
��̳� ���͸� �̿��Ҷ� []�� �̿��Ѵ�

###
	#include<iostream>
	using namespace estd;

	class IntList
	{
	private:
		int m_list[10]{0, 1, 2, 3, 4, 5, 6, 7, 8 , 9};		
		
	public:
		void setItem(int index, int value)
		{
			m_list[index] = value;
		}

		int getItem(int index)
		{
			return m_list[index];
		}

		//���ݴ� ���ϰ�? (������ �̿��ϱ�)
		int *getList()
		{
			return m_list;
		}
	};

	int main()
	{
		IntList my_list;
		my_list.setItem(3, 1);
		cout << my_list(3) << endl;
		// ����� ������ �������(������ �ǰ�)

		my_list.getList()[3] = 1;
		cout << my_list.getList()[3] << endl;
		// ������ �������� ������... �����Ѱ� ���Ѱ���

	}

	÷�� ������ �����ϱ�
	class IntList
	{
	private:
		int m_list[10]{0, 1, 2, 3, 4, 5, 6, 7, 8 , 9};	

	public:
		int & operator [](const int index)	// �ٸ� �ڷ����� ���ü� �ִ�!
		{
			return m_list[index];			// �ſ���!
		}
	};
	//�� operator [] �� ���۷����� ������ �Ǿ�� �ϴ°�?
	�߻����غ���
	�ؿ� 1������ ���ó�� ���� ��ȯ�ؾ� �Ҷ��� �ְ�
	�� ��Ȯ�ϰԴ�
	������ �Ǵ� �̳༮�� �׻� �ּҸ� ���� �ִ� lvalue���� �Ѵٴ� �������̴�.

	int main()
	{
		IntList my_list;
		my_list[3] = 10;	// 1��
		cout << my_list[3] << endl;
	}

	const�� ��������!
	int main()
	{
		const IntList my_list;
		my_list[3] = 10;	// �������� �翬�� �Ұ��ϴ�. ������
		cout << my_list[3] << endl;	// �д°� ������ �Ҽ� ���� �ʾƾ� �ϴ°�?
		//��Ÿ������ �׷��Դ� �ȵǸ� const ���� operator�� ���θ����� �Ѵ�.
	}

	class IntList
	{
	private:
		int m_list[10]{0, 1, 2, 3, 4, 5, 6, 7, 8 , 9};	

	public:
		int & operator [](const int index)	
		{
			return m_list[index];			
		}

		//const ������ [] ������ �����ε�
		const int & operator [](const int index) const
		{
			return m_list[]
		}
	};

## �����߿��� �κ�!
	//assert ����ϱ�

	#include<iostream>
	#include<cassert>
	using namespace std;

	class IntList
	{
	private:
		int m_list[10]{0, 1, 2, 3, 4, 5, 6, 7, 8, 9}
	public:
		int & operator [] (const int index)
		{
			assert(index >= 0);	// assert�� �߸��� �Է� ����!
			assert(index < 10);	// ��Ÿ�ӿ��� ������� ����������.

			return m_list[index];
		}
		//���� subscript �����ڴ� ���귮�� �ſ����� ����Ѵ�.
		//inline���� �۾Ƴ��� ���ڸ����̴�.
		//if���� ������ �ְ����� ����ӵ� ���ذ� �ſ� �ɰ��ϴ�.

		const int & operator [] (const int index) const 
		{
			assert(index >= 0);
			assert(index < 10);

			return m_list[index];
		}
	};

	//���ǻ���

	int main()
	{
		IntList *list = new IntList;	//�����ͷ� ����� ���°��?
		// Ŭ���� IntList�� ��̰� �����迭�� �Ҵ��� �Ǵ� �����̴�.

		list[3]	= 10// �̷������� �����Ϳ� �ٷ� �ε��� ������ �Ұ��� �ϴ�..
					// ��� ���ٴ� �ǵ��� �޶�����.
		(*list)[3]	// ���۷����� �ѹ� ���ְ�
	}