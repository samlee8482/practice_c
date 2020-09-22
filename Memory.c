#include <stdio.h>
#include <stdlib.h>

// 동적 메모리로 메모리를 효율적으로 관리할 수 있다. 

int main(void)
{
	int *pi; // Pointer Integer. pi는 포인터 변수. 주소를 기억하는 변수 
	pi = (int *)malloc(sizeof(int)); // malloc - 메모리를 할당해라. int형의 크기만큼 할당해라. 4넣어도 상관없음 
	if(pi == NULL)
	{
		printf("동적 메모리 할당에 실패했습니다.\n");
		exit(1);
	} 
	
	*pi = 100;
	printf("%d\n", *pi);
	// 동적 메모리 사용한 이후에는 무조건 해당 메모리를 반납해야 한다. '할당해제'
	free(pi);
	
	return 0;
}
