#include <stdio.h>
#define MONTHS 12 //상수 정의 

int main(void)
{
	double monthSalary = 1000.5;
	
	printf("연봉은 $ %.2f 입니다.", monthSalary * MONTHS); 
	
	return 0;
}
