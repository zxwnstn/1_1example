## ���ڿ� �Ұ�
���ڿ��� �ٷ�� ������ Ÿ�� std::string
<br>

### std::string

	#include<iostream>
	#include<string>
	using namespace

	int main()
	{
		//�⺻ char ���
		cont char my_strs []= "Hello, world"

		//���ڿ� string
		const string my_hell = "Hello , world";
		//�ٸ� �ʱ�ȭ ����� ��� ����ȴ�.
		cout << my_hell << endl;
		//����� ���� �ڷ����� ������.

		//��Ʈ�� �Է¹޾� ����1
		cout << "Your name?: ";
		string name;
		cin >> age

		cout << "Your age ? : ";
		string age
		cin >> age;				// cin�� ��� ���� ���� �Է��� �޴´�.
		cout << name << " " << age << end;

		//��Ʈ�� �Է¹޾� ����1 ����
		cout << "Your name?: ";
		string name;
		std::getline(std::cin, name);

		cout << "Your age ? : ";
		string age
		std::getline(std::cin, age);	// getline�� ��� enter���� �Է��� �޴´�.

		cout << name << " " << age << end;
		
		//��Ʈ�� �Է¹޾� ����2
		cout << "Your age?: ";
		int age;
		cin >> age;

		cout << "Your name ?: ";
		string name
		std::getline(std::cin, age);	// �� �޾����� ����

		cout << name << " " << age << end;
		
		//��Ʈ�� �Է¹޾� ����2 ����
		cout << "Your age?: ";
		int age;
		cin >> age;
		std::cin.ignore(32767, '\n');	 //  32767�������� �����Է��� �����Ѵ�.
		/* �����ѹ��� ���� �ʴ� ���
		#include<limits>����� �߰��ϰ�
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n')�� �ٲܼ��� �ִ�. */

		cout << "Your name ?: ";
		string name
		std::getline(std::cin, age);
	}

### ���ڿ��� ������ ����

	#include<iostream>
	#include<string>
	using namespace std;

	int main()
	{
		//���ڿ� ���� ���ϱ�
		string a("Hello");
		string b("World");

		cout << a + b << endl;
		stign hw = a + b;
		hw += "I'm good";
		
		cout << hw << endl;		// string�� ���ڿ��� ���ϴ� ���� append��� �Ѵ�.

		//���ڿ� ���� ����
		string a("Hello, world")

		cout << a.length() << endl;

		return 0;
	}

