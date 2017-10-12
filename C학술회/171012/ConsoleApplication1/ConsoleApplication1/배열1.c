#include<stdio.h>
void odd_number(int*a)
{
	printf("È¦¼ö : ");
	for(int i=0;i<10;i++)
	{
		if(*(a+i)%2!=0)
		{
			printf("%d ",*(a+i));
		}
	}
	printf("\n");
}
void even_number(int*a)
{
	printf("Â¦¼ö : ");
	for(int i=0;i<10;i++)
	{
		if(*(a+i)%2==0)
		{
			printf("%d ",*(a+i));
		}
	}
	printf("\n");
}
int main()
{
	int a[10]={0};
	for(int i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	odd_number(a);
	even_number(a);
	return 0;
}