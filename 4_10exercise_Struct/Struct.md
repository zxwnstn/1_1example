## 4-10�� ����ü
Ŭ������ �Ѿ�� ���� ���
<br>

### ����� ������ ������ ���?

	#include<iostream>
	#include<string>
	using namespace std;

	void printPerson(double height, float weight........)

	int main()
	{
		double height;
		float weight;
		int age;
		string name;
		
		//����� ������ ����ϴ� �Լ���?
		printPerson;

		//��������� �����Ѵٸ�?
		double height1, height2, height3....
		float weight1, weight2, weight3.....
		int age1, age2, age3...
		string name1, name2...........

		return 0;
	}

### struct�� �̿�

	#include<iostream>
	#include<string>
	using namespace std;

	struct Person
	{
		double height;
		float weight;
		int age;
		string name;
	
	};	// **struct���� �� ;�� ����!!**

	void printPerson(Person person1)
	{
		cout << person1.height << person1.weight << person1.age <<
			person1.name << endl;
	}

	int main()
	{
		Person me;
		/* me.age = 20;
		me.name = "jack jack"
		me. height = 2.0;
		me. weight = 100.0; */ �Ҽ��� ������ ���ŷӴ�
		// . �� member selection operator��� �θ���.

		//����ü�� �ʱ�ȭ �Ҷ� ����Ҽ��ִ� ������ ���� ������ �̴ϼȶ������̼�!
		Person me{2.0, 100.0, 20, "jack jack"};

		pintPerson(me);


	}

### �Լ��� ����ü �ȿ�

	#include<iostream>
	#include<string>
	using namespace std;

	struct Person
	{
		double height;
		float weight;
		int age;
		string name;

		void print()
		{
			cout << height << weight << age << name << endl;
		}
	};

	int main()
	{
		Person me{2.0, 100.0, 20, "jack jack"};
		pintPerson(me);

		me.print() // Person�̶�� ����ü �ȿ� print �Լ��� �׳� ����Ҽ��ִ�.

		Person me2;
		me2 = me1;		// �̰�쿡�� ���� ���ϴ´�� �۵� ���Ҽ��ִ�.
		me2.print();	// ���� ���۷������� ���ۿ� ����


	}

### ����ü �ȿ� ����ü �ֱ�

	struct Person
	{
		double height;
		float weight;
		int age;
		string name;

		void print()
		{
			cout << height << weight << age << name << endl;
		}
	};
	
	// ����ü ���� ����ü
	struct Family
	{
		Person me, mom, dad;
	};

### �Լ��� �Ķ���� �Ǵ� �ڷ������� �̿��ϱ�
	Person getMe()
	{
		Person me{ 2.0, 100.0, 20, "Jack Jack"}

		return me;
	}
	
	int main()
	{
		Person me_from_func = getMe()
		me_from_func.print();
	}

### �ʱ�ȭ �Ҷ� ������
	struct Person
	{
		double	height = 3.0
		float	weight = 200.0
		int		age	   = 100;
		string name	   = "Mr. Incredible"
	}; // �ʱ�ȭ�� ������ ��Ʈ��Ʈ
	//�ٽ� ���ϸ� �⺻���� �־��شٰ� �Ҽ��ֽ�.

	int main()
	{
		Person me;
		cout << me.name << endl;	// �ʱ�ȭ�� ���ߴٸ�, �����ʱ�ȭ�� ������ �����´�.

		Person Junsoo{2.0, 168.0, 28, "Junsoo-Kang"}
	}

### struct�ڷ����� ũ��

	struct Employee
	{
		short	id;
		int		age;
		double	wage;
	};

	int main()
	{
		Employee emp1;						// �ʿ��� ������ ���� 2 + 4 + 8???
		
		cout << sizeof(Employee) << endl;	//16??
											//�����Ϸ��� �ڷ��ġ�� �ȵǴ� �κж����� +2�� �ȴ�.
											// 2 + 4 + 8 + (2) ���⼭ (2)�� �е��̶�� �Ѵ�.
	}