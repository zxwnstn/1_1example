##�پ��� ��ȯ ����
��, ����, �ּ�, ����ü, Ʃ��

###
	#include<iostream>
	using namespace std;

	int GetValue(int x)
	{
		int value = x * 2;
		return value;
	}

	int main()
	{
		int value = GetValue(3);		// ���� ���� ������ ������ �Ͼ��.
										// �����Ͱ� ���ٸ� (����ü�� Ŭ����) �����ɸ��� �ִ�.

		return 0;
	}

	int* GetValue(int x)
	{
		int value = x * 2;
		return &value;
	}

	int main()
	{
		int value = *GetValue(3);		// �������� �ʴ´�. ����� ������ ���۷��� �ϱ� �����̴�.
		int *valude = GetValue(3);		// �� �����ϴ�. ������ ������µ� �޸� �ּҸ� �ִ�??
										// ������ �����Ҽ� �ִ�.

		return 0;
	}

	//���丮 ����? �����޸� �ּҰ� ����
	int* allocateMemory(int size)
	{
		return new int=[size];
	}

	
	int main()
	{
		int *array = allocateMemory(1025);	// �Ϲ������� ���� �κ����ִ�.

		delete[] array;						// delete �� ���ο� �ְ� new�� �Լ��ȿ� �ִ�?

		return 0;
	}

	//return by refernce
	int& GetValue(int x)
	{
		int value = x * 2;					
		return value;						//�̺κп��� int &value�� �Ͻ������� �����ִ�.
	}

	int main()
	{
		int value = Getvalue(5);		//���� ����
		int &value = Getvalue(5);		//������ ���� ������ ũ��

		cout << value << endl;
		cout << value << endl;			//�����ִ� ���۷����� �����
										//�� �ּҰ��� �����ϰ� �����Ƿ� ������ ���� ����	
	}

	//return by refernce2
	#include<array>

	int& get(array<int,100>& my_array, int ix)
	{
		return my_array[ix];			//my_array[30]�� ���������ڸ� ����
	}

	int main()
	{
		std::array<int, 100> my_array;
		my_array[30] = 10;

		get(my_array, 30) = 1024;		//�̷� ������ ����� ���ָ���.
		cout << my_array[30] << endl;	//����� ��ҿ� ���� ������ó�� ���� �Ҽ��ִ�.

		//�̸� �׸�
		get(my_array, 30) *= 10;		//�̷������� ����� ������ ����.
										//�̷�Ÿ���� ���� ����!
	}
	

	//�������� ������ �ް� �ʹٸ�??
	//�Ϲ����� ������δ� ��Ʈ��ó �̿�

	 struct S{
	 	 int a, b, c, d;
	 };

	 S getStruct()
	 {
	 	 S my_s{1, 2, 3, 4};
	 };

	 int main()
	 {
	 	 S my_s = getStruct();		// �Լ��ϳ��� ���鶧���� ����ü �ϳ��� ¥�ߵȴ�??
									// �� ȿ����..

		 return 0;
	 }

	 #include<tuple>

	 tuple<int, double> getTuple()
	 {
	 	 int a =10;
		 double d = 3.14
		 return make_tuple(a,d);
	 }

	 int main()
	 my_tp = getTuple()
	 cout << get<0>(my_tp) << endl;		// a
	 cout << get<1>(my_tp) << endl;		// d  ������ ����...

	 c++17���� �߰��� ���

	 auto[a, d] = getTuple();
	 cout << a << d << endl;
