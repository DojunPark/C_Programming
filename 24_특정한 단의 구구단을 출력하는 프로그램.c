#include <stdio.h>

int main(void)
{
	int i, x;
	
	printf("출력할 단을 입력하세요: ");
	scanf("%d", &x);
	
	for(i=1; i<=9; i++)
	{
		printf("%d x %d = %d\n", x, i, x*i);
	} 
	
	return 0;
}
