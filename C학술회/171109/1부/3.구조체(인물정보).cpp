#include<stdio.h>
#include<string.h>
struct person
{
	char name[50];
	char phoneNum[20];
	int age;
};

void main()
{
	/*struct person man1;

	strcpy(man1.name, "±è¸ú¸ú");//strcpy(º¯¼ö,"°ª");
	strcpy(man1.phoneNum, "010-0000-0000");
	man1.age = 20;*/
	person P[3];//personÀÌ¶ó´Â struct¸¦ Å©±â5ÀÇ ¹è¿­·Î ¼±¾ð

	strcpy(P[0].name,"±è¼º¹Î");
	strcpy(P[0].phoneNum,"010-1234-4567");
	P[0].age=20;
	strcpy(P[1].name, "È«±æµ¿");
	strcpy(P[1].phoneNum, "010-1111-2222");
	P[1].age = 20;
	strcpy(P[2].name, "ÀÌÁØÇü");
	strcpy(P[2].phoneNum, "010-4455-6244");
	P[2].age = 24;
}