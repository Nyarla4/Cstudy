/*#include<stdio.h>
int main()
{
	FILE *fp=NULL;
	fp=fopen("alphabet.txt","w");//FileOPEN:������ ����,Write:�����������
	if (fp == NULL)
	{
		fprintf(stderr,"������ ã��������\n");
		exit(1);
	}
	char c;
	for(c='a';c<='z';c++)
	{fputc(c,fp);}//FilePUTCharacter
	fclose(fp);//*�߿�

	fp = fopen("alphabet.txt", "r");//Read:�б��������
	int c_;
	while((c_=fgetc(fp))!=EOF)//EndOfFile
	putchar(c_);
	
	return 0;
}*/
//1��
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
		printf("�޸� �Ҵ� ����\n");
		exit(1);
	}//���� �޸� �Ҵ�

	for (i = 0; i < SIZE; i++)
	{
		p[i] = rand();
		printf("%d ", p[i]);
	}//�޸𸮸� ������ �ʱ�ȭ

	int max = p[0];
	for (i = 1; i < SIZE; i++)
	{
		if (p[i]>max)
			max = p[i];
	}//�ִ밪��ġ

	printf("�ִ�=%d\n",max);
	free(p);//�̰��� �����ڵ��ΰ��ΰ�

	return 0;
}*/
//2��
//3��:power.h,power.c,main.c
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
//5��
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
//6��
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
		printf("%d�� ����Ƚ��:%d\n",i+1,count[i]);
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
	printf("���� ���� ������ ��:%d\n",check+1);*/
	//4��
	/*char str[]="Hello World";
	reverse(str);
	printf("%s\n",str);*/
	//5��
	/*for (int k = 2; k <= 100; k++)
	{
		if(prime(k))
		printf("%d�� �Ҽ�\n",k);
	}*/
	//6��
	return 0;
}