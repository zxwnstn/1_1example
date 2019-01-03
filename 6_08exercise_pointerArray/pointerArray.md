## �����Ϳ� �����迭

###	
	include <iostream>
	using namespace std;

	int main()
	{
		int array[5]{9, 7, 5, 3, 1};

		cout << array << endl;		// 16���� �ּҰ� ����
		cout << array[1] << " " << array[2] << endl; // 7, 5
		cout << &array[0] << endl;

		arr�� ��� �迭�� �ƴ϶� �����ʹ�.
		5���� ������ ��� �ִ� ù��° �ּҸ� ���ϴ� ���̴�.

		cout << *array << endl;		// 9 , ������?

		int *ptr = array;
		cout << ptr << endl;		// array�� �ּҰ� 16������
		cout << *ptr << endl;		// ptr�ּҿ� ��� ���� 9

		char name[] = "jackjack";
		cout << *name << endl;
	}

### �����Ϳ� �����迭�� ������ ����?

	#include<iostream>

	int main()
	{
		int array[5] = {9, 7, 5, 3, 1};
		cout << sizeof(array) << endl;	// array�� ����� ������ ���� �޶�����.

		int *ptr = array;
		cout << sizeof(ptr) << endl;	// �ּҰ� ��ü�� ũ�� �� 4����Ʈ�� ���´�.
		cout << *array << endl;

		*array = 100;					//�������� ��������?

		return 0;
	}

	//������
	void printArray(int array[])		// int *array�� ����.
	{
		cout << sizeof(array) << endl;	// ���������δ� �̹� �����ʹ�
	}

	int main()
	{
		int array[] = {9, 7, 5, 3, 1};
		printArray(array);
		cout << *array << endl;			//***�Լ� �ۿ����� ���� ���ع�����.
										//cpp������ ���� �̷��� �Ⱦ��� ���۷����� ����.

	}

### ����ü

	#include<iostream>
	using namespace std;

	struct Mystucet
	{
		int array[] = {9, 7, 5, 3, 1};
	};

	void doSomething(Mystruct ms)
	{
		cout << sizeof(ms.array) << endl;
	}


	int main()
	{
		Mystruct ms;
		cout << ms.array[0] << endl;
		
		dosomething(ms);			//20���� ���������� ���´�

		return 0;
	}

	struct Mystucet
	{
		int array[] = {9, 7, 5, 3, 1};
	};

	void doSomething(Mystruct *ms)
	{
		cout << sizeof((*ms).array) << endl;
	}


	int main()
	{
		Mystruct ms;
		cout << ms.array[0] << endl;
		
		dosomething(&ms);			//20���� ���������� ���´�
									// ����ü ���� �ִ� �����ʹ� �Լ��� �Ķ���ͷ� �־ 
									// ���� ��ȯ ���� �ʴ´ٴ� �Ҹ�, �迭 ��ü�� ����.
		return 0;
	}