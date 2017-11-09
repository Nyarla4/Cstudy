#include<stdio.h>

struct point
{
	int x;
	int y;
};
struct circle
{
	double radius;
	point*center;
};

void main()
{
	point val = { 1,1 };
	double R = 5.0;
	circle R1 = { R,&val };

	printf("원의 반지름 : %.1f\n", R1.radius);
	printf("원의 중심 : (%d,%d)\n", *R1.center);
	printf("원의 중심 : (%d,%d)\n", R1.center->x, R1.center->y);
}