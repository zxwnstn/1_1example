## ��¡���� ��ȣ��

namespace���� �Լ�,���� �̸��� ��ġ�� ��� �ؾ� �ϴ°�?

<br>

### �Լ����� ��ġ�� ���

	#include<iostream>
	using namespace std;

	namespace a
	{
		int my_var(10);
		int count(123);
	}

	namespace b
	{
		int my_var(20);
	}

	int main()
	{
		using namespace std;
		//�Ϲ������� ����ϴ� cout�� iostream ��� �ȿ��ִ� 
		//std���ӽ����̽� �ȿ� �ִ� �Լ� std��
		using namespace a
		using namespace b

		cout << my_var << endl; //my_var is ambigus ����
								//�̸��� ���� ������ ���ÿ� ���� �����ϱ� ������ 
								//����� ����

		cout << a::my_var << endl;
		cout << b::my_var << endl;
		//�Ǵ�

		//���� �ɰ���
		using namespace b;
		{
			cout << my_var << endl;
		}
		using namespace a;
		{
			cout << my_var << endl;
		}
		//�������� ����ϴ°��� �����ض�!
		
		//namespace std�� ��ġ�� ���
		using namespace a;	
		cout << count << endl; // std���� count �Լ��� �ִ�.	
							   // �̷� ��쿡�� �ٸ� ����̾���.
							   
		return 0;
	}