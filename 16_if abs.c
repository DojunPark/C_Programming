#include <stdio.h>

int main(void)
{
	int x = -150;
	
	if (x < 0)
	{
		x = -x;
	}
	
	printf("x�� ���밪�� %d�Դϴ�.\n", x);
	
	return 0;
}