#include <stdio.h>
#include <string.h> 

// 텍스트 파일에서 단어를 검색하는 프로그램
 
int main(void)
{
	FILE *fp;
	char fname[256];
	char buffer[256];
	char word[256];
	int line = 0;
	
	printf("파일 이름을 입력하세요 : ");
	scanf("%s", fname); // 읽어올 파일 입력 
	
	printf("탐색할 단어를 입력하세요 : ");
	scanf("%s", word);
	
	if((fp = fopen(fname, "r")) == NULL)
	{
		fprintf(stderr, "파일 %s을 열 수 없습니다.\n", fname); // 파일 관련 에러 출력 함수 
		return 0;
	}
	
	while(fgets(buffer, 256, fp)) // fp(읽은 파일)의 내용을 buffer에 담기. fp 내용이 없을 때까지 
	{
		line++; // 한 줄 읽음
		if(strstr(buffer, word)) // buffer에 단어가 포함되어 있는지 검색
		{
			printf("라인 %d : 단어 %s이(가) 발견되었습니다. \n", line, word);
		}
	}
	
	fclose(fp);
	return 0;
}
