## 3-9강 비트마스크와 비트플래그

<br>

### 게임 아이템의 득실 : 1. 각 bool변수에 의한 플래그
	
	#include<iostream>
	using namespace std;

	int main()
	{

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

<br>

### 게임 아이템의 득실 : 2.비트플래그 이용법

	#include<iostream>
	#include<bitset>
	using namespace std;

	int main()
	{
		//각각 아이템들의 플래그
		const usigned char opt0 = 1 << 0;
		const usigned char opt1 = 1 << 1;
		const usigned char opt2 = 1 << 2;
		const usigned char opt3 = 1 << 3;
		// opt 4, 5, 6, 7...

		cout << bitset<8>(opt0) << endl;			    // 0000 0001
		cout << bitset<8>(opt1) << endl;			    // 0000 0010
		cout << bitset<8>(opt2) << endl;			    // 0000 0100
		cout << bitset<8>(opt3) << endl;			    // 0000 1000
		
		//초창기 내 아이템 플래그(공백의 인벤토리)
		unsigend char items_flag = 0;					
		cout << "no item " << bitset<8>(items_flag) << endl;        //no item 상태이므로 item_flag는 0000 0000 


		// item0 get! 아이템의 득
		items_flag |= opt0					    //items_flag = items_flag | opt0; 와 같은 의미 
		cout << "item0 obtained " << bitset<8>(items_flag) << endl; //item0을 얻었으므로 item_flag는 0000 0001
		// item3 get!
		items_flag |= opt3
		cout << "item3 obtained " << bitset<8>(items_flag) << endl; //item3을 얻었으므로 item_flag는 0000 0101
		// item3 los 아이템의 실
		items_falg &= ~opt3					    //무엇을 의미하는지 잘 생각해보자!!
		cout << "item3 lost " << bitset<8>(items_flag) << endl;	    //item3을 다시 잃었으므로 item_flag는 0000 0001



		// has item1?? 아이템의 소지 여부 판단			// 아이템1 을 소지 하고 있는가??
		if (items_flag & opt1)										
			cout << "has item1" << endl;			// 0000 0001 & 0000 0010 이 참이라면
		else							// 이것이 무엇을 의미하는지 잘 생각해 보자!
			cout << "Not have item1" << endl;						
		// has item0??
		if (items_flag & opt1)
			cout << "has item0 " << endl;
		else 
			cout << "Not have item0" << endl;

		

		// 동시에 여러개의 아이템을 얻을때
		items_falg |= (opt2 | opt3);				// 의미하는 바를 차분히 생각해보자!
		cout << bitset<8>(opt2 | opt3) << endl;
		cout << "item2, 3 obtained" << bitset<8>(items_flag) <<endl;

		
		//아이템2를 갖고있고, 아이템1을 갖고있지 않을경우			
		if ((items_flag & opt2) && !(items_flag & opt1))	// 무엇을 의미하는지 생각해보자! &&는 진리연산자
		{
			items_flag ^= opt2;				// ^ 연산자와 코드가 의미하는 바를 잘 생각해보자!
			items_flag ^= opt1;			        // 0000 1101 ^ 0000 0100
			//숙제 한줄로 바꿔보기!				 // 0000 1101 ^ 0000 0010
			답 : itmes_flag ^= (opt2 | opt1);

			cout << bitset<8>(items_flag) << endl		// 아이템2를 없애고, 아이템 1을 있게 한다!
									// 따라서 items flag는 1011
		}
		return 0;
	}

<br>

### 비트 마스크 : color table의 예

1. color테이블은 16진수 3개의 조합으로 색을 표현한다. 순서는 레드, 그린, 블루 
2. 최대값은 FF, 10진수로 바꾸면 (16^1)x15 + (16^0)x15 = 255로 각 색이 0부터 255 즉 256가지의 스팩트럼을 갖는다. 
3. 그런데 이는 2의 8승이고(애초에 16이 2의 4승이다.) 2진수와 호환이 용이하다. 2진수 8자리수씩 한 색이 표현

<br>

	#include<iostream>
	#include<bitset>
	using namespace std;
	
	int main()
	{
		unsigned int pixel_color = 0xDAAA520;
		cout << std::bitset<32>(pixel_color) << endl;
		
		const unsigned int red_mask = 0xFF0000;
		const unsigned int green_mask = 0x00FF00;
		const unsigned int blue_mask = 0x0000FF;
		cout << std::bitset<32>(red_mask) << endl;
		cout << std::bitset<32>(green_mask) << endl;
		cout << std::bitset<32>(blue_mask) << endl;

		unsigned char bule = pixel_color & blue_mask;
		cout << "blue " << bitset<8>(blue) << " " << int(blue) << endl;
		
		unsigned char green = pixel_color & green_mask;
		cout << "green " << bitset<8>(green) << " " << int(green) << endl;		
		/*위코드는 왜 원하는 대로 되지 않을까?
		->이유는 char형은 1바이트기 때문에 8자리수 이상의 수를 처리할수 없기 때문이다.*/
		
		//그렇다면
		unsigned int green = pixel_color & green_mask; 
		cout << "green " << bitset<16>(green) << " " << int(green) << endl;
		//라고 수정하면 원하는 결과가 제대로 나올까??
		//아니다, 좀더 가깝긴 하지만 10101010 00000000 이런식으로 나오게 될것이다. 
		//이를 해결하기 위해 >>(right shift) 연산자를 넣어줘야 한다.

		cout << "green " << bitset<8>(green >> 8) << " " << (green >> 8) << endl;

		//숙제 red 해보기!
		unsigned int red = pixel_color & red_mask;
		cout << "red " << bitset<8>(red >> 24) << (red >> 16) << endl;
		
		return 0;
	}

<br>

### 비트플래그 실용적 예

	#include <iostream>
	#include <bitset>
	using namespace std;

	int main()
	{
		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
		return 0;
	}

glclear 함수같이 파라미터가 엄청많은경우에 비트연산을 쓰는것이 효율적이다.
