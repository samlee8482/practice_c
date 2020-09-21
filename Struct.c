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
	s.number = 20150001;
	strcpy(s.name, "홍길동");
	s.grade = 4.5;
	printf("학번 : %d\n", s.number);
	printf("이름 : %s\n", s.name);
	printf("학점 : %.1f\n", s.grade); 
	
	return 0;
}
