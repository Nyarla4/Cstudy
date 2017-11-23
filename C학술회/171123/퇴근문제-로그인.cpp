#include<stdio.h>
#include<string.h>
struct Login
{
	char ID[500];
	char PW[500];
};
struct Login P[500];
int Q = 0;
int check = 0;
void addMember(struct Login a,int c)
{
	strcpy(P[c].ID,a.ID);
	strcpy(P[c].PW,a.PW);
}
void login(struct Login a,struct Login b)
{
	if (strcmp(a.ID, b.ID) == 0&& strcmp(a.PW, b.PW) == 0)
	{
		printf("로그인 성공\n");
		Q=1;
	}
	else
	{
		if (strcmp(a.ID, b.ID) == 0)
		{
			printf("비밀번호 오류\n");
			check = 0;
		}
		if (strcmp(a.PW, b.PW) == 0)
		{
			printf("아이디 오류\n");
			check = 0;
		}
	}
}
void main()
{
	struct Login A;
	int select=0;
	int loop=1;
	while(loop!=0)
	{
	Q = 0;
	printf("1.회원가입\n2.로그인\n");
	scanf("%d",&select);
	switch (select)
	{
	case 1:
		printf("회원가입\n");
		printf("ID:");
		scanf("%s", A.ID);
		printf("PassWord:");
		scanf("%s", A.PW);
		addMember(A,check);
		check++;
		break;
	case 2:
		for (check=0;Q == 0;check++)
		{
			printf("ID:");
			scanf("%s", A.ID);
			printf("PassWord:");
			scanf("%s", A.PW);
			login(A, P[check]);
			if (Q != 0)
			{
				loop=0;
			}
		}
		break;
	case 0:
		loop=0;
	default:
		break;
	}
	}
}