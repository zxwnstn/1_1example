## ������ȣ
�Լ��� �Ű����� ������ �����ϰ� ���� �ʴٸ�??

###
	#include<iostream>
	#include<cstdarg> // for ellipsis
	using namespace std;

	double findAverage(int count, ...)		// �Ķ���ͷ� ���� �ƱԸ�Ʈ ������ ���� �޴´�.
	{
		double sum = 0;

		va_list list;
		
		va_start(list, count);

		for(int arg = 0; arg < count; ++arg)
			sum += va_arg(list, int);
		va_end(list);
		
		return sum / count;
	}

	int main()
	{
		cout << findAverage(1, 1, 2, 3, "Hello", 'c') << endl;	// �ƱԸ�Ʈ ���� 1�� �����Ƿ� �ڴ� �� ����
		cout << findAverage(3, 1, 2, 3) << endl;				// 2
		cout << findAverage(5, 1, 2, 3, 4, 5) << endl;			// 3
		cout << findAverage(10, 1, 2, 3, 4, 5) << endl;			// ���� �߻�

		return 0;
	}
	//���輺�� ��������
	������ �ƹ����� �ִ°��� ������ ���� �ڷ����� �ٸ��� �Ѵٸ� ������ �ɼ��ִ�.
	����ϱ� ��ư� ����뵵 ����, �ʺ��ڰ� �̿��ϱ� ������ �ʴ�.
	�������ؼ� ���ø��� ���� ���°��� ����� ���� �ִ�.