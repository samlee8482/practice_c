#include <stdio.h>

// 파일입출력
// 현재의 데이터를 저장하고 다시 불러올 수 있음
// 프로그램 전반에 사용되는 다양한 데이터를 처리하고 저장하여 보관할 수 있다는 점에서 유용
// 보안에서 많이 활용. 굉장히 강력한 파일입출력 체계를 갖추고 있기 때문. 지우기 복사 등을 명령할 수 있기 때문

int main(void)
{
	FILE *fp = NULL;
	fp = fopen("ouput.txt", "w");
	// w -> 쓰기 모드(Write), r -> 읽기 모드(Read)
	if(fp == NULL)
	{
		printf("파일 열기에 실패했습니다.\n");	
	}
	else
	{
		printf("파일 열기에 성공했습니다.\n");
	}
	fputc('H', fp); // 파일 한글자 한글자씩 출력하는 방법 
	fputc('E', fp);
	fputc('L', fp);
	fputc('L', fp);
	fputc('O', fp);
	fclose(fp);
	
	return 0;
 } 
 
