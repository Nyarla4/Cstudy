#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/*int Fibo(int num);

int main()
{
	int N;
	scanf("%d",&N);
	for(int i=0;i<=N;i++)
		printf("F%d = %d\n",i,Fibo(i));
	return 0;
}
int Fibo(int num)
{
	if(num==0)
		return 0;
	else if(num==1)
		return 1;
	else
		return Fibo(num-1)+Fibo(num-2);
	
}*/
int main()
{
	int m=0,n[10];
	srand(time(NULL));
	for(int i=0;i<10;i++)
		{
			n[i]= rand() % 100 + 1;
			printf("%d ",n[i]);
			if(n[i]>m)
				m= n[i];
			else
				m=m;
			printf("%d\n",m);
		}
		printf("\n최댓값은 아마 %d",m);
	printf("\n");
		return 0;
}