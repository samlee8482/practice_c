#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char *pc = NULL;
	int i = 0;
	
	pc = (char *)malloc(100 * sizeof(char)); // 배열과 동일 
	if(pc == NULL)
	{
		printf("동적 메모리 할당에 실패했습니다.\n");
		exit(1);
	}
	// pc가 가리키는 포인터를 1씩 증가시키며 알파벳 소문자를 삽입한다.
	for(i = 0; i < 26; i++)
	{
		*(pc + i) = 'a' + i;
	}
	// 아스키 코드 0은 NULL을 의미한다. 컴퓨터가 문자열이 끝났음을 인식함 
	*(pc + i) = 0;
	
	printf("%s\n", pc); // NULL 값을 만날때까지 문자출력
	
	free(pc);
	return 0;
 } 
