## 실행시간 측정하기
	#include<chrono>
	//cf)chrono는 시간의 신 이름이고 부스트에 있다가 최근에 스탠다드로 편입되었다.

	사용법
	Timer timer

	~내용물~!@

	timer elapsed();


	클래스 Timer 만들기
	class Timer
	{
		using clock_t = std::chrono::high_resolution_clock;
		using second_t = std::chrono::duration<double, std::ratio<1>>;

		std::chrono::time_point<clock_t> start_time = clock_t::now();
	public:
		void elapsed()
		{
			std::chrono::time_point<clock_t> end_time = clock_t::now();

			cout << std::chrono::duration_cast<second_t>(end_time-start_time).count() << endl;
		}
	};

	//디버그와 릴리즈 모드가 속도차이가 꽤 크다.
	//실행시간은 아주 많은 요소에 좌우가 된다. 하드왜어에 따라 다르고
	//상황에 따라 다르고, 많이 할수록 캐쉬에 들어가 빨라질수도 있고..
	//다른 프로그램을 돌리냐 안돌리냐에 따라 다르다.
	//따라서 이러한 실행시간을 신봉한다는것은 인생의 낭비가 될수 있다.
	//굳이 써야된다면 3번은 체크해 보자.
