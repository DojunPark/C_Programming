#include <stdio.h>
#include <limits.h>
#define NUMBER 5  //��� ���� 

int main(void)
{
	int i, max, min, index_max, index_min;
	
	//�迭 ����
	int array[NUMBER];
	max = 0;
	min = INT_MAX;
	
	//array[0] ~ array[4]: �� 5���� ũ�⸦ ���� �迭 �ʱ�ȭ
	for(i=0; i<NUMBER; i++)
	{
		scanf("%d", &array[i]);
		
		if(max < array[i])
		{
			max = array[i];
			index_max = i;
		}
		if(min > array[i])
		{
			min = array[i];
			index_min = i;
		}
	}
	printf("���� ū ���� %d�̰�, %d��°�� �ֽ��ϴ�.\n", max, index_max+1);
	printf("���� ���� ���� %d�̰�, %d��°�� �ֽ��ϴ�.\n", min, index_min+1);
	
	return 0;
}
