#include <stdio.h>
#include <stdlib.h> 

// 구조체는 서로 다른  데이터를 하나로 묶어서 사용할 수 있도록 하기 위해  만든 C언어 문법
// 구조체는 Name 과 Length 로 이루어짐
struct student{
	int number;
	char name[10];
	double grade;
};

int main(void)
{
	struct student s;
	
	printf("학번을 입력하세요 : ");
	scanf("%d", &s.number);
	printf("이름을 입력하세요 : ");
	scanf("%s", s.name); // 배열은 그 자체로 포인터의 의미를 가지고 있기 때문에 &붙이지 않음 
	printf("학점을 입력하세요 : ");
	scanf("%lf", &s.grade); // double 은 입력 받을 때 %lf로 받아야 함 *float 는 %f로 받음 
	
	printf("\n학번 : %d\n", s.number);
	printf("이름 : %s\n", s.name);
	printf("학점 : %.1f\n", s.grade); 
	
	return 0;
}
