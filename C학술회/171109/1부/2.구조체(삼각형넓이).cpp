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
		printf("넓이 : %d\n",area());
	}
	/*위의 두 함수 대신
	void area()
	{
		printf("넓이 : %d\n",width*height/2);
	}
	으로 만들고 메인에서 tri.print()대신 tri.area()라고 해도 된다.
	*/
};

void main()
{
	object tri;
	scanf("%d", &tri.width);
	scanf("%d", &tri.height);
	tri.print();
}