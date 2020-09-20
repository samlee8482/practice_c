#include <stdio.h>

// 두 변수의 값을 서로 변환하는 포인터 함수 
void swap(int *x, int *y) // *x는 x라는 주소에 있는 값을 가져온다라는 의미 
{
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}

int main(void)
{
	int x = 1;
	int y = 2;
	swap(&x, &y); // &x는 x의 주소 
	printf("x = %d\ny = %d\n", x, y);
	
	// 정리하자면
	// int x = 50;
	// int *y = &x; 일 때 
	// x = *y
	// &x = y 
	
	return 0;
 } 
