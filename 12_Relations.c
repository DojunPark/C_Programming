#include <stdio.h> 

int main(void)
{
	int x = 50, y = 30;
	printf("x�� y�� ������? %d\n", x == y);
	//0 -> false
	//1 -> true
	
	int i = 50, j = 50;
	printf("i�� j�� ������? %d\n", i == j);
	printf("i�� j�� �ٸ���? %d\n", i != j);
	printf("i�� j���� ū��? %d\n", i > j);
	printf("i�� j���� ������? %d\n", i < j);
	
    int a = 10, b = 20;
	printf("a�� b���� ������? %d\n", a = b); 
	
	return 0;
}
