#include <stdio.h>

int main(void)
{
	int x = 10;
	int y = 20;
	
	printf("int x 는 %d 입니다.\n", x);
	printf("int y 는 %d 입니다.\n", y);
	
	//사칙연산 
	printf("x + y 는 %d 입니다.\n", x + y);
	printf("x - y 는 %d 입니다.\n", x - y);
	printf("x * y 는 %d 입니다.\n", x * y);
	printf("x / y 는 %d 입니다.\n", x / y); // 정수로 출력하면 몫만 출력됨 
	
	return 0;
 } 
