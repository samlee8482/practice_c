#include <stdio.h>

// �� ������ ���� ���� ��ȯ�ϴ� ������ �Լ� 
void swap(int *x, int *y) // *x�� x��� �ּҿ� �ִ� ���� �����´ٶ�� �ǹ� 
{
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}

int main(void)
{
	int x = 1;
	int y = 2;
	swap(&x, &y); // &x�� x�� �ּ� 
	printf("x = %d\ny = %d\n", x, y);
	
	// �������ڸ�
	// int x = 50;
	// int *y = &x; �� �� 
	// x = *y
	// &x = y 
	
	return 0;
 } 
