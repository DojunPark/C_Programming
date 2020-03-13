#include <stdio.h>

//재귀함수 (recursive function)
void print(int count)
{
	if(count==0)
	{
		return;
	}
	else
	{
		printf("문자열을 출력합니다.\n");
		print(count-1);
	}
} 


int main(void)
{
	int number;
	printf("몇 개의 문자열을 출력하겠습니까? :");
	scanf("%d", &number);
	
	print(number);
	
	return 0;
}
