//const:���
/*
strcmp, compare : ���ϴ�
strcmp(const char *str1, const char *str2) : ���ڿ� �ΰ�
������ ��, str1�� �� �� : 1
������ ��, str2�� �� �� : -1
������ ��, ���� : 0
*/
/*
strncmp
strncmp(const char *str1, const char *str2, size n)
strcmp�� ����, �տ��� n��°������ ��
*/
/*
strchr(const char *str, char value)
ã�����ϴ� value�� �߰ߵ� ù��°�� �����͸� ��ȯ
��ã���� NULL�� ��ȯ
*/
/*
strlen(const char *str)
���ڿ� ���� ���
*/
/*
strcpy(char *str1, const char *str2)
str1�� str2�� ����
*/
/*#include<stdio.h>
#include<string.h>
void main()
{
	char *str1 = "ABCD";
	char *str2 = "ABED";
	printf("str1�� str2�� ��:%d\n", strcmp(str1, str2));
	printf("str1�� str2�� %d������ ��:%d\n", 2, strncmp(str1, str2, 2));
	printf("%s\n",strchr(str1,'B'));
	printf("%d\n",strlen(str1));
	char value[50] = "abcd";
	strcpy(value, str1);//str1,str2�� ��� �����ͷ� ������ ���ڿ��̱⿡ �ٲ� �� ����
	printf("%s\n",value);
}*/