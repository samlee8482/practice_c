#include <stdio.h>
#include <limits.h> // �Ѱ谪�� ������ ���̺귯�� 

int main(void)
{
	int x;
	x = 5;
	printf("%d", x);
	printf("���� x�� �޸� ũ��� %d�Դϴ�.", sizeof(x));
	
	int y = INT_MAX; // int�� �ִ� 
	printf("int���� �ִ� y�� %d�Դϴ�.\n", y);
	printf("y + 1�� %d�Դϴ�. \n", y + 1); // �����÷ο� 
	
	return 0;
}
