#include<iostream>
#include<string>
using namespace std;
struct employee
{
	char name[50];
	char Num[20];
	int pay;
};
void main(void)
{
	struct  employee JEW;
	printf("�̸�: ");scanf("%s", JEW.name);
	printf("�ֹε�Ϲ�ȣ: ");scanf("%s", JEW.Num);
	printf("�޷�: ");scanf("%d", &(JEW.pay));
	printf("�̸� : %s\n�ֹε�Ϲ�ȣ : %s\n�޷� : %s\n", JEW.name, JEW.Num, JEW.pay);
}