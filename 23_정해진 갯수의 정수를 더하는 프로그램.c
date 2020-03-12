#include <stdio.h>

int main(void)
{
	int number, i, x, sum = 0; 
	
	printf("계산할 정수 갯수를 입력하세요: ");
	scanf("%d", &number);
	
	for(i = 0; i < number; i++)
	{
		printf("더할 정수를 입력하세요: ");
		scanf("%d", &x);
		sum += x; 
	} 
	printf("입력한 정수의 총합은 %d입니다. \n", sum);
	
	return 0;
}
