#include<stdio.h>
struct object
{
	int width;
	int height;
	int area()
	{
		return width*height / 2;
	}
	void print()
	{
		printf("���� : %d\n",area());
	}
	/*���� �� �Լ� ���
	void area()
	{
		printf("���� : %d\n",width*height/2);
	}
	���� ����� ���ο��� tri.print()��� tri.area()��� �ص� �ȴ�.
	*/
};

void main()
{
	object tri;
	scanf("%d", &tri.width);
	scanf("%d", &tri.height);
	tri.print();
}