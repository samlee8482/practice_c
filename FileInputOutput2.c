#include <stdio.h>

// ���� �б�
// ���� �б� ���� ��� ���� ������ �̹� �����ؾ� �� 
 
int main(void)
{
	FILE *fp = NULL;
	int c;
	
	fp = fopen("input.txt", "r");
	
	if(fp == NULL)
	{
		printf("���� ���⿡ �����߽��ϴ�.\n");
	}
	else
	{
		printf("���� ���⿡ �����߽��ϴ�.\n");
	}
	
	while((c = fgetc(fp)) != EOF) // fget�� ���Ͽ��� ���� �ϳ��� �о c�� ����. EOF�� ������ ���� �ǹ� 
	{
		putchar(c); // ���� ���� �ִ� ������ ���� ������ ���ڿ��� �ϳ��� ����Ѵ�. 
	}
	
	fclose(fp);
	return 0;
}
