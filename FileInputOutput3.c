#include <stdio.h>
#include <string.h> 

// �ؽ�Ʈ ���Ͽ��� �ܾ �˻��ϴ� ���α׷�
 
int main(void)
{
	FILE *fp;
	char fname[256];
	char buffer[256];
	char word[256];
	int line = 0;
	
	printf("���� �̸��� �Է��ϼ��� : ");
	scanf("%s", fname); // �о�� ���� �Է� 
	
	printf("Ž���� �ܾ �Է��ϼ��� : ");
	scanf("%s", word);
	
	if((fp = fopen(fname, "r")) == NULL)
	{
		fprintf(stderr, "���� %s�� �� �� �����ϴ�.\n", fname); // ���� ���� ���� ��� �Լ� 
		return 0;
	}
	
	while(fgets(buffer, 256, fp)) // fp(���� ����)�� ������ buffer�� ���. fp ������ ���� ������ 
	{
		line++; // �� �� ����
		if(strstr(buffer, word)) // buffer�� �ܾ ���ԵǾ� �ִ��� �˻�
		{
			printf("���� %d : �ܾ� %s��(��) �߰ߵǾ����ϴ�. \n", line, word);
		}
	}
	
	fclose(fp);
	return 0;
}
