#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct book
{
	int number;
	char title[100];
};

void showBook(struct book *p, int n)
{
	int i;
	for(i = 0; i < n; i++)
	{
		printf("번호 %d : %s\n", (p + i)->number, (p + i)->title);
	}
}

int main(void)
{
	struct book *p;
	p = (struct book *)malloc(2 * sizeof(struct book));
	if(p == NULL)
	{
		printf("동적 메모리 할당에 실패했습니다.\n");
		exit(1);
	}
	
	p->number = 1;
	strcpy(p->title, "C Programming");
	
	(p + 1)->number = 2;
	strcpy((p + 1)->title, "Data Structure");
	
	showBook(p, 2);
	free(p);
	return 0;
}
