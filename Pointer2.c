#include <stdio.h>

int main(void)
{
	int i = 10;
	int *p;
	p = &i; // p�� �ּ� 
	printf("i = %d\n", i);
	*p = 20; // *p�� i�� 
	printf("i = %d\n", i);
	
	return 0;
}
