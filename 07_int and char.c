#include <stdio.h>

int main(void)
{
	char x = 'A';  //char���� ���������� ���ڷ� ������ 
	char y = 65;
	int z = 65;
	
	printf("char x�� %c �Դϴ�.\n", x);
	printf("char y�� %c �Դϴ�.\n", y);
	printf("char z�� %c �Դϴ�.\n", z); //int�� �������� ����ϴ� �ڷ����� char�̱⿨ ���ڷ� ��µ�
	
	char i = 'B';
	printf("char i�� %d �Դϴ�.\n", i); //char�� �������� int�� ��� 
	
	return 0;
}
