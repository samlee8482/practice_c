#include <stdio.h>
#include <math.h>

// 구조체를 쓰는 이유는 데이터를 한번에 묶어서 사용할 수 있고 관리하기 용이함 

struct point {
	int x;
	int y;
};

struct rect {
	struct point p1;
	struct point p2;
};

int main(void)
{
	struct rect r;
	int w, h, area, peri;
	
	printf("왼쪽 상단의 좌표를 입력하세요 : ");
	scanf("%d %d", &r.p1.x, &r.p1.y);
	
	printf("오른쪽 하단의 좌표를 입력하세요 : ");
	scanf("%d %d", &r.p2.x, &r.p2.y);
	
	w = abs(r.p2.x - r.p1.x); // 절대값을 구하는 함수
	h = abs(r.p2.y - r.p1.y);
	
	area = w * h;
	peri = 2 * w + 2 * h ;
	
	printf("사각형의 넓이는 %d이고, 둘레는 %d입니다.", area, peri);
	return 0; 
}

