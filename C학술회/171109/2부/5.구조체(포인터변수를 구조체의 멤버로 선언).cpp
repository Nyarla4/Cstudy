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

	printf("���� ������ : %.1f\n", R1.radius);
	printf("���� �߽� : (%d,%d)\n", *R1.center);
	printf("���� �߽� : (%d,%d)\n", R1.center->x, R1.center->y);
}