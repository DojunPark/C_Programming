#include <stdio.h>

int main(void)
{
	FILE *fp = NULL;
	fp = fopen("output.txt", "w");
	// w -> ������ (write), r -> �б��� (read)
	
	if(fp == NULL)
	{
		printf("���� ���⿡ �����Ͽ����ϴ�.");	
	} 
	else
	{
		printf("���� ���⿡ �����Ͽ����ϴ�.");
	}
	fputc('H', fp);
	fputc('E', fp);
	fputc('L', fp);
	fputc('L', fp);
	fputc('O', fp);
	fclose(fp);
	
	return 0;
}

