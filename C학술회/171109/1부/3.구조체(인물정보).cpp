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

	strcpy(man1.name, "�����");//strcpy(����,"��");
	strcpy(man1.phoneNum, "010-0000-0000");
	man1.age = 20;*/
	person P[3];//person�̶�� struct�� ũ��5�� �迭�� ����

	strcpy(P[0].name,"�輺��");
	strcpy(P[0].phoneNum,"010-1234-4567");
	P[0].age=20;
	strcpy(P[1].name, "ȫ�浿");
	strcpy(P[1].phoneNum, "010-1111-2222");
	P[1].age = 20;
	strcpy(P[2].name, "������");
	strcpy(P[2].phoneNum, "010-4455-6244");
	P[2].age = 24;
}