#include <stdio.h>

int main(void)
{
	char x = 'A';  //char형은 내부적으로 숫자로 구성됨 
	char y = 65;
	int z = 65;
	
	printf("char x는 %c 입니다.\n", x);
	printf("char y는 %c 입니다.\n", y);
	printf("char z는 %c 입니다.\n", z); //int형 변수지만 출력하는 자료형이 char이기엥 문자로 출력됨
	
	char i = 'B';
	printf("char i는 %d 입니다.\n", i); //char형 변수지만 int로 출력 
	
	return 0;
}
