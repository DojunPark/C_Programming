#include <stdio.h> 

int main(void)
{
	int x = 50, y = 30;
	printf("x와 y가 같은가? %d\n", x == y);
	//0 -> false
	//1 -> true
	
	int i = 50, j = 50;
	printf("i와 j가 같은가? %d\n", i == j);
	printf("i와 j가 다른가? %d\n", i != j);
	printf("i가 j보다 큰가? %d\n", i > j);
	printf("i가 j보다 작은가? %d\n", i < j);
	
    int a = 10, b = 20;
	printf("a에 b값을 넣으면? %d\n", a = b); 
	
	return 0;
}
