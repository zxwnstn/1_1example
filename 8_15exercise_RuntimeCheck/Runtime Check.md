## ����ð� �����ϱ�
	#include<chrono>
	//cf)chrono�� �ð��� �� �̸��̰� �ν�Ʈ�� �ִٰ� �ֱٿ� ���Ĵٵ�� ���ԵǾ���.

	����
	Timer timer

	~���빰~!@

	timer elapsed();


	Ŭ���� Timer �����
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

	//����׿� ������ ��尡 �ӵ����̰� �� ũ��.
	//����ð��� ���� ���� ��ҿ� �¿찡 �ȴ�. �ϵ�־ ���� �ٸ���
	//��Ȳ�� ���� �ٸ���, ���� �Ҽ��� ĳ���� �� ���������� �ְ�..
	//�ٸ� ���α׷��� ������ �ȵ����Ŀ� ���� �ٸ���.
	//���� �̷��� ����ð��� �ź��Ѵٴ°��� �λ��� ���� �ɼ� �ִ�.
	//���� ��ߵȴٸ� 3���� üũ�� ����.
