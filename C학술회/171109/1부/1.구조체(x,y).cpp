#include<stdio.h>
struct point//point라는 것이 메인에서 자료형으로 취급됨
{
	int x;
	int y;
};

void main()
{
	struct/*←자료형,없어도 작동함*/ point position;
	position.x = 0;
	position.y = 1;
	printf("(%d,%d)\n",position.x,position.y);
}