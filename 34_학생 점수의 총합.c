#include <stdio.h>

int main(void)
{
	int score[5][2];
	int total[2] = {0,};  //1차원 배열의 모든 값을 0으로 초기화 
	int i;
	
	for(i=0; i<5; i++)
	{
		printf("%d번 학생의 영어, 수학 점수:", i+1);
		scanf("%d %d", &score[i][0], &score[i][1]);
		
		total[0] += score[i][0];
		total[1] += score[i][1];
    }
    
    printf("\n\n5명의 수학점수 합계: %d\n", total[0]);
    printf("5명의 영어점수 합계: %d", total[1]);
	
	return 0;
}
