#include<stdio.h>
struct point//point��� ���� ���ο��� �ڷ������� ��޵�
{
	int x;
	int y;
};

void main()
{
	struct/*���ڷ���,��� �۵���*/ point position;
	position.x = 0;
	position.y = 1;
	printf("(%d,%d)\n",position.x,position.y);
}