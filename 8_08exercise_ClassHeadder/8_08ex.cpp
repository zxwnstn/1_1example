#include "Calc.h"

int main()
{
	Calc cal(10);
	cal.add(10).sub(1).mult(2).print();

	cal.print();
	return 0;
}