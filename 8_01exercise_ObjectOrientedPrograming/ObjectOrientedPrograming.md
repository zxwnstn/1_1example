## 객체지향 프로그래밍과 클래스


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

## struct이용

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
		//다른친구를 하려면 이짓을 또해야 한다??

	}

## struct를 그냥 함수 이용

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

## struct안에 함수 만들기

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
	//데이터와 기능이 함께 묶인것을 object라고 한다.
	//일반적으로는 데이터만 넣을때는 스트럭쳐를 쓰고, 기능까지 추가되면 클래스를 쓴다.

## 클래스 만들기

	class Friend
	{
	public:				// access specifier(public, private, protected), 접근 지정자
		string m_name;		// name_ , _name, mName 등등의 방식이 있다.
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
		Friend JJ{"Jack Jack", "up town", 2 , 30.0, 10.0}; // 클래스가 실제로 메모리를 차지하도록 정의 해주는 것을 instanciation이라 하고
														   // JJ라는 이름은 표현하고자 하는 클래스의 instance라고 한다.
		
		jj.print();				// instaciation이 되기 전까지 데이터는 존재하고 있지 않다.
		
		//친구가 여러명이라면? Friend의 배열을 만들면 된다.
		vector<Friend> my_friends;
		my_friends.resize(2);

		for(auto &e : my_friend)
			e.print()
	}
스트럭쳐와 클래스의 차이??
일단 access specifier를 쓰지 않음
