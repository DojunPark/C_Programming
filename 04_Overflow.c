#include <stdio.h> 
#include <limits.h>

int main(void)
{
	int x = INT_MAX;
	
	printf("int형의 최대값 x는 %d 입니다.\n", x);
	printf("x+1은 %d 입니다.", x+1);  //한바퀴를 돌아서 최소값이 출력됨 
	
	return 0;
}
