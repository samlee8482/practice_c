#include <stdio.h>
#include <string.h>

int main(void)
{
	char inputOne[5] = "A";
	char inputTwo[5] = "A";
	printf("���ڿ� �� : %d\n", strcmp(inputOne, inputTwo));
	// strcmp�� ���� ���� ������ �� ���̶�� -1
	// ������ ���� ������ �� ���̶�� 1
	// �� ���ڰ� ���ٸ� 0�� ��ȯ 
	
	return 0;
}
