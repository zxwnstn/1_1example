## �ܾ��ϱ�

###
	#include<cassert>
	#include<iostream>
	using namespace std;

	void PrintValue(const array<int, 5> &my_array, const int& ix)
	{
		assert(ix >= 0);
		assert(ix <= my_array.size()-1);			//assert ��ġ���ֱ�
		//assert(ix >= 0 && ix <= my_array.size()-1)// �ΰ��� ������ ���°��� ���� ��Ȯ

		cout << my_array[ix] << endl;
	}

	int main()
	{
		const int number = 5;

		//�ѹ� ������ ���� 5���߸� ��.
		//����׽� �ּ�ó������ ȿ�����̰� �ٷιٷ� �߻��Ǵ� ������ ������ �˼��ִ�
		assert(number == 5);			// release mode������ �۵����� ����

		array<int, 5> my_array{1,2,3,4,5}
		cout << my_array[5] << endl;
		printValue(my_array, 100)		// ģ���� �ͼ� 100�� �ִ´ٸ�?

		return 0;
	}

### ����ƽ assert (������ Ÿ�ӿ��� ���� �߻�)

	#include<iostream>
	#include<array>
	#include<assert>
	using namespace std;

	int main()
	{
		const int x =5;

		assert(x == 5);

		static_assert(x == 5, " ���� �����");	//������ Ÿ�ӿ� ���� �߻���Ű��


	}