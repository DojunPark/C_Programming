#include <stdio.h>

int main(void)
{
	char input[1001];
	gets(input);
	int count = 0;
	
	while(input[count] != '\0')  //count��° input�� null�� �ƴ϶��, 
	{
		count++;
	}
	
	printf("�Է��� ���ڿ��� ���̴� %d �Դϴ�.\n", count);
	printf("�Է��� ���ڿ��� %s �Դϴ�.\n", input);
	
	return 0;
}
