### �帧����
<br>
### �帧������ ����
�ߴ� - Halt
<br>
���� - Jump
goto, break, contine
<br>
���� �б� - Conditional branches
if, switch
<br>
����(����) - Loops
while, do while , for
<br>
���� ó�� - Exceptions
try, catch, throw

### �ߴ�
	#include <iostream>
	#include <cstdlib>
	using namespace std;

	int main()
	{
		cout << "I love you" << endl;		//�߰��� ���� �ʹٸ�?

		// �ߴܿ� ���� ��Ȳ�� ���� �ּ�ó��
		
		exit(0);							// ����ϰ� ������. ���α׷��� ������.
											// ������Ҷ� ���� ����.

		cout << "I love you too" << endl;

		return 0;
	}