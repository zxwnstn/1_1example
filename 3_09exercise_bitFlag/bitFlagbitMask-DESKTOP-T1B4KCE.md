## 3-9강 비트마스크, 비트플래그

### 각각의 bool변수에 의한 플래그
	
	#include<iostream>
	using namespace std;

	int main()
	{
		// 게임이 있으고, 그 게임에서 아이템 플래그를 세웠다.

		bool item1_flag = false;
		bool item2_flag = false;
		bool item3_flag = false;
		bool item4_flag = false;

		//event 아이템을 먹음
		item1_flag = true;

		//die 죽어서 아이템을 떨굼
		item1_falg = false;

		//특정한 아이템 사용
		if (item3_flag == true && item4_falg = false)
		{
			item3_flag = false;
			item4_flag = true;
		}
		
		return 0;
	}
이런식으로 코딩한다면 아이템이 32개가 있다면 32개의 플래그를 각각 만들어야 할것이고,
보기도 불편하다.
그런데 아이템이 있다 없다면 따진다면 있음과 없음을 1과 0으로 표현할수 있지 않을까??란 발상을 할수있다.
-> 비트플래그를 이용!

### 비트플래그를 이용법

	#include<iostream>
	#include<bitset>
	using namespace std;

	int main()
	{
		const usigned char opt0 = 1 << 0;
		const usigned char opt1 = 1 << 1;
		const usigned char opt2 = 1 << 2;
		const usigned char opt3 = 1 << 3;
		// opt 4, 5, 6, 7...

		cout << bitset<8>(opt0) << endl;	// 0000 0001
		cout << bitset<8>(opt1) << endl;	// 0000 0010
		cout << bitset<8>(opt2) << endl;	// 0000 0100
		cout << bitset<8>(opt3) << endl;	// 0000 1000

		//아이템 플래그를 비트 마스크로 이용한다면
		unsigend char items_flag = 0;			//먼저 빈 아이템 플래그를 만듦
		cout << "no item " << bitset<8>(items_flag) << endl;

		// item0 get!
		items_flag |= opt0
		cout << "item0 obtained " << bitset<8>(items_flag) << endl;

		// item3 get!
		items_flag |= opt3
		cout << "item3 obtained " << bitset<8>(items_flag) << endl;

		// item3 los
		items_falg &= ~opt3
		cout << "item3 lost " << bitset<8>(items_flag) << endl;

		// has item1??
		if (items_flag & opt1)
			cout << "has item1" << endl;
		else 
			cout << "Not have item1" << endl;

		// has item0??
		if (items_flag & opt1)
			cout << "has item0 " << endl;
		else 
			cout << "Not have item0" << endl;
		
		// 동시에 여러개의 아이템을 갖을때
		items_falg |= (opt2 | opt3);

		cout << bitset<8>(opt2 | opt3) << endl;
		cout << "item2, 3 obtained" << bitset<8>(items_flag) <<endl;

		//아이템 2를 갖고있고, 1을 갖고있지 않을경우
		if ((items_flag $ opt2) && !(items_flag & opt1))
		{
			items_flag ^= opt2;
			items_flag ^= opt1;			// 한줄로 바꿔보기!

			cout << bitset<8>(items_flag) << endl;
		}

	}

### 비트플래그 실용예제

	#include <iostream>
	#include <bitset>
	using namespace std;

	int main()
	{
	
	}



