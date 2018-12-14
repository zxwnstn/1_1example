## ��������, ��������, ���ο���, �ܺο���

���������� ������ ������� �ʾƾ� �ϰ�
���ú����� ���� �̿��Ͽ��� �Ѵ�.
������ ��Ȳ����, �ٸ��� �ִ�.

<br>

### ���� ���� Global variable

	#include
	using namespace std;

	int value 123;

	int main()
	{
		cout << value << endl; //123
		int value = 1;		   // �� ������ ���������μ� {}�����ȿ� ���ѵȴ�.
		cout << value << endl; //1

		//�������� value�� ����ϰ� �ʹٸ�??
		//���������� ::�� ����ϸ� �ȴ�.
		cout << ::value << endl;




		return 0;
	}
<br>

### ���� ���� static variable

1.
	#include<iostream>
	using namespace std;

	void doSomething()
	{
		int a = 1;
		a++
		cout << a << endl;
	}

	int main()
	{
		doSomething(); // 2
		doSomething(); // 2

	}

<br>

2. static ���� �̿��ϱ�

	#include<iostream>
	using namespace std;

	void doSomething()
	{
		static int a = 1;
		a++
		cout << a << endl;
	}

	int main()
	{
		doSomething(); // 2
		doSomething(); // 3
		doSomething(); // 4
		doSomething(); // 5
	}

<br>

3. ���������� ����ؼ� �Ȱ��� �����

	#include<iostream>
	using namespace std;

	int a = 1;
	void doSomething()
	{
		a++
		cout << a << endl;
	}

	int main()
	{
		doSomething(); // 2
		doSomething(); // 3
		doSomething(); // 4
		doSomething(); // 5
	}

1. ������ ����ƽ(����)�ϱ�??
2. ���� a�� os�� ���� ���� �޸𸮰� static�̴�. (�޸� �ּҰ� �������� ����ȴ�)
3. static ������ �ʱ�ȭ�� �ѹ��� �̷������, ���� �޸� ������ ����ϰ� �ȴ�.
4. 1�� ��� a������ �Լ��� �ѹ� ���� �ɶ����� �޸𸮸� �Ҵ�ް� �������, 
�Ҵ�ް� ������� �ϰԵɰ��̴�.
5. 2�� ��� a������ �޸𸮸� �ѹ� �Ҵ�ް�, �ʱ�ȭ�� 1���� �̷������. 
�׸��� �׻� ���� �޸� �ּҸ� ����ϰ� �ȴ�.
6. �Լ��� ����ɰ�� static a������ �̸� ����� a�� ���� �״�� ����Ѵ�.
7. �ٽø��� static ������ �ʱ�ȭ�� ���� ������ ��������.
8. �Լ��� ��� ȣ��Ǵ��� �ľǵɶ� ����ϸ� ����. (������)

### linkage

linking, linker�ʹ� �޸�
���� �� ��ü�� �ǹ��ϴ� �̾ӽ��� ���ϴ�.
local variable �� �ٸ� ���ϰ� ��������� �ʿ䰡����.
���������� �ٸ� ���Ͽ��� ����� �����ϴ�.

### external linkage

���� cpp ���Ͽ��� ���ÿ� ����Ҽ� �ִ� �������� ����
<br>
cpp���� �ϳ� �߰��ؼ� �ڵ��غ���

	/* test.cpp */

	#include<iostream>
	using namespace std;

	//extern int a; // �ʱ�ȭ�� �ȵ������� �޸𸮰� �Ҵ���� �ʴ´�.
	extern int a = 123 ;

	void doSomething()
	{
		cout << "Hello" << endl;
	}

	/* main.cpp */ ���� doSomething�� �ϰ� �ʹ�!
	#include<iostream>
	//#include"test.cpp" �̷��õ��� �� ���� �ʴ´�.
	using namepace std;

	extern void doSomething(); // ��򰡿� doSomething �Լ��� �ִ�.
							   // �װ��� ���Ǹ� ���ٺٿ� ����϶� ��� �ǹ�
							   // extern �̶�� Ű����� ���������ϴ�.
	extern int a;			   // ���⼭�� �ʱ�ȭ�� ���ָ�, �ߺ������� ����.

	int main()
	{
		doSomething();
		cout << a << endl;

		return 0;
	}

### header�� �̿�� ������

���� ����� ��������?

	/* MyConstants.header */
	#pragma once

	namespace constants
	{
		const double pi(3.141592);
		cont double gravity(9.8);
		//...
	}

	/* test.cpp */
	#include<iostream>
	#include"MyConstants.h"

	extern void doSometing()
	{
		using namespace std;

		cout << "In test.cpp" << constants::pi << endl; 
	}
	
	/* main.cpp */
	#include<iostream>
	#include"Myconstants.h"
	using namespace std;

	extern void doSomething();

	int main()
	{
		cout << "In main.cpp " << constants::pi << endl;

		doSomething();
	}
	
���� ���� ����Ǵ°� ����. �̹��� pi�� �ּҸ� �ѹ� ����
	/* test.cpp/

	void doSomething()
	{
		cout << "In test.cpp " << constansts::pi << " " << &constants::pi << endl;
	}

	/* main.cpp/

	int main()

	{
		cout << "In main.cpp" << constants::pi << " " << &constants::pi << endl;
		doSomething();
	}

�ΰ��� �ּҴ� �ٸ���..
��� ����! �̷������� contants::pi�� ���� ����ϰ� �Ǹ� �׸�ŭ �����ϰ� �ȴٴ� ���̴�.
��� �ϸ� �̷��� ���� ���� �Ҽ�������.
�ϴ� cpp������ �ϳ� �� �����.
�װ��� namespace constatns�� **���Ǹ��Ѵ�.**
�׸��� ������� ���� ���ش�.