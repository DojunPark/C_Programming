#include <stdio.h>

int main(void)
{
	int number, i, x, sum = 0; 
	
	printf("����� ���� ������ �Է��ϼ���: ");
	scanf("%d", &number);
	
	for(i = 0; i < number; i++)
	{
		printf("���� ������ �Է��ϼ���: ");
		scanf("%d", &x);
		sum += x; 
	} 
	printf("�Է��� ������ ������ %d�Դϴ�. \n", sum);
	
	return 0;
}
