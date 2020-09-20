#include <stdio.h>
#include <string.h>

int main(void)
{
	char inputOne[5] = "A";
	char inputTwo[5] = "A";
	printf("문자열 비교 : %d\n", strcmp(inputOne, inputTwo));
	// strcmp는 왼쪽 글자 순서가 더 앞이라면 -1
	// 오른쪽 글자 순서가 더 앞이라면 1
	// 두 글자가 같다면 0을 반환 
	
	return 0;
}
