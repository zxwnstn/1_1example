#include"Worker.h"
#include"Timer.h"
//구현부분에만 timer에 대한 클래스를 인클루드 해주면 되며
//이렇게 일시적으로 다른 클래스를 사용하는
//가벼운 종속관계를 의존관계라고 부른다.
//빈도상 가장 많이 사용하게 될것이다.

void Worker::doSomething()
{
	Timer timer;
	timer.elapsed();
	
}
