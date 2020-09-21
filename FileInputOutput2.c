#include <stdio.h>

// 파일 읽기
// 파일 읽기 같은 경우 읽을 파일이 이미 존재해야 함 
 
int main(void)
{
	FILE *fp = NULL;
	int c;
	
	fp = fopen("input.txt", "r");
	
	if(fp == NULL)
	{
		printf("파일 열기에 실패했습니다.\n");
	}
	else
	{
		printf("파일 열기에 성공했습니다.\n");
	}
	
	while((c = fgetc(fp)) != EOF) // fget은 파일에서 문자 하나를 읽어서 c에 저장. EOF는 파일의 끝을 의미 
	{
		putchar(c); // 지금 열려 있는 파일이 끝날 때까지 문자열을 하나씩 출력한다. 
	}
	
	fclose(fp);
	return 0;
}
