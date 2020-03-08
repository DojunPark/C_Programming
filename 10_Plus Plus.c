#include <stdio.h>

int main(void)
{
	int x = 0;
	printf("현재의 x는 %d 입니다.\n", x);
	
	x++;
	printf("현재의 x는 %d 입니다.\n", x);
	
	printf("현재의 x는 %d 입니다.\n", x--);  //출력 후 연산 
	printf("현재의 x는 %d 입니다.\n", x);
	printf("현재의 x는 %d 입니다.\n", --x); //연산 후 출력 
	
	return 0;
}
