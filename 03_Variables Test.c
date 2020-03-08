#include <stdio.h>

int main(void)
{
	int x = 50;
	float y = 123456789.123456789;   //저장공간 4바이트 
	double z = 123456789.123456789;  //저장공간 8바이트 
	
	printf("x = %d\n", x);
	printf("y = %.2f\n", y);
	printf("z = %.2f\n", z);
	
	return 0;
}
