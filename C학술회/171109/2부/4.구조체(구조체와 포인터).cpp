#include<stdio.h>

struct point
{
	int x;
	int y;
};

void main()
{
	point pos1;
	pos1.x = 1;
	pos1.y = 2;

	point pos2 = { 100,200 };

	point*pptr = NULL;
	pptr = &pos1;//(*pptr).x=pos1.x=pptr->x(������ ��ȣ)
	printf("pos1�� ��ǥ:(%d,%d)\n", (*pptr).x, (*pptr).y);
	pptr->x += 4;
	pptr->y += 5;

	pptr = &pos2;
	pptr->x += 100;
	pptr->y += 200;
	printf("pos2�� ��ǥ:(%d,%d)\n", pptr->x, pptr->y);
}