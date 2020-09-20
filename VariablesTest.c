#include <stdio.h>
#include <limits.h> // 한계값을 포함한 라이브러리 

int main(void)
{
	int x;
	x = 5;
	printf("%d", x);
	printf("변수 x의 메모리 크기는 %d입니다.", sizeof(x));
	
	int y = INT_MAX; // int의 최댓값 
	printf("int형의 최댓값 y는 %d입니다.\n", y);
	printf("y + 1은 %d입니다. \n", y + 1); // 오버플로우 
	
	return 0;
}
