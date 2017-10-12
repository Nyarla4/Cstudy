#include<stdio.h>
int N1=0,N2=0,N3=0,n1=0,i;
int main()
{
	scanf("%d %d",&N1,&N2);
	if(N1>N2)
	{
		N3=N1;
	}
	else
	{
		N3=N2;
	}
	for(i=1;i<=N3;i++)
	{
		if(N1%i==0&&N2%i==0)
		{
			if(i>n1)
			{
				n1=i;
			}
			
		}
	}
	printf("최대공약수는 %d\n",n1);
	//최소공배수 수정필요 
	n1=N3;
	for(i=N3;i<=500;i++)
	{
		if(i%N1==0&&i%N2==0)
		{
			if(i<n1)
			{
				n1=i;
			}
			
		}
	}
	printf("최소공배수는 %d\n",n1);
	return 0;
}
