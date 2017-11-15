#include<stdio.h>
void num(char*a)
{
	char c[26] = { 0 };
	char ap[26] = { 'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z' };
	for (int i = 0;a[i] != NULL;i++)
	{
		for (int j = 0;j < 26;j++)
		{
			if (a[i] == ap[j])
			{
				c[j]++;
			}
		}
	}
	for (int i = 0;i < 26;i++)
	{
		if (c[i] > 0)
		{
			printf("%c문자가 %d번 등장\n", i + 'a', c[i]);
		}
	}
}
//↑3번
void password(char*a)
{
	int num = 0, big = 0, small = 0;
	for (int i = 0;i < 50;i++)
	{
		if (a[i] > '0' && a[i] < '10')
		{
			num++;
		}
		if (a[i] >= 'a'&&a[i] <= 'z')
		{
			small++;
		}
		if (a[i] >= 'A'&&a[i] <= 'Z')
		{
			big++;
		}
	}
	if (num == 0 || small == 0 || big == 0)
	{
		printf("숫자 소문자 대문자를 모두 섞어 암호를 다시 만들어라\n");
		scanf("%s", a);
		password(a);
	}
	else
	{
		printf("적절한 암호이다\n");
	}
}
//↑1번
void space(char*a)
{
	
	printf("%s\n", a);
}
//↑4번
void reverse(char*a)
{
	int c = 0;
	for (int i = 0;a[i] != NULL;i++)
	{
		c++;
	}
	for (c-=1;c >= 0;c--)
	{
		printf("%c", a[c]);
	}
	printf("\n");
}
//↑7번
void smaller(char*a)
{
	for (int i = 0;a[i] != NULL;i++)
	{
		if ('A' <= a[i] && 'Z' >= a[i])
		{
			printf("%c", a[i] + ('a' - 'A'));
		}
		else
		{
			printf("%c", a[i]);
		}
	}
}
//↑8번
void count(char*a)
{
	int c = 0;
	for (int i = 0;a[i] != NULL;i++)
	{
		c++;
	}
	printf("개수:%d\n", c);
}
//↑9번
void reversecheck(char*a)
{

}
//↑10번
int main()
{
	char aa[50] = { 0 };
	char*a = aa;
	printf("입력 : ");
	scanf("%s", a);
	//num(a);
	//password(a);
	space(a);
	//reverse(a);
	//smaller(a);
	//count(a);
	return 0;
}