#include<chrono>
#include<iostream>

//�ʿ��� ���� �����ؼ� ����!

class Timer
{
	using clock_t = std::chrono::high_resolution_clock;
	using second_t = std::chrono::duration<double, std::ratio<1>>;		//using�� �Ἥ Ÿ�� ����

	std::chrono::time_point<clock_t> start_time = clock_t::now();		//Ŭ������ ����Ǵ� ���� ���۽ð��� ����ð����� �ʱ�ȭ
public:
	void elapsed()
	{
		std::chrono::time_point<clock_t> end_time = clock_t::now();		//elapsed �Լ��� ȣ��Ǵ� ���� end_time�� ����ð����� �ʱ�ȭ

		std::cout << std::chrono::duration_cast<second_t>(end_time - start_time).count() << std::endl;
	}
};
