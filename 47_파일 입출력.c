#include <stdio.h>

int main(void)
{
	FILE *fp = NULL;
	fp = fopen("output.txt", "w");
	// w -> 쓰기모드 (write), r -> 읽기모드 (read)
	
	if(fp == NULL)
	{
		printf("파일 열기에 실패하였습니다.");	
	} 
	else
	{
		printf("파일 열기에 성공하였습니다.");
	}
	fputc('H', fp);
	fputc('E', fp);
	fputc('L', fp);
	fputc('L', fp);
	fputc('O', fp);
	fclose(fp);
	
	return 0;
}

