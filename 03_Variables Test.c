#include <stdio.h>

int main(void)
{
	int x = 50;
	float y = 123456789.123456789;   //������� 4����Ʈ 
	double z = 123456789.123456789;  //������� 8����Ʈ 
	
	printf("x = %d\n", x);
	printf("y = %.2f\n", y);
	printf("z = %.2f\n", z);
	
	return 0;
}
