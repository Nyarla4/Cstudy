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
			printf("%c���ڰ� %d�� ����\n", i + 'a', c[i]);
		}
	}
}
//��3��
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
		printf("���� �ҹ��� �빮�ڸ� ��� ���� ��ȣ�� �ٽ� ������\n");
		scanf("%s", a);
		password(a);
	}
	else
	{
		printf("������ ��ȣ�̴�\n");
	}
}
//��1��
void space(char*a)
{
	
	printf("%s\n", a);
}
//��4��
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
//��7��
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
//��8��
void count(char*a)
{
	int c = 0;
	for (int i = 0;a[i] != NULL;i++)
	{
		c++;
	}
	printf("����:%d\n", c);
}
//��9��
void reversecheck(char*a)
{

}
//��10��
int main()
{
	char aa[50] = { 0 };
	char*a = aa;
	printf("�Է� : ");
	scanf("%s", a);
	//num(a);
	//password(a);
	space(a);
	//reverse(a);
	//smaller(a);
	//count(a);
	return 0;
}