//구조체에서도 배열 사용이 가능
#include<iostream>
#include<string>
using namespace std;

struct Point
{
	int x;
	int y;
};

void Merge(Point* p1, Point *p2)
{
	p1->/*주소값을 받아 그 주소에 있는것을 사용*/x += p2->x;
	p1->y += p2->y;
}

void main(void)
{
	struct Point P[2];
	P[0].x = 0;
	P[0].y = 0;
	P[1].x = 50;
	P[1].y = 150;

	Merge(&P[0], &P[1]);

	printf("%d,%d \n", P[0].x, P[0].y);
}