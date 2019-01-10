## 이니셜라이저 리스트
생성자나 대입연산자 편하게 이용하기!

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
		auto il = {10, 20, 30}; //오른쪽이 이니셜라이저 리스트다~인식해줌
		
		//이 편한 이니셜라이저 리스트를 우리가 만든 클래스에도 적용하고 싶다?

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

		//이니셜라이저 리스트 사용한 생성자 구현!
		IntArray(const initializer_list<int> &list)
			: IntArray(list.size())
		{
			int count = 0;
			for(auto & e : list)
			{
				m_data[count] = e;
				++count
			}

			//왜 레인지드for형태를 사용하는 것일까?
			// 이니셜라이즈 리스트는[] 인덱스 연산을 제공하지 않아서 그렇다.
			for(unsinged count = 0; count < list.size(); count++)
				m_data[count] = list[count]	// 이부분에서 에러남
		}

		//이니셜라이즈드 리스트를 사용할경우 대입연산자도 구현을 해놓아야 한다.
		//-숙제-
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