#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char *pc = NULL;
	int i = 0;
	
	pc = (char *)malloc(100 * sizeof(char)); // �迭�� ���� 
	if(pc == NULL)
	{
		printf("���� �޸� �Ҵ翡 �����߽��ϴ�.\n");
		exit(1);
	}
	// pc�� ����Ű�� �����͸� 1�� ������Ű�� ���ĺ� �ҹ��ڸ� �����Ѵ�.
	for(i = 0; i < 26; i++)
	{
		*(pc + i) = 'a' + i;
	}
	// �ƽ�Ű �ڵ� 0�� NULL�� �ǹ��Ѵ�. ��ǻ�Ͱ� ���ڿ��� �������� �ν��� 
	*(pc + i) = 0;
	
	printf("%s\n", pc); // NULL ���� ���������� �������
	
	free(pc);
	return 0;
 } 
