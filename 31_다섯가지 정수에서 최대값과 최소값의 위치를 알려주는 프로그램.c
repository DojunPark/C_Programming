#include <stdio.h>
#include <limits.h>
#define NUMBER 5  //상수 선언 

int main(void)
{
	int i, max, min, index_max, index_min;
	
	//배열 생성
	int array[NUMBER];
	max = 0;
	min = INT_MAX;
	
	//array[0] ~ array[4]: 총 5개의 크기를 같는 배열 초기화
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
	printf("가장 큰 값은 %d이고, %d번째에 있습니다.\n", max, index_max+1);
	printf("가장 작은 값은 %d이고, %d번째에 있습니다.\n", min, index_min+1);
	
	return 0;
}
