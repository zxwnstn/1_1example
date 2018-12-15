## 자료형에게 가명 붙여주기

<br>
	#include<iostream>
	#include<vector>
	using namespace std;

	int main()
	{
		typedef double distance_t // 내가 distance_t를 쓴의도는 
								  // 더블을 거리의 자료형으로 쓴다는것이다.

		doulbe		my_distance;
		distance_t	home2work;
		distance_t	home2school;

		//type이 매우 길때
		std::vector<std::pair<std::string, int> >pairlist;
		vector<pair<string, int> >pairlist 1;
		vector<pair<string, int> >pairlist 2;
		vector<pair<string, int> >pairlist 3;	// 보기 편하지는 않다.

		typedef vector<pair<string, int> > pairlist_t; // typedef로 줄여준다.

		pairlist_t pairlist1;
		pairlist_t pairlist2;

		// using을 사용하기
		using pairlist_t = vector<pair<string, int> > ;
		//대입처럼 보이나, 내부적으로 봤으때 메모리를 차지하게 하는 대입은 아니다.
		//이것은 그저 compiler에게 이러한 이름을 사용 하겠다 라고 알려주는 것이다.
		//typedef와 크게 다르지 않다.

		return 0;
	}
