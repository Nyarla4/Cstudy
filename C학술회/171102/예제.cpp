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
	strcpy(man1.name, "�ȼ���");//���ڿ��� char a[50]=asdf���� =�� ����� �Ұ��� �ϹǷ� strcpy�� ���
	strcpy(man1.PN, "010-1122-3344");
	man1.age = 23;

	printf("�̸� �Է�: ");scanf("%s", man2.name);
	printf("��ȣ �Է�: ");scanf("%s", man2.PN);
	printf("���� �Է�: ");scanf("%d", &(man2.age));

	printf("man1\n%s\n%s\n%d\n", man1.name, man1.PN, man1.age);
	printf("man1\n%s\n%s\n%d\n", man2.name, man2.PN, man2.age);
}