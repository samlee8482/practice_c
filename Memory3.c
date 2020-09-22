#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int *pi, i;
	pi = (int *)malloc(5 * sizeof(int));
	if(pi == NULL)
	{
		printf("동적 메모리 할당에 실패했습니다.");
		exit(1);
	}
	pi[0] = 100;
	pi[1] = 200;
	pi[2] = 300;
	pi[3] = 400;
	pi[4] = 500;
	for(i = 0; i < 5; i++)
	{
		printf("%d\n", *(pi + i)); // 포인터 주소를 하나씩 증가시키면서 거기에 해당하는 값을 출력 
		// pi[0] = *(pi + 0)
	}
	free(pi);
	return 0;
}
