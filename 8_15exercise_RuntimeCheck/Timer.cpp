#include<chrono>
#include<iostream>

//필요한 순간 복붙해서 쓰자!

class Timer
{
	using clock_t = std::chrono::high_resolution_clock;
	using second_t = std::chrono::duration<double, std::ratio<1>>;		//using을 써서 타입 설정

	std::chrono::time_point<clock_t> start_time = clock_t::now();		//클래스가 선언되는 순간 시작시간이 현재시간으로 초기화
public:
	void elapsed()
	{
		std::chrono::time_point<clock_t> end_time = clock_t::now();		//elapsed 함수가 호출되는 순간 end_time이 현재시간으로 초기화

		std::cout << std::chrono::duration_cast<second_t>(end_time - start_time).count() << std::endl;
	}
};
