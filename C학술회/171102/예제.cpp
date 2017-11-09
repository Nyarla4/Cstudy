#include<iostream>
#include<string>
using namespace std;
struct Person
{
	char name[20];
	char PN[20];
	int age;
};
void main(void)
{
	struct Person man1, man2;
	strcpy(man1.name, "안성준");//문자열은 char a[50]=asdf등의 =의 사용이 불가능 하므로 strcpy를 사용
	strcpy(man1.PN, "010-1122-3344");
	man1.age = 23;

	printf("이름 입력: ");scanf("%s", man2.name);
	printf("번호 입력: ");scanf("%s", man2.PN);
	printf("나이 입력: ");scanf("%d", &(man2.age));

	printf("man1\n%s\n%s\n%d\n", man1.name, man1.PN, man1.age);
	printf("man1\n%s\n%s\n%d\n", man2.name, man2.PN, man2.age);
}