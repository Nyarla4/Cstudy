#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define M 10
int main()
{
	int tile[M]={0};
	int bug=4;
	int boom=0;
	int try=0;
	int der=rand(time)%2;
	for(int i=0;i<M;i++)
	{
		tile[i]='_';
	}
	while (1)
	{
		for (int i = 0; i<M; i++)
		{
			if (i == bug)
			{
				printf("≠");
			}
			else
			{
				printf("%c", tile[i]);
			}
		}
		printf("\n");
		try+=1;
		if (der == 0)
		{
			bug -= 1;
		}
		else
		{
			bug += 1;
		}
		if(bug>=M)
		{
			printf(">>>辦醱給<<<\n");
			bug-=1;
			boom += 1;
		}
		if(bug<0)
		{
			printf(">>>謝醱給<<<\n"); 
			bug+=1;
			boom += 1;
		}
		printf("醱給�捕�:%d%%\n",boom*100/try);
		der = rand(time) % 2;
		getch();
	}
	return 0;
}