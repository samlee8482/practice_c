#include <stdio.h>

int main(void)
{
	char input[1001];
	gets(input); // �迭 �� �Է� 
	int count = 0;
	while(input[count] != '\0') // \0�� null �� ����. �迭 �� ���ڿ� ���� ���� \0 
	{
		count++;
	}
	printf("�Է��� ���ڿ��� ���̴� %d�Դϴ�.", count);
	printf("\n�Է��� ���ڿ� : %s�Դϴ�", input); // %s�� string�� ���ڷμ� ���ڿ��� �ǹ��ϴ� ���� ������ 
	return 0;
}
