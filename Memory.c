#include <stdio.h>
#include <stdlib.h>

// ���� �޸𸮷� �޸𸮸� ȿ�������� ������ �� �ִ�. 

int main(void)
{
	int *pi; // Pointer Integer. pi�� ������ ����. �ּҸ� ����ϴ� ���� 
	pi = (int *)malloc(sizeof(int)); // malloc - �޸𸮸� �Ҵ��ض�. int���� ũ�⸸ŭ �Ҵ��ض�. 4�־ ������� 
	if(pi == NULL)
	{
		printf("���� �޸� �Ҵ翡 �����߽��ϴ�.\n");
		exit(1);
	} 
	
	*pi = 100;
	printf("%d\n", *pi);
	// ���� �޸� ����� ���Ŀ��� ������ �ش� �޸𸮸� �ݳ��ؾ� �Ѵ�. '�Ҵ�����'
	free(pi);
	
	return 0;
}
