## �Լ� ������

	#include<iostream>
	#include<array>
	using namespace std;

	int func()
	{
		return 5;
	}

	int goo()
	{
		return 10;
	}

	int goo2(int x)
	{
		return 6;
	}

	int main()
	{
		int(*fcnptr)(); = func;		//�Լ� ������ �����, �Լ��� �����ʹ�!
		cout << fcnptr() << endl;

		fcnptr = goo;				//������ ��� �ٲٱ�
		cout << fcnptr() << endl;
									
		int(*fcnptr2)(int) = goo2;  //���ϵǴ� �ڷ�����, �Ű������� �ڷ����� ����� �Ѵ�.

	}

	int main()
	{
		array<int, 10> my_array = {1,2,3,4,5,6,7,8,9,0};

		for(auto element : my_array)
		{
			if(element%2 == 0)
				cout << element;
			cout << endl;
		}
	}

### ����Ʈ �Լ��� ��Ÿ���� �־ ����ϱ�
	void PrintNumbers(const array<int, 10> &my_array, bool print_even)
	{
		for(auto element : my_array)
		{
			if(print_even && element%2 == 0)
				cout << element;
			if(!print_even && element%2 == 1)
				cout << element;
		}
	}

	int main()
	{
		array<int, 10> my_array = {1,2,3,4,5,6,7,8,9,0};
		PrintNumbers(my_array, true);	// ¦�� ���
		PrintNumbers(my_array, flase);	// Ȧ�� ���

	}
### ����Ʈ �Լ��� �Լ��� �Ķ���ͷ� �޾Ƽ� ����ϱ�
	bool isEven(const int& number)
	{
		if (number % 2 == 0) return true;
		else return false;
	}

	bool isOdd(const int& number)
	{
		if (number % 2 !== 0) return true;
		else return false;
	}

	void PrintNumbers(const array<int, 10> &my_array, bool(*check_fcn)(const int&))
	//void PrintNumbers(const array<int, 10> &my_array, bool(*check_fcn)(const int&) = isEvne)
	{
		for(auto element : my_array)
		{
			if(check_fcn(element) == true)
				cout << element;
		}
	}

	int main()
	{
		array<int, 10> my_array = {1,2,3,4,5,6,7,8,9,0};

		PrintNumbers(my_array, isEven);	// ¦�� ���
		PrintNumbers(my_array, isOven);	// Ȧ�� ���

		//Printnumber(my_array);		// ����Ʈ�� isEven�Լ��� ȣ��ȴ�.
	}


### �� �Ķ���� �ڷ����� �ܼ��ϰ� �ٲ��ֱ� (type def or using)
		bool isEven(const int& number)
	{
		if (number % 2 == 0) return true;
		else return false;
	}

	bool isOdd(const int& number)
	{
		if (number % 2 !== 0) return true;
		else return false;
	}

	typedef bool(*check_fcn_t)(const int&);
	using check_fcn_t = bool(*)(const int&);

	void PrintNumbers(const array<int, 10> &my_array, bool(*check_fcn_t)(const int&) = isEvne)
	void PrintNumbers(const array<int, 10> &my_array, check_fcn_t check_fcn_t = isEven)			//Ÿ�Ե��� ���� using�� �� ����
	{
		for(auto element : my_array)
		{
			if(check_fcn(element) == true)
				cout << element;
		}
	}

	int main()
	{
		array<int, 10> my_array = {1,2,3,4,5,6,7,8,9,0};

		PrintNumbers(my_array, isEven);	// ¦�� ���
		PrintNumbers(my_array, isOven);	// Ȧ�� ���

		//Printnumber(my_array);		// ����Ʈ�� isEven�Լ��� ȣ��ȴ�.
	}


###	functional �̿��ϱ�
	#include<functional>							functional ����

		bool isEven(const int& number)
	{
		if (number % 2 == 0) return true;
		else return false;
	}

	bool isOdd(const int& number)
	{
		if (number % 2 !== 0) return true;
		else return false;
	}

	void PrintNumbers(const array<int, 10> &my_array, function<bool(const int&)> chek_fcn = isEvne)
	{
		for(auto element : my_array)
		{
			if(check_fcn(element) == true)
				cout << element;
		}
	}

	int main()
	{
		array<int, 10> my_array = {1,2,3,4,5,6,7,8,9,0};

		function<bool(const int&)> fcnptr = isEven;
		PrintNumbers(my_array, fcnptr);	// ¦�� ���

		fcnptr = isOdd;
		PrintNumbers(my_array, fcnptr);	// Ȧ�� ���

		Printnumber(my_array);		// ����Ʈ�� isEven�Լ��� ȣ��ȴ�.
	}