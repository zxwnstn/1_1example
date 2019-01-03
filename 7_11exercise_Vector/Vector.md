## ���͸� ����ó�� ����ϱ�

### resize�� �ǹ�
���ʹ� size�� �ְ�, capacity�� �ִ�.
�����δ� capacity��ŭ�� �뷮�� �����ִ�.

	#include<iostream>
	#include<vector>
	using namespace std;

	int main()
	{
		vector<int> v{1, 2, 3, 4}
		
			
		for(auto &e : v)
			cout << e << " ";		//1 2 3 4
		cout << endl;				
		cout << v.size() << v.capacity;			//4 , 4

		v.resize(10)				//size�� 10���� �ٲ۴ٸ�?

		for(auto &e : v)
			cout << e << " ";		//1 2 3 4 0 0 0 0 0 0 0
		cout << endl;
		cout << v.size() << v.capacity;			// 10 10

		v.resize(2)
		for(auto &e : v)
			cout << e << " ";					//1 2 

		cout << v.size() << v.capacity;			//2 3	??
		cout << v[0] << v[1] << v[2];			//��Ÿ�� ����
		cout << v.ar(2) << endl;				//��Ÿ�� ����

		�ּҰ��� �ƿ� �����´ٸ�
		int *ptr = v.data();
		cout << ptr[2] << endl;					//���� 3�� �̾Ƴ�
		// ���� ���������� �ǹ̴�
		// ������ �ӵ������ ���� �������� �����Ѵ�.
		// ���� �����̶�� ������ ����� ���̰� ���ʿ��� �κ��� �޸𸮿� �ݳ��ؾ� �ϴµ�
		// ���ʹ� �׷��� ������ ������ �����Ӹ� �ϰ� �ִ� ������ ���̴�.
	}
### reserve�� �ǹ�
	int main()
	{
		vector<int> v{1,2,3};
		v.reserve(1024);		// �޸��� �뷮�� �̸� Ȯ���� ���ٴ������� ������ �ؼ�
								// �̷��� ����ϴ� ���� �ӵ��鿡�� �ξ� ����ϴ�.
		for(auto &e : v)
		{
			cout << e << " ";			// 1 2 3 �� ���
		}
		cout << endl;
		cout << v.size() >> " " << v.capacity(); << endl;	// 3 ���
	}

### ���͸� ����ó�� �̿��ϱ�

	void print(const vector<int> &stack)
	{
		for(auto &e : v)
			cout << e << " ";
		cout << endl;
	}
	int main()
	{
		vector<int> stack;

		stack.push_back(3);		
		printStack(stack)		3
		stack.push_back(3);		
		printStack(stack)		3 3
		stack.push_back(3);		
		printStack(stack)		3 3 3
		stack.pop();
		printStack(stack);		3 3
		stack.pop();
		printStack(stack);		3
		stack.pop();
		printStack(stack);
	}