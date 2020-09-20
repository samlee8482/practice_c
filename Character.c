#include <stdio.h>

int main(void)
{
	char input[1001];
	gets(input); // 배열 값 입력 
	int count = 0;
	while(input[count] != '\0') // \0은 null 을 말함. 배열 내 문자열 외의 값은 \0 
	{
		count++;
	}
	printf("입력한 문자열의 길이는 %d입니다.", count);
	printf("\n입력한 문자열 : %s입니다", input); // %s는 string의 약자로서 문자열을 의미하는 형식 지정자 
	return 0;
}
