#include<stdio.h>
#include<string.h>
struct person
{
	char name[50];
	int age;
	char add[50];
};
void set_person(person*val)
{
	strcpy(val->name, "�����");
	val->age=20;
	strcpy(val->add, "���� ���� �ٵ�");
}
void print_person(person temp)
{
	printf("�̸� : %s\n",temp.name);
	printf("���� : %d\n",temp.age);
	printf("�ּ� : %s\n",temp.add);
}
void main()
{
	person A;
	set_person(&A);
	print_person(A);
}