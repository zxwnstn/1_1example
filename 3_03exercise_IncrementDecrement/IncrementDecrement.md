## 3-3�� ����������

���̾��� �ܼ��ϳ�, �Ǽ��ϱ� ����
<br>

### ++, --�� Ȱ��
	#include <iostream>

	int main()
	{
		using namespace std;

		int x = 5;
		int y = ++x;		// x���ٰ� 1�� ���Ѵٴ� �ǹ�
			y = --x;		// x���ٰ� 1�� ���ٴ� �ǹ�
		int z = x--			//  ���� ����. --�� ++�� �յڷ� ���ϼ� �ִ�.
		
		cout << y << endl;

		return 0;
	}


### ++, --�� ������

	#include<iostream>
	using namespace std;
	
	int main()
	{
		int x = 6 , y = 6;
		cout << x << " " << y << endl;
		// cout << ++x << " " << --y << endl;	// 7 5		��
		cout << x++ << " " << y-- << endl;	// 6 6 ??		��
		cout << x << " " << y << endl;		// 7 5			��


		return 0;
	}

	���̷� ������ �߻��ɱ�??
	���� ��� x�� cout ��Ʈ���� ������ ���� ++�Ǵ� --�� ó���ȴ�.
	������ ���� ��� x�� �ϴ� ���� cout ��Ʈ���� ������ �״����� ++, --�� ó���Ѵ�.
	���� �鿡 ��°�, �� x , y�� r-value�� ���� �޶����� ���̴�.

���� - � ������� ��µɱ�?

	int x = 6 , y = 6;
	cout << x << " " << y << endl;
	cout << ++x << " " << --y << endl;
	cout << x << " " << y << endl;	
	cout << x++ << " " << y_-- << endl;
	cout << x << " " << y << endl;

### ���ۿ�?

	#include <iostream>

	int Add(int a, int b)
	{
		return a + b;
	}
	
	int main()
	{
		using namespace std;

		int x = 1;
		int y = 2;
		int v = Add(x, ++x)		// 4 ???
		cout << v << endl;

		x =  x++				//undefined�� ���.

			}

�����Ϸ��� ���� �ٸ��� �ִ�. ���ǰ� �ȵȴ�. �̷����� �ڵ��� �ϸ�ȵȴ�.
	
	v = Add(x, ++y)
	cout << v << endl;		// �� ������ �ᵵ�ȴ�. (���� ��ġ�� �ʱ� ������)