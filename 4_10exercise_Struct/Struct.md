## 4-10강 구조체
클래스로 넘어가기 위한 길목
<br>

### 사람의 정보를 일일히 담기?

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
		
		//사람의 모든것을 출력하는 함수는?
		printPerson;

		//여러사람을 저장한다면?
		double height1, height2, height3....
		float weight1, weight2, weight3.....
		int age1, age2, age3...
		string name1, name2...........

		return 0;
	}

### struct의 이용

	#include<iostream>
	#include<string>
	using namespace std;

	struct Person
	{
		double height;
		float weight;
		int age;
		string name;
	
	};	// **struct에도 꼭 ;가 들어간다!!**

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
		me. weight = 100.0; */ 할수는 있으나 번거롭다
		// . 은 member selection operator라고 부른다.

		//구조체를 초기화 할때 사용할수있는 유용한 것이 유니폼 이니셜라이제이션!
		Person me{2.0, 100.0, 20, "jack jack"};

		pintPerson(me);


	}

### 함수를 구조체 안에

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

		me.print() // Person이라는 구조체 안에 print 함수를 그냥 사용할수있다.

		Person me2;
		me2 = me1;		// 이경우에는 내가 원하는대로 작동 안할수있다.
		me2.print();	// 대입 오퍼레이터의 부작용 주의


	}

### 구조체 안에 구조체 넣기

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
	
	// 구조체 안의 구조체
	struct Family
	{
		Person me, mom, dad;
	};

### 함수의 파라미터 또는 자료형으로 이용하기
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

### 초기화 할때 주의점
	struct Person
	{
		double	height = 3.0
		float	weight = 200.0
		int		age	   = 100;
		string name	   = "Mr. Incredible"
	}; // 초기화를 직접한 스트럭트
	//다시 말하면 기본값을 넣어준다고 할수있슴.

	int main()
	{
		Person me;
		cout << me.name << endl;	// 초기화를 안했다면, 직접초기화한 내용을 가져온다.

		Person Junsoo{2.0, 168.0, 28, "Junsoo-Kang"}
	}

### struct자료형의 크기

	struct Employee
	{
		short	id;
		int		age;
		double	wage;
	};

	int main()
	{
		Employee emp1;						// 필요한 데이터 양은 2 + 4 + 8???
		
		cout << sizeof(Employee) << endl;	//16??
											//컴파일러가 자료배치상 안되는 부분때문에 +2가 된다.
											// 2 + 4 + 8 + (2) 여기서 (2)를 패딩이라고 한다.
	}