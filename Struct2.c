#include <stdio.h>
#include <stdlib.h> 

// ����ü�� ���� �ٸ�  �����͸� �ϳ��� ��� ����� �� �ֵ��� �ϱ� ����  ���� C��� ����
// ����ü�� Name �� Length �� �̷����
struct student{
	int number;
	char name[10];
	double grade;
};

int main(void)
{
	struct student s;
	
	printf("�й��� �Է��ϼ��� : ");
	scanf("%d", &s.number);
	printf("�̸��� �Է��ϼ��� : ");
	scanf("%s", s.name); // �迭�� �� ��ü�� �������� �ǹ̸� ������ �ֱ� ������ &������ ���� 
	printf("������ �Է��ϼ��� : ");
	scanf("%lf", &s.grade); // double �� �Է� ���� �� %lf�� �޾ƾ� �� *float �� %f�� ���� 
	
	printf("\n�й� : %d\n", s.number);
	printf("�̸� : %s\n", s.name);
	printf("���� : %.1f\n", s.grade); 
	
	return 0;
}
