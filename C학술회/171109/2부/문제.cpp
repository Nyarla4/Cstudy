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
	strcpy(val->name, "김뫄뫄");
	val->age=20;
	strcpy(val->add, "가시 나구 다동");
}
void print_person(person temp)
{
	printf("이름 : %s\n",temp.name);
	printf("나이 : %d\n",temp.age);
	printf("주소 : %s\n",temp.add);
}
void main()
{
	person A;
	set_person(&A);
	print_person(A);
}