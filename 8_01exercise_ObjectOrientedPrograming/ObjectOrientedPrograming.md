## ��ü���� ���α׷��ְ� Ŭ����


###

	#include<iostream>
	#include<string>
	#include<vector>
	using namespace std;

	// Friend : name, address, age, height, weight, ...

	void print(const string &name, const string &address, const in &age,
		const double & height, const double &weight)
	{
		cout << name " " << address << " " << age << " " << height << " "
			<< weight << endl;
	}

	int main()
	{
		string name;
		string address;
		int age;
		double height;
		double weight;

		print(name, address, age, height, weight)

		vector<stirng> name_vec;
		vector<string> address;
		vector<int> age_vec;
		vector<double> height_vec;
		vector<double> weight_vec;

		print(name_vec[0], address_vec[0], age_vec[0], height_vec[0], weight_vec[0])
	}

## struct�̿�

	stuct Friend
	{
		string name;
		string address;
		int age;
		double height;
		double weight;


	};

	int main()
	{
		Friend JJ{"Jack Jack", "up town", 2 , 30.0, 10.0};
		
		or 

		jj.name = "Jack Jack";
		jj.age = 2;
		jj.address = "up town"

		print(jj.name, jj.age, jj.adress, jj.height, jj.weight)
		//�ٸ�ģ���� �Ϸ��� ������ ���ؾ� �Ѵ�??

	}

## struct�� �׳� �Լ� �̿�

	stuct Friend
	{
		string name;
		string address;
		int age;
		double height;
		double weight;


	};
	void print(const Friend &fr)
	{
		cout << fr.name " " << fr.address << " " << fr.age << " " << fr.height << " "
			<< fr.weight << endl;
	}

	int main()
	{
		Friend JJ{"Jack Jack", "up town", 2 , 30.0, 10.0};
		
		or 

		jj.name = "Jack Jack";
		jj.age = 2;
		jj.address = "up town"

		print(JJ)

	}

## struct�ȿ� �Լ� �����

	stuct Friend
	{
		string name;
		string address;
		int age;
		double height;
		double weight;

		void print()
		{
			cout << name " " << address << " " << age << " " << height << " "
				<< weight << endl;
		}
	};
	

	int main()
	{
		Friend JJ{"Jack Jack", "up town", 2 , 30.0, 10.0};
		
		or 

		jj.name = "Jack Jack";
		jj.age = 2;
		jj.address = "up town"
		jj.print();
	}
	//�����Ϳ� ����� �Բ� ���ΰ��� object��� �Ѵ�.
	//�Ϲ������δ� �����͸� �������� ��Ʈ���ĸ� ����, ��ɱ��� �߰��Ǹ� Ŭ������ ����.

## Ŭ���� �����

	class Friend
	{
	public:				// access specifier(public, private, protected), ���� ������
		string m_name;		// name_ , _name, mName ����� ����� �ִ�.
		string m_address;
		int m_age;
		double m_height;
		double m_weight;

		void print()
		{
			cout << name " " << address << " " << age << " " << height << " "
				<< weight << endl;
		}
	};
	

	int main()
	{
		Friend JJ{"Jack Jack", "up town", 2 , 30.0, 10.0}; // Ŭ������ ������ �޸𸮸� �����ϵ��� ���� ���ִ� ���� instanciation�̶� �ϰ�
														   // JJ��� �̸��� ǥ���ϰ��� �ϴ� Ŭ������ instance��� �Ѵ�.
		
		jj.print();				// instaciation�� �Ǳ� ������ �����ʹ� �����ϰ� ���� �ʴ�.
		
		//ģ���� �������̶��? Friend�� �迭�� ����� �ȴ�.
		vector<Friend> my_friends;
		my_friends.resize(2);

		for(auto &e : my_friend)
			e.print()
	}
��Ʈ���Ŀ� Ŭ������ ����??
�ϴ� access specifier�� ���� ����
