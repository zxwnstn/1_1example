## �̴ϼȶ����� ����Ʈ
�����ڳ� ���Կ����� ���ϰ� �̿��ϱ�!

###
	#include<iostream>
	#include<cassert>
	#include<initializer_list>
	using namespace std;

	class IntArray
	{
	private:
		unsigned m_length = 0;
		int *m_data = nullptr;

	public:
		IntArray(unsigned length)
			: m_length(length)
		{
			m_data = new int[length];
		}
	}

	int main()
	{
		int my_arr1[5] = {1, 2, 3, 4, 5};
		int *my_arr2 = new int[5]{1, 2, 3, 4, 5};
		auto il = {10, 20, 30}; //�������� �̴ϼȶ����� ����Ʈ��~�ν�����
		
		//�� ���� �̴ϼȶ����� ����Ʈ�� �츮�� ���� Ŭ�������� �����ϰ� �ʹ�?

		intArray int_array{1, 2, 3, 4, 5};
		cout << int_array << endl;

		return 0;
	}

	class IntArray
	{
	private:
		unsigned m_length = 0;
		int *m_data = nullptr;

	public:
		IntArray(unsigned length)
			: m_length(length)
		{
			m_data = new int[length];
		}

		//�̴ϼȶ����� ����Ʈ ����� ������ ����!
		IntArray(const initializer_list<int> &list)
			: IntArray(list.size())
		{
			int count = 0;
			for(auto & e : list)
			{
				m_data[count] = e;
				++count
			}

			//�� ��������for���¸� ����ϴ� ���ϱ�?
			// �̴ϼȶ����� ����Ʈ��[] �ε��� ������ �������� �ʾƼ� �׷���.
			for(unsinged count = 0; count < list.size(); count++)
				m_data[count] = list[count]	// �̺κп��� ������
		}

		//�̴ϼȶ������ ����Ʈ�� ����Ұ�� ���Կ����ڵ� ������ �س��ƾ� �Ѵ�.
		//-����-
		IntArray array operator = (const IntArray & arr)
		{
			if(this == &arr)
				return *this;
			
			m_length = arr.m_length;
			
			arr.m_data = delete [];
			if(arr.m_data != nullptr)
			{
				m_data = new int [m_length];
				for(int i = 0; i < m_length; i++)
					m_data[i] = arr.data[i];
			}

		}


		friend ostream & operator << (ostream & out, IntArray & arr)
		{
			for(unsigned i = 0; i < arr.m_length; i++)
				out << arr.m_data[i] << " ";
			out << endl;
			return out;
		}

		~IntArray()
		{
			delete [] this->m_data;
		}

	}