## 클래스 코드와 헤더 파일

### 
	#include<iostream>
	using namespace std;

	class Calc
	{
	private:
		int m_value;

	public:
		Calc(int init_value)
			: m_value(init_value)
		{}

		Calc& add(int value) { m_value += value; return *this }
		Calc& sub(int value) { m_value -= value; return *this }
		Calc& mult(int value){ m_value *= value; return *this }	
		// 함수명 우클릭후 빠른작업 및 리팩터링 클릭후 정의 위치 이동을 누르면 된다!
		// 인라인 키워드 제거후 ctl + s로 저장 esc로 빠져나오면 된다.
		// ++shift + del 하면 공백줄 제거

		void print()
		{
			cout << m_value << endl;
		}
	};
	클래스 코드가 너무 길다.. 클래스를 만들때는 헤더를 만들어서 정리하는것이 기본이다.

	int main()
	{
		Calc cal(10);
		cal.add(10).sub(1).mult(2).print();

		cal.print);
	}

	//보통해더 파일의 이름은 클래스의 이름이다.
	//using name space경우 헤더에다가 정의 하지않고 cpp로 분리를 했다면
	//cpp파일 상단에 적어두면 된다.
	//헤더가 아닌이상 다른코드에 영향을 주지 않기 때문이다.

	//클래스를 만들어야 겟다 한다면 헤더부터 만들고 함수 선언을 하고
	//cpp에 정의를 하는것이 정석적인 방법이 된다.

	//그러나 경우에 따라서는 헤더에 정의를 넣는것이 권장될때도 있다.
	//왜냐하면 더 번잡해 지기 때문이다.
	//헤더에 다 집어넣고 코딩 하는것도 어떻게 보면 하나의 코딩스타일이 될수 있다.
