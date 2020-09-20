#include <stdio.h>

int main(void)
{
	int i = 10;
	int *p;
	p = &i; // p는 주소 
	printf("i = %d\n", i);
	*p = 20; // *p는 i값 
	printf("i = %d\n", i);
	
	return 0;
}
