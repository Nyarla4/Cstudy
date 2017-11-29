/*#include<stdio.h>
int main()
{
	FILE *fp=NULL;
	fp=fopen("alphabet.txt","w");//FileOPEN:파일을 연다,Write:쓰기목적으로
	if (fp == NULL)
	{
		fprintf(stderr,"파일을 찾을수없음\n");
		exit(1);
	}
	char c;
	for(c='a';c<='z';c++)
	{fputc(c,fp);}//FilePUTCharacter
	fclose(fp);//*중요

	fp = fopen("alphabet.txt", "r");//Read:읽기목적으로
	int c_;
	while((c_=fgetc(fp))!=EOF)//EndOfFile
	putchar(c_);
	
	return 0;
}*/
//1번
/*#include<stdio.h>
#include<stdlib.h>
#define SIZE 10
int main()
{
	int *p = NULL;
	int i = 0;

	p = (int *)malloc(SIZE * sizeof(int));
	if (p == NULL)
	{
		printf("메모리 할당 오류\n");
		exit(1);
	}//동적 메모리 할당

	for (i = 0; i < SIZE; i++)
	{
		p[i] = rand();
		printf("%d ", p[i]);
	}//메모리를 난수로 초기화

	int max = p[0];
	for (i = 1; i < SIZE; i++)
	{
		if (p[i]>max)
			max = p[i];
	}//최대값서치

	printf("최댓값=%d\n",max);
	free(p);//이것은 무슨코드인것인가

	return 0;
}*/
//2번
//3번:power.h,power.c,main.c
#include<stdio.h>
#include<stdlib.h>
/*void reverse(char*a)
{
	int l=0;
	for(;*(a+l)!=0;l++)
	{}
	int cl=l/2;
	for (int i = 0; i < cl; i++)
	{
		char temp;
		temp = *(a + i);
		*(a + i) = *(a + l - i-1);
		*(a + l - i-1) = temp;
	}
}*/
//5번
/*int prime(int a)
{
	int c=0;
	for (int i = a; i > 1; i--)
	{
		if(a%i==0)
		c++;
	}
	if(c==1)
	return 1;
	else
	return 0;
}*/
//6번
int main()
{
	/*int num[1000];
	for (int i = 0; i < 1000; i++)
	{
		num[i]=rand()%6+1;
	}
	int count[6]={0};
	for (int i = 0; i < 1000; i++)
	{
		switch (num[i])
		{
		case 1:
			count[0]++;
			break;
		case 2:
			count[1]++;
			break;
		case 3:
			count[2]++;
			break;
		case 4:
			count[3]++;
			break;
		case 5:
			count[4]++;
			break;
		case 6:
			count[5]++;
			break;
		default:
			break;
		}
	}
	for (int i = 0; i < 6; i++)
	{
		printf("%d의 생성횟수:%d\n",i+1,count[i]);
	}
	int M=0,check=0;
	for (int i = 0; i < 6; i++)
	{
		if (M < count[i])
		{
			M=count[i];
			check=i;
		}
	}
	printf("가장 많이 생성된 수:%d\n",check+1);*/
	//4번
	/*char str[]="Hello World";
	reverse(str);
	printf("%s\n",str);*/
	//5번
	/*for (int k = 2; k <= 100; k++)
	{
		if(prime(k))
		printf("%d는 소수\n",k);
	}*/
	//6번
	return 0;
}