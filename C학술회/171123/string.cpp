//const:상수
/*
strcmp, compare : 비교하다
strcmp(const char *str1, const char *str2) : 문자열 두개
사전순 비교, str1이 더 앞 : 1
사전순 비교, str2가 더 앞 : -1
사전순 비교, 동일 : 0
*/
/*
strncmp
strncmp(const char *str1, const char *str2, size n)
strcmp와 동일, 앞에서 n번째까지만 비교
*/
/*
strchr(const char *str, char value)
찾고자하는 value가 발견된 첫번째의 포인터를 반환
못찾으면 NULL을 반환
*/
/*
strlen(const char *str)
문자열 길이 출력
*/
/*
strcpy(char *str1, const char *str2)
str1에 str2를 복사
*/
/*#include<stdio.h>
#include<string.h>
void main()
{
	char *str1 = "ABCD";
	char *str2 = "ABED";
	printf("str1과 str2의 비교:%d\n", strcmp(str1, str2));
	printf("str1과 str2의 %d까지의 비교:%d\n", 2, strncmp(str1, str2, 2));
	printf("%s\n",strchr(str1,'B'));
	printf("%d\n",strlen(str1));
	char value[50] = "abcd";
	strcpy(value, str1);//str1,str2의 경우 포인터로 설정한 문자열이기에 바꿀 수 없다
	printf("%s\n",value);
}*/