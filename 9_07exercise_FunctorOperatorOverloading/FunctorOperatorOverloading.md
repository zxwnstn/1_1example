## ��ȣ ������ �����ε��� �Լ� ��ü
��ġ ��ü�� �Լ��ΰ� ó�� ����ϱ�!(�ǹ� �ľ� �߿�!)

###
	class Accumulator
	{
	private:
		int m_counter = 0;

	public:
		int operator() (int i)
		{
			return (m_counter += i);
		}
	};

	int main()
	{
		Accumulator acc;
		cout << acc(10) << endl;	// ��ü���� ���ͺ��⿡ �Լ����� ���δ�!
		cout << acc(20) << endl;

		return 0;
	}